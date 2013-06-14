///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct  8 2012)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "PolarGui.h"

///////////////////////////////////////////////////////////////////////////

PolarGui::PolarGui( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer48;
	bSizer48 = new wxBoxSizer( wxVERTICAL );
	
	bSizerPolar = new wxBoxSizer( wxHORIZONTAL );
	
	m_staticText11 = new wxStaticText( this, wxID_ANY, _("Mode:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	bSizerPolar->Add( m_staticText11, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceModeChoices[] = { _("Data from Logbooks"), _("Data from NMEA"), _("Data from VDR"), _("Edit manuell") };
	int m_choiceModeNChoices = sizeof( m_choiceModeChoices ) / sizeof( wxString );
	m_choiceMode = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceModeNChoices, m_choiceModeChoices, 0 );
	m_choiceMode->SetSelection( 0 );
	bSizerPolar->Add( m_choiceMode, 0, wxALL, 5 );
	
	m_staticText144 = new wxStaticText( this, wxID_ANY, _("Rings:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText144->Wrap( -1 );
	bSizerPolar->Add( m_staticText144, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceRingsPolarChoices[] = { _T("6"), _T("9"), _T("12"), _T("18"), _T("24") };
	int m_choiceRingsPolarNChoices = sizeof( m_choiceRingsPolarChoices ) / sizeof( wxString );
	m_choiceRingsPolar = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceRingsPolarNChoices, m_choiceRingsPolarChoices, 0 );
	m_choiceRingsPolar->SetSelection( 0 );
	m_choiceRingsPolar->SetToolTip( _("Set diagramm to x knots") );
	
	bSizerPolar->Add( m_choiceRingsPolar, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticText145 = new wxStaticText( this, wxID_ANY, _("Degrees:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText145->Wrap( -1 );
	bSizerPolar->Add( m_staticText145, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceDegreesPolarChoices[] = { _T("8"), _T("10"), _T("15") };
	int m_choiceDegreesPolarNChoices = sizeof( m_choiceDegreesPolarChoices ) / sizeof( wxString );
	m_choiceDegreesPolar = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceDegreesPolarNChoices, m_choiceDegreesPolarChoices, 0 );
	m_choiceDegreesPolar->SetSelection( 0 );
	m_choiceDegreesPolar->SetToolTip( _("Calculate speed-bullets for x degrees ") );
	
	bSizerPolar->Add( m_choiceDegreesPolar, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticText148 = new wxStaticText( this, wxID_ANY, _("Wind:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText148->Wrap( -1 );
	bSizerPolar->Add( m_staticText148, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceWindPolarChoices[] = { _("any") };
	int m_choiceWindPolarNChoices = sizeof( m_choiceWindPolarChoices ) / sizeof( wxString );
	m_choiceWindPolar = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceWindPolarNChoices, m_choiceWindPolarChoices, 0 );
	m_choiceWindPolar->SetSelection( 0 );
	bSizerPolar->Add( m_choiceWindPolar, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticline441 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizerPolar->Add( m_staticline441, 0, wxEXPAND | wxALL, 5 );
	
	m_staticText146 = new wxStaticText( this, wxID_ANY, _("Source:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText146->Wrap( -1 );
	bSizerPolar->Add( m_staticText146, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceSourcePolarChoices[] = { _("Speedo"), _("GPS") };
	int m_choiceSourcePolarNChoices = sizeof( m_choiceSourcePolarChoices ) / sizeof( wxString );
	m_choiceSourcePolar = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceSourcePolarNChoices, m_choiceSourcePolarChoices, 0 );
	m_choiceSourcePolar->SetSelection( 0 );
	m_choiceSourcePolar->SetToolTip( _("Speedo uses column STW\nGPS uses column SOG") );
	
	bSizerPolar->Add( m_choiceSourcePolar, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_staticText141 = new wxStaticText( this, wxID_ANY, _("Current <"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText141->Wrap( -1 );
	m_staticText141->Hide();
	
	bSizerPolar->Add( m_staticText141, 0, wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM|wxLEFT, 5 );
	
	wxString m_choiceCurrentPolarChoices[] = { _("any"), _T("0.5"), _T("1.0") };
	int m_choiceCurrentPolarNChoices = sizeof( m_choiceCurrentPolarChoices ) / sizeof( wxString );
	m_choiceCurrentPolar = new wxChoice( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, m_choiceCurrentPolarNChoices, m_choiceCurrentPolarChoices, 0 );
	m_choiceCurrentPolar->SetSelection( 0 );
	m_choiceCurrentPolar->Hide();
	
	bSizerPolar->Add( m_choiceCurrentPolar, 0, wxTOP|wxBOTTOM|wxRIGHT, 5 );
	
	m_buttonFilterPolar = new wxButton( this, wxID_ANY, _("Filter"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPolar->Add( m_buttonFilterPolar, 0, wxALL, 5 );
	
	m_staticline421 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizerPolar->Add( m_staticline421, 0, wxEXPAND | wxALL, 5 );
	
	m_button61 = new wxButton( this, wxID_ANY, _("Create"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPolar->Add( m_button61, 0, wxALL, 5 );
	
	m_staticline431 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizerPolar->Add( m_staticline431, 0, wxEXPAND | wxALL, 5 );
	
	m_buttonSavePolar = new wxButton( this, wxID_ANY, _("Save"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPolar->Add( m_buttonSavePolar, 0, wxALL, 5 );
	
	m_buttonLoad = new wxButton( this, wxID_ANY, _("Load"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizerPolar->Add( m_buttonLoad, 0, wxALL, 5 );
	
	
	bSizer48->Add( bSizerPolar, 0, 0, 5 );
	
	m_staticline45 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer48->Add( m_staticline45, 0, wxEXPAND | wxALL, 0 );
	
	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_3D|wxSP_3DBORDER|wxSP_3DSASH|wxSP_NO_XP_THEME );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( PolarGui::m_splitter1OnIdle ), NULL, this );
	m_splitter1->SetMinimumPaneSize( 10 );;

	m_panelPolar = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panelPolar->SetBackgroundColour( wxColour( 255, 255, 255 ) );
	m_panelPolar->SetMinSize( wxSize( 10,-1 ) );
	
	m_panel6 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel6->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DLIGHT ) );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	m_gridEdit = new wxGrid( m_panel6, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	
	// Grid
	m_gridEdit->CreateGrid( 20, 10 );
	m_gridEdit->EnableEditing( true );
	m_gridEdit->EnableGridLines( true );
	m_gridEdit->EnableDragGridSize( false );
	m_gridEdit->SetMargins( 0, 0 );
	
	// Columns
	m_gridEdit->SetColSize( 0, 53 );
	m_gridEdit->SetColSize( 1, 53 );
	m_gridEdit->SetColSize( 2, 53 );
	m_gridEdit->SetColSize( 3, 53 );
	m_gridEdit->SetColSize( 4, 53 );
	m_gridEdit->SetColSize( 5, 53 );
	m_gridEdit->SetColSize( 6, 53 );
	m_gridEdit->SetColSize( 7, 53 );
	m_gridEdit->SetColSize( 8, 53 );
	m_gridEdit->SetColSize( 9, 53 );
	m_gridEdit->EnableDragColMove( false );
	m_gridEdit->EnableDragColSize( true );
	m_gridEdit->SetColLabelSize( 30 );
	m_gridEdit->SetColLabelValue( 0, _T("4") );
	m_gridEdit->SetColLabelValue( 1, _T("8") );
	m_gridEdit->SetColLabelValue( 2, _T("12") );
	m_gridEdit->SetColLabelValue( 3, _T("16") );
	m_gridEdit->SetColLabelValue( 4, _T("20") );
	m_gridEdit->SetColLabelValue( 5, _T("24") );
	m_gridEdit->SetColLabelValue( 6, _T("28") );
	m_gridEdit->SetColLabelValue( 7, _T("32") );
	m_gridEdit->SetColLabelValue( 8, _T("36") );
	m_gridEdit->SetColLabelValue( 9, _T("40") );
	m_gridEdit->SetColLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Rows
	m_gridEdit->EnableDragRowSize( true );
	m_gridEdit->SetRowLabelSize( 50 );
	m_gridEdit->SetRowLabelValue( 0, _T("24\xB0") );
	m_gridEdit->SetRowLabelValue( 1, _T("32\xB0") );
	m_gridEdit->SetRowLabelValue( 2, _T("40\xB0") );
	m_gridEdit->SetRowLabelValue( 3, _T("48\xB0") );
	m_gridEdit->SetRowLabelValue( 4, _T("56\xB0") );
	m_gridEdit->SetRowLabelValue( 5, _T("64\xB0") );
	m_gridEdit->SetRowLabelValue( 6, _T("72\xB0") );
	m_gridEdit->SetRowLabelValue( 7, _T("80\xB0") );
	m_gridEdit->SetRowLabelValue( 8, _T("88\xB0") );
	m_gridEdit->SetRowLabelValue( 9, _T("96\xB0") );
	m_gridEdit->SetRowLabelValue( 10, _T("104\xB0") );
	m_gridEdit->SetRowLabelValue( 11, _T("112\xB0") );
	m_gridEdit->SetRowLabelValue( 12, _T("120\xB0") );
	m_gridEdit->SetRowLabelValue( 13, _T("128\xB0") );
	m_gridEdit->SetRowLabelValue( 14, _T("136\xB0") );
	m_gridEdit->SetRowLabelValue( 15, _T("144\xB0") );
	m_gridEdit->SetRowLabelValue( 16, _T("152\xB0") );
	m_gridEdit->SetRowLabelValue( 17, _T("160\xB0") );
	m_gridEdit->SetRowLabelValue( 18, _T("168\xB0") );
	m_gridEdit->SetRowLabelValue( 19, _T("176\xB0") );
	m_gridEdit->SetRowLabelAlignment( wxALIGN_CENTRE, wxALIGN_CENTRE );
	
	// Label Appearance
	
	// Cell Defaults
	m_gridEdit->SetDefaultCellAlignment( wxALIGN_RIGHT, wxALIGN_CENTRE );
	bSizer13->Add( m_gridEdit, 0, wxALL, 0 );

	m_staticTextEngine = new wxStaticText( m_panel6, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextEngine->Wrap( -1 );
	bSizer13->Add( m_staticTextEngine, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	bSizer13->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxHORIZONTAL );
	
	m_buttonClearData = new wxButton( m_panel6, wxID_ANY, _("Clear Data"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_buttonClearData, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	m_toggleBtnRecord = new wxToggleButton( m_panel6, wxID_ANY, _("Record Start"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer12->Add( m_toggleBtnRecord, 0, wxALL, 5 );
	
	
	bSizer13->Add( bSizer12, 0, wxALIGN_CENTER_HORIZONTAL, 5 );
	
	
	m_panel6->SetSizer( bSizer13 );
	m_panel6->Layout();
	bSizer13->Fit( m_panel6 );
	m_splitter1->SplitVertically( m_panelPolar, m_panel6, 450 );
	bSizer48->Add( m_splitter1, 1, wxEXPAND, 5 );
	
	
	bSizer1->Add( bSizer48, 1, wxEXPAND, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	this->Centre( wxBOTH );
	
	// Connect Events
	this->Connect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PolarGui::PolarDialogOnInitDialog ) );
	m_choiceMode->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceMode ), NULL, this );
	m_choiceRingsPolar->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoicePolarKnots ), NULL, this );
	m_choiceDegreesPolar->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceDegreesPolar ), NULL, this );
	m_choiceWindPolar->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceWindPolar ), NULL, this );
	m_choiceSourcePolar->Connect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceSourcePolar ), NULL, this );
	m_buttonFilterPolar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickFilterPolar ), NULL, this );
	m_button61->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonCreatePolar ), NULL, this );
	m_buttonSavePolar->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickSavePolar ), NULL, this );
	m_buttonLoad->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickLoad ), NULL, this );
	m_splitter1->Connect( wxEVT_SIZE, wxSizeEventHandler( PolarGui::OnSizesplitter1 ), NULL, this );
	m_splitter1->Connect( wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED, wxSplitterEventHandler( PolarGui::OnSplitterSashPosChanged ), NULL, this );
	m_panelPolar->Connect( wxEVT_PAINT, wxPaintEventHandler( PolarGui::OnPaintPolar ), NULL, this );
	m_gridEdit->Connect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( PolarGui::OnGridCellChange ), NULL, this );
	m_buttonClearData->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickClearData ), NULL, this );
	m_toggleBtnRecord->Connect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnToggleButtonRecord ), NULL, this );
	this->Connect( wxEVT_SIZE, wxSizeEventHandler( PolarGui::OnSizePolarDialog ) );
}

PolarGui::~PolarGui()
{
	// Disconnect Events
	this->Disconnect( wxEVT_INIT_DIALOG, wxInitDialogEventHandler( PolarGui::PolarDialogOnInitDialog ) );
	m_choiceMode->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceMode ), NULL, this );
	m_choiceRingsPolar->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoicePolarKnots ), NULL, this );
	m_choiceDegreesPolar->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceDegreesPolar ), NULL, this );
	m_choiceWindPolar->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceWindPolar ), NULL, this );
	m_choiceSourcePolar->Disconnect( wxEVT_COMMAND_CHOICE_SELECTED, wxCommandEventHandler( PolarGui::OnChoiceSourcePolar ), NULL, this );
	m_buttonFilterPolar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickFilterPolar ), NULL, this );
	m_button61->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonCreatePolar ), NULL, this );
	m_buttonSavePolar->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickSavePolar ), NULL, this );
	m_buttonLoad->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickLoad ), NULL, this );
	m_splitter1->Disconnect( wxEVT_SIZE, wxSizeEventHandler( PolarGui::OnSizesplitter1 ), NULL, this );
	m_splitter1->Disconnect( wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED, wxSplitterEventHandler( PolarGui::OnSplitterSashPosChanged ), NULL, this );
	m_panelPolar->Disconnect( wxEVT_PAINT, wxPaintEventHandler( PolarGui::OnPaintPolar ), NULL, this );
	m_gridEdit->Disconnect( wxEVT_GRID_CELL_CHANGE, wxGridEventHandler( PolarGui::OnGridCellChange ), NULL, this );
	m_buttonClearData->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnButtonClickClearData ), NULL, this );
	m_toggleBtnRecord->Disconnect( wxEVT_COMMAND_TOGGLEBUTTON_CLICKED, wxCommandEventHandler( PolarGui::OnToggleButtonRecord ), NULL, this );
	
}
