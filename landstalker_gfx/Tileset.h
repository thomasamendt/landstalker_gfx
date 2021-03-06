#ifndef TILESET_H
#define TILESET_H

#include <memory>
#include <cstdint>
#include <vector>
#include "TileAttributes.h"
#include "Palette.h"
#include "Tile.h"
    
class Tileset
{
public:
    Tileset();
    ~Tileset();
    
    void setBits(const uint8_t* src, size_t numTiles);
    std::vector<uint8_t> getTile(const Tile& tile) const;
    size_t size() const;
private:
    
    static const size_t WIDTH = 8;
    static const size_t HEIGHT = 8;
    
    std::vector<std::vector<uint8_t>> m_tiles;
};

#endif // TILESET_H
