//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#include "wxcrafter.h"

// Declare the bitmap loading function
extern void wxC9ED9InitBitmapResources();

static bool bBitmapLoaded = false;

MainFrameBaseClass::MainFrameBaseClass(wxWindow* parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos,
    const wxSize& size,
    long style)
    : wxFrame(parent, id, title, pos, size, style)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }
    // Set icon(s) to the application/dialog
    wxIconBundle app_icons;
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("msword"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("msword"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("msword"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("msword"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    {
        wxBitmap iconBmp = wxXmlResource::Get()->LoadBitmap(wxT("msword"));
        wxIcon icn;
        icn.CopyFromBitmap(iconBmp);
        app_icons.AddIcon(icn);
    }
    SetIcons(app_icons);

    m_menubar = new wxMenuBar(0);
    this->SetMenuBar(m_menubar);

    m_mnu_file = new wxMenu();
    m_menubar->Append(m_mnu_file, _("File"));

    m_mnu_open = new wxMenuItem(m_mnu_file, wxID_ANY, _("Open\tCtrl-O"), _("Open"), wxITEM_NORMAL);
    m_mnu_file->Append(m_mnu_open);

    m_mnu_export = new wxMenuItem(m_mnu_file, wxID_ANY, _("Export to PNG\tCtrl+E"), wxT(""), wxITEM_NORMAL);
    m_mnu_file->Append(m_mnu_export);

    m_mnu_file->AppendSeparator();

    m_mnu_exit = new wxMenuItem(m_mnu_file, wxID_EXIT, _("Exit\tAlt-X"), _("Quit"), wxITEM_NORMAL);
    m_mnu_file->Append(m_mnu_exit);

    m_mnu_help = new wxMenu();
    m_menubar->Append(m_mnu_help, _("Help"));

    m_mnu_about = new wxMenuItem(m_mnu_help, wxID_ABOUT, _("About..."), wxT(""), wxITEM_NORMAL);
    m_mnu_help->Append(m_mnu_about);

    m_statusbar = new wxStatusBar(this, wxID_ANY, wxSTB_DEFAULT_STYLE);
    m_statusbar->SetFieldsCount(1);
    this->SetStatusBar(m_statusbar);

    m_window = new wxAuiManager;
    m_window->SetManagedWindow(this);
    m_window->SetFlags(wxAUI_MGR_LIVE_RESIZE | wxAUI_MGR_TRANSPARENT_HINT | wxAUI_MGR_TRANSPARENT_DRAG |
        wxAUI_MGR_ALLOW_ACTIVE_PANE | wxAUI_MGR_ALLOW_FLOATING);
    m_window->GetArtProvider()->SetMetric(wxAUI_DOCKART_GRADIENT_TYPE, wxAUI_GRADIENT_NONE);

    m_panel_browser = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    m_window->AddPane(m_panel_browser,
        wxAuiPaneInfo()
            .Caption(_("Browser"))
            .Direction(wxAUI_DOCK_LEFT)
            .Layer(0)
            .Row(0)
            .Position(0)
            .BestSize(200, 150)
            .MinSize(100, 100)
            .MaxSize(100, 100)
            .CaptionVisible(true)
            .MaximizeButton(false)
            .CloseButton(false)
            .MinimizeButton(false)
            .PinButton(false));

    wxBoxSizer* m_boxsizer_browser = new wxBoxSizer(wxVERTICAL);
    m_panel_browser->SetSizer(m_boxsizer_browser);

    m_browser = new wxTreeCtrl(m_panel_browser, wxID_ANY, wxDefaultPosition,
        wxDLG_UNIT(m_panel_browser, wxSize(300, 50)), wxTR_DEFAULT_STYLE | wxTR_HIDE_ROOT | wxFULL_REPAINT_ON_RESIZE);

    m_boxsizer_browser->Add(m_browser, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));
    m_browser->SetMinSize(wxSize(300, 50));

    m_panel_properties =
        new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    m_window->AddPane(m_panel_properties,
        wxAuiPaneInfo()
            .Caption(_("Properties"))
            .Direction(wxAUI_DOCK_LEFT)
            .Layer(0)
            .Row(0)
            .Position(1)
            .BestSize(200, 100)
            .MinSize(100, 100)
            .MaxSize(100, 100)
            .CaptionVisible(true)
            .MaximizeButton(false)
            .CloseButton(false)
            .MinimizeButton(false)
            .PinButton(false));

    wxBoxSizer* m_boxsizer_properties = new wxBoxSizer(wxVERTICAL);
    m_panel_properties->SetSizer(m_boxsizer_properties);

    wxArrayString m_propertiesArr;
    wxUnusedVar(m_propertiesArr);
    wxArrayInt m_propertiesIntArr;
    wxUnusedVar(m_propertiesIntArr);
    m_properties = new wxPropertyGridManager(m_panel_properties, wxID_ANY, wxDefaultPosition,
        wxDLG_UNIT(m_panel_properties, wxSize(300, 50)),
        wxPG_DESCRIPTION | wxPG_LIMITED_EDITING | wxPG_BOLD_MODIFIED | wxPG_AUTO_SORT);

    m_boxsizer_properties->Add(m_properties, 1, wxALL | wxEXPAND, WXC_FROM_DIP(5));
    m_properties->SetMinSize(wxSize(300, 50));

    m_panel_layers =
        new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(200, 130)), wxTAB_TRAVERSAL);

    m_window->AddPane(m_panel_layers,
        wxAuiPaneInfo()
            .Caption(_("Layers"))
            .Direction(wxAUI_DOCK_RIGHT)
            .Layer(0)
            .Row(0)
            .Position(0)
            .MinSize(200, 115)
            .MaxSize(200, 115)
            .Fixed()
            .CaptionVisible(true)
            .MaximizeButton(false)
            .CloseButton(false)
            .MinimizeButton(false)
            .PinButton(false));

    wxFlexGridSizer* flexGridSizer220 = new wxFlexGridSizer(5, 3, 0, 0);
    flexGridSizer220->SetFlexibleDirection(wxBOTH);
    flexGridSizer220->SetNonFlexibleGrowMode(wxFLEX_GROWMODE_SPECIFIED);
    flexGridSizer220->AddGrowableCol(0);
    flexGridSizer220->SetMinSize(200, 120);
    m_panel_layers->SetSizer(flexGridSizer220);

    m_optBgSelect = new wxRadioButton(
        m_panel_layers, 10100, _("Background"), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_optBgSelect->Enable(false);
    m_optBgSelect->SetValue(1);

    flexGridSizer220->Add(m_optBgSelect, 0, wxLEFT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_checkBgVisible = new wxCheckBox(
        m_panel_layers, 10200, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_checkBgVisible->SetValue(true);
    m_checkBgVisible->Enable(false);

    flexGridSizer220->Add(
        m_checkBgVisible, 0, wxALIGN_CENTER | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_sliderBgOpacity = new wxSlider(m_panel_layers, 10300, 255, 0, 255, wxDefaultPosition,
        wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), wxSL_HORIZONTAL);
    m_sliderBgOpacity->Enable(false);

    flexGridSizer220->Add(
        m_sliderBgOpacity, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));
    m_sliderBgOpacity->SetMinSize(wxSize(75, -1));

    m_optFg1Select = new wxRadioButton(
        m_panel_layers, 10101, _("Foreground 1"), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_optFg1Select->Enable(false);
    m_optFg1Select->SetValue(0);

    flexGridSizer220->Add(m_optFg1Select, 0, wxLEFT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_checkFg1Visible = new wxCheckBox(
        m_panel_layers, 10201, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_checkFg1Visible->SetValue(true);
    m_checkFg1Visible->Enable(false);

    flexGridSizer220->Add(
        m_checkFg1Visible, 0, wxALIGN_CENTER | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_sliderFg1Opacity = new wxSlider(m_panel_layers, 10301, 255, 0, 255, wxDefaultPosition,
        wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), wxSL_HORIZONTAL);
    m_sliderFg1Opacity->Enable(false);

    flexGridSizer220->Add(
        m_sliderFg1Opacity, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));
    m_sliderFg1Opacity->SetMinSize(wxSize(75, -1));

    m_optFg2Select = new wxRadioButton(
        m_panel_layers, 10102, _("Foreground 2"), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_optFg2Select->Enable(false);
    m_optFg2Select->SetValue(0);

    flexGridSizer220->Add(m_optFg2Select, 0, wxLEFT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_checkFg2Visible = new wxCheckBox(
        m_panel_layers, 10202, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_checkFg2Visible->SetValue(true);
    m_checkFg2Visible->Enable(false);

    flexGridSizer220->Add(
        m_checkFg2Visible, 0, wxALIGN_CENTER | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_sliderFg2Opacity = new wxSlider(m_panel_layers, 10302, 255, 0, 255, wxDefaultPosition,
        wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), wxSL_HORIZONTAL);
    m_sliderFg2Opacity->Enable(false);

    flexGridSizer220->Add(
        m_sliderFg2Opacity, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));
    m_sliderFg2Opacity->SetMinSize(wxSize(75, -1));

    m_optHeightmapSelect = new wxRadioButton(
        m_panel_layers, 10103, _("Heightmap"), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_optHeightmapSelect->Enable(false);
    m_optHeightmapSelect->SetValue(0);

    flexGridSizer220->Add(m_optHeightmapSelect, 0, wxLEFT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_checkHeightmapVisible = new wxCheckBox(
        m_panel_layers, 10203, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_checkHeightmapVisible->SetValue(true);
    m_checkHeightmapVisible->Enable(false);

    flexGridSizer220->Add(
        m_checkHeightmapVisible, 0, wxALIGN_CENTER | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_sliderHeightmapOpacity = new wxSlider(m_panel_layers, 10303, 255, 0, 255, wxDefaultPosition,
        wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), wxSL_HORIZONTAL);
    m_sliderHeightmapOpacity->Enable(false);

    flexGridSizer220->Add(
        m_sliderHeightmapOpacity, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));
    m_sliderHeightmapOpacity->SetMinSize(wxSize(75, -1));

    m_optSpritesSelect = new wxRadioButton(
        m_panel_layers, 10104, _("Sprites"), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_optSpritesSelect->Enable(false);
    m_optSpritesSelect->SetValue(0);

    flexGridSizer220->Add(m_optSpritesSelect, 0, wxLEFT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_checkSpritesVisible = new wxCheckBox(
        m_panel_layers, 10204, wxT(""), wxDefaultPosition, wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), 0);
    m_checkSpritesVisible->SetValue(true);
    m_checkSpritesVisible->Enable(false);

    flexGridSizer220->Add(
        m_checkSpritesVisible, 0, wxALIGN_CENTER | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));

    m_sliderSpritesOpacity = new wxSlider(m_panel_layers, 10304, 255, 0, 255, wxDefaultPosition,
        wxDLG_UNIT(m_panel_layers, wxSize(-1, -1)), wxSL_HORIZONTAL);
    m_sliderSpritesOpacity->Enable(false);

    flexGridSizer220->Add(
        m_sliderSpritesOpacity, 0, wxALL | wxEXPAND | wxALIGN_RIGHT | wxALIGN_CENTER_VERTICAL, WXC_FROM_DIP(0));
    m_sliderSpritesOpacity->SetMinSize(wxSize(75, -1));

    m_scrollwindow = new wxScrolledWindow(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)),
        wxFULL_REPAINT_ON_RESIZE | wxHSCROLL | wxVSCROLL);
    m_scrollwindow->SetBackgroundColour(wxColour(wxT("rgb(0,0,0)")));
    m_scrollwindow->SetScrollRate(5, 5);

    m_window->AddPane(m_scrollwindow,
        wxAuiPaneInfo()
            .Direction(wxAUI_DOCK_CENTER)
            .Layer(0)
            .Row(0)
            .Position(0)
            .BestSize(150, 100)
            .MinSize(100, 100)
            .MaxSize(100, 100)
            .CaptionVisible(false)
            .MaximizeButton(false)
            .CloseButton(false)
            .MinimizeButton(false)
            .PinButton(false));

    m_panel_tiles = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxDLG_UNIT(this, wxSize(-1, -1)), wxTAB_TRAVERSAL);

    m_window->AddPane(m_panel_tiles,
        wxAuiPaneInfo()
            .Caption(_("Tiles"))
            .Direction(wxAUI_DOCK_RIGHT)
            .Layer(0)
            .Row(0)
            .Position(1)
            .MinSize(200, 10000)
            .CaptionVisible(true)
            .MaximizeButton(false)
            .CloseButton(false)
            .MinimizeButton(false)
            .PinButton(false));
    m_window->Update();

    wxBoxSizer* m_boxsizer_tiles = new wxBoxSizer(wxVERTICAL);
    m_panel_tiles->SetSizer(m_boxsizer_tiles);

    m_toolbar = this->CreateToolBar(wxTB_FLAT, wxID_ANY);
    m_toolbar->SetToolBitmapSize(wxSize(32, 32));

    m_toolbar->AddTool(11000, _("Button1"), wxXmlResource::Get()->LoadBitmap(wxT("broadsword")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11001, _("Button2"), wxXmlResource::Get()->LoadBitmap(wxT("chest")), wxNullBitmap, wxITEM_NORMAL,
        wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11002, _("Button3"), wxXmlResource::Get()->LoadBitmap(wxT("key")), wxNullBitmap, wxITEM_NORMAL,
        wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11003, _("Button4"), wxXmlResource::Get()->LoadBitmap(wxT("deathstatue")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11004, _("Button5"), wxXmlResource::Get()->LoadBitmap(wxT("switch1off")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11005, _("Button6"), wxXmlResource::Get()->LoadBitmap(wxT("bell")), wxNullBitmap, wxITEM_NORMAL,
        wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11006, _("Button7"), wxXmlResource::Get()->LoadBitmap(wxT("recordbook")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11007, _("Button8"), wxXmlResource::Get()->LoadBitmap(wxT("axemagic")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11008, _("Button9"), wxXmlResource::Get()->LoadBitmap(wxT("blueribbon")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);

    m_toolbar->AddTool(11009, _("Button10"), wxXmlResource::Get()->LoadBitmap(wxT("einsteinwhistle")), wxNullBitmap,
        wxITEM_NORMAL, wxT(""), wxT(""), NULL);
    m_toolbar->Realize();

    SetName(wxT("MainFrameBaseClass"));
    SetSize(wxDLG_UNIT(this, wxSize(800, 600)));
    if(GetSizer()) {
        GetSizer()->Fit(this);
    }
    if(GetParent()) {
        CentreOnParent(wxBOTH);
    } else {
        CentreOnScreen(wxBOTH);
    }
#if wxVERSION_NUMBER >= 2900
    if(!wxPersistenceManager::Get().Find(this)) {
        wxPersistenceManager::Get().RegisterAndRestore(this);
    } else {
        wxPersistenceManager::Get().Restore(this);
    }
#endif
    // Connect events
    this->Connect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnMousewheel), NULL, this);
    this->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrameBaseClass::OnKeyDown), NULL, this);
    this->Connect(wxEVT_KEY_UP, wxKeyEventHandler(MainFrameBaseClass::OnKeyUp), NULL, this);
    this->Connect(m_mnu_open->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnOpen),
        NULL, this);
    this->Connect(m_mnu_export->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnExport), NULL, this);
    this->Connect(m_mnu_exit->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnExit),
        NULL, this);
    this->Connect(m_mnu_about->GetId(), wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnAbout),
        NULL, this);
    m_browser->Connect(
        wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(MainFrameBaseClass::OnBrowserSelect), NULL, this);
    m_optBgSelect->Connect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkBgVisible->Connect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderBgOpacity->Connect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optFg1Select->Connect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkFg1Visible->Connect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderFg1Opacity->Connect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optFg2Select->Connect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkFg2Visible->Connect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderFg2Opacity->Connect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optHeightmapSelect->Connect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkHeightmapVisible->Connect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderHeightmapOpacity->Connect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optSpritesSelect->Connect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkSpritesVisible->Connect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderSpritesOpacity->Connect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_scrollwindow->Connect(wxEVT_PAINT, wxPaintEventHandler(MainFrameBaseClass::OnScrollWindowPaint), NULL, this);
    m_scrollwindow->Connect(
        wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowMousewheel), NULL, this);
    m_scrollwindow->Connect(
        wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowLeftDown), NULL, this);
    m_scrollwindow->Connect(wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowLeftUp), NULL, this);
    m_scrollwindow->Connect(
        wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowRightDown), NULL, this);
    m_scrollwindow->Connect(wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowRightUp), NULL, this);
    m_scrollwindow->Connect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrameBaseClass::OnScrollWindowKeyDown), NULL, this);
    m_scrollwindow->Connect(wxEVT_KEY_UP, wxKeyEventHandler(MainFrameBaseClass::OnScrollWindowKeyUp), NULL, this);
    this->Connect(11000, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton1), NULL, this);
    this->Connect(11001, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton2), NULL, this);
    this->Connect(11002, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton3), NULL, this);
    this->Connect(11003, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton4), NULL, this);
    this->Connect(11004, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton5), NULL, this);
    this->Connect(11005, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton6), NULL, this);
    this->Connect(11006, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton7), NULL, this);
    this->Connect(11007, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton8), NULL, this);
    this->Connect(11008, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton9), NULL, this);
    this->Connect(11009, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton10), NULL, this);
}

MainFrameBaseClass::~MainFrameBaseClass()
{
    this->Disconnect(wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnMousewheel), NULL, this);
    this->Disconnect(wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrameBaseClass::OnKeyDown), NULL, this);
    this->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(MainFrameBaseClass::OnKeyUp), NULL, this);
    this->Disconnect(m_mnu_open->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnOpen), NULL, this);
    this->Disconnect(m_mnu_export->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnExport), NULL, this);
    this->Disconnect(m_mnu_exit->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnExit), NULL, this);
    this->Disconnect(m_mnu_about->GetId(), wxEVT_COMMAND_MENU_SELECTED,
        wxCommandEventHandler(MainFrameBaseClass::OnAbout), NULL, this);
    m_browser->Disconnect(
        wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler(MainFrameBaseClass::OnBrowserSelect), NULL, this);
    m_optBgSelect->Disconnect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkBgVisible->Disconnect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderBgOpacity->Disconnect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optFg1Select->Disconnect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkFg1Visible->Disconnect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderFg1Opacity->Disconnect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optFg2Select->Disconnect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkFg2Visible->Disconnect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderFg2Opacity->Disconnect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optHeightmapSelect->Disconnect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkHeightmapVisible->Disconnect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderHeightmapOpacity->Disconnect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_optSpritesSelect->Disconnect(
        wxEVT_COMMAND_RADIOBUTTON_SELECTED, wxCommandEventHandler(MainFrameBaseClass::OnLayerSelect), NULL, this);
    m_checkSpritesVisible->Disconnect(
        wxEVT_COMMAND_CHECKBOX_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnLayerVisibilityChange), NULL, this);
    m_sliderSpritesOpacity->Disconnect(
        wxEVT_SCROLL_CHANGED, wxScrollEventHandler(MainFrameBaseClass::OnLayerOpacityChange), NULL, this);
    m_scrollwindow->Disconnect(wxEVT_PAINT, wxPaintEventHandler(MainFrameBaseClass::OnScrollWindowPaint), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_MOUSEWHEEL, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowMousewheel), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_LEFT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowLeftDown), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_LEFT_UP, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowLeftUp), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_RIGHT_DOWN, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowRightDown), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_RIGHT_UP, wxMouseEventHandler(MainFrameBaseClass::OnScrollWindowRightUp), NULL, this);
    m_scrollwindow->Disconnect(
        wxEVT_KEY_DOWN, wxKeyEventHandler(MainFrameBaseClass::OnScrollWindowKeyDown), NULL, this);
    m_scrollwindow->Disconnect(wxEVT_KEY_UP, wxKeyEventHandler(MainFrameBaseClass::OnScrollWindowKeyUp), NULL, this);
    this->Disconnect(
        11000, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton1), NULL, this);
    this->Disconnect(
        11001, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton2), NULL, this);
    this->Disconnect(
        11002, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton3), NULL, this);
    this->Disconnect(
        11003, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton4), NULL, this);
    this->Disconnect(
        11004, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton5), NULL, this);
    this->Disconnect(
        11005, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton6), NULL, this);
    this->Disconnect(
        11006, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton7), NULL, this);
    this->Disconnect(
        11007, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton8), NULL, this);
    this->Disconnect(
        11008, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton9), NULL, this);
    this->Disconnect(
        11009, wxEVT_COMMAND_TOOL_CLICKED, wxCommandEventHandler(MainFrameBaseClass::OnButton10), NULL, this);

    m_window->UnInit();
    delete m_window;
}

ImgLst::ImgLst()
    : wxImageList(16, 16, true)
    , m_imagesWidth(16)
    , m_imagesHeight(16)
{
    if(!bBitmapLoaded) {
        // We need to initialise the default bitmap handler
        wxXmlResource::Get()->AddHandler(new wxBitmapXmlHandler);
        wxC9ED9InitBitmapResources();
        bBitmapLoaded = true;
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmp_room"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmp_room"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmp_tileset"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmp_tileset"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmp_palette"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmp_palette"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmp_block"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmp_block"), bmp));
        }
    }

    {
        wxBitmap bmp;
        wxIcon icn;
        bmp = wxXmlResource::Get()->LoadBitmap(wxT("m_bmp_sprite"));
        if(bmp.IsOk()) {
            if((m_imagesWidth == bmp.GetWidth()) && (m_imagesHeight == bmp.GetHeight())) {
                icn.CopyFromBitmap(bmp);
                this->Add(icn);
            }
            m_bitmaps.insert(std::make_pair(wxT("m_bmp_sprite"), bmp));
        }
    }
}

ImgLst::~ImgLst()
{
}
