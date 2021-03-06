#ifndef ROM_H
#define ROM_H

#include <string>
#include <cstdint>
#include <fstream>
#include <sstream>
#include <exception>
#include <vector>

class Rom
{
public:

	Rom(const std::string filename)
	: m_initialised(false)
	{
		load_from_file(filename);
	}

	Rom(const Rom& rhs)
	: m_rom(rhs.m_rom), m_initialised(rhs.m_initialised)
	{}

	Rom()
	: m_initialised(false)
	{}

	void load_from_file(std::string filename)
	{
		std::ifstream infile;
		infile.open(filename, std::ios::in | std::ios::binary | std::ios::ate);

		if (!infile.is_open())
		{
			std::ostringstream ss;
			ss << "Unable to open ROM file \"" << filename << "\".";
			throw std::runtime_error(ss.str());
		}

		infile.seekg(0, std::ios::end);
		size_t size = static_cast<size_t>(infile.tellg());
		infile.seekg(0, std::ios::beg);

		if (size < EXPECTED_SIZE)
		{
			std::ostringstream ss;
			ss << "ROM file " << filename << ": Bad ROM size! Expected " << std::dec << EXPECTED_SIZE << " bytes, read " << size << " bytes.";
			throw std::runtime_error(ss.str());
		}

		m_rom.assign(size, 0);
		infile.read(reinterpret_cast<char*>(m_rom.data()), size);
		infile.close();
		m_initialised = true;
	}

	Rom& operator=(const Rom& rhs)
	{
		m_rom = rhs.m_rom;
		return *this;
	}

	template< class T >
	T read(size_t offset) const;

	template<class T>
	std::vector<T> read_array(size_t offset, size_t count) const;

	template< class T >
	T deref(size_t address, size_t offset = 0) const
	{
		return read<T>(read<uint32_t>(address) + offset * sizeof(T));
	}

	const uint8_t* data(size_t address = 0) const
	{
		return m_rom.data() + address;
	}

private:
	bool m_initialised;
	std::vector<uint8_t> m_rom;
	static const size_t EXPECTED_SIZE = (2 * 1024 * 1024);
};

template< class T >
inline T Rom::read(size_t offset) const
{
	T retval = 0;
	if (m_initialised == false)
	{
		throw std::runtime_error("Attempt to read from uninitialised ROM.");
	}
	for (size_t i = 0; i < sizeof(T); ++i)
	{
		retval <<= 8;
		retval |= m_rom[offset + i];
	}
	return retval;
}

template<>
inline bool Rom::read<bool>(size_t offset) const
{
	if (m_initialised == false)
	{
		throw std::runtime_error("Attempt to read from uninitialised ROM.");
	}
	return (m_rom[offset] > 0);
}

template<class T>
inline std::vector<T> Rom::read_array(size_t offset, size_t count) const
{
	std::vector<T> ret;
	ret.reserve(count);
	for (size_t i = 0; i < count; ++i)
	{
		ret.push_back(read<T>(offset + i * sizeof(T)));
	}
	return ret;
}

template<>
inline std::vector<bool> Rom::read_array(size_t offset, size_t count) const
{
	std::vector<bool> ret;
	ret.reserve(count);
	for (size_t i = 0; i < count; ++i)
	{
		ret.push_back(read<bool>(offset + i));
	}
	return ret;
}

#endif // ROM_H
