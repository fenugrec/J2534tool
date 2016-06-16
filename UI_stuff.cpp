///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "UI_stuff.h"

///////////////////////////////////////////////////////////////////////////

frmMainBase::frmMainBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 600,400 ), wxDefaultSize );
	
	m_statusBar1 = this->CreateStatusBar( 2, wxST_SIZEGRIP, wxID_ANY );
	m_menubar1 = new wxMenuBar( 0 );
	menuFile = new wxMenu();
	wxMenuItem* menuFileOpen;
	menuFileOpen = new wxMenuItem( menuFile, wxID_ANY, wxString( _("&Open Cfg file") ) + wxT('\t') + wxT("ctrl+O"), wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileOpen );
	
	wxMenuItem* menuFileMsgOutLoad;
	menuFileMsgOutLoad = new wxMenuItem( menuFile, wxID_ANY, wxString( _("Load Outgoing Message Set") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileMsgOutLoad );
	
	menuFile->AppendSeparator();
	
	wxMenuItem* menuFileSave;
	menuFileSave = new wxMenuItem( menuFile, wxID_ANY, wxString( _("&Save Cfg File") ) + wxT('\t') + wxT("ctrl+s"), wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileSave );
	
	wxMenuItem* menuFileSaveAs;
	menuFileSaveAs = new wxMenuItem( menuFile, wxID_ANY, wxString( _("Save Cfg File &As...") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileSaveAs );
	
	menuFile->AppendSeparator();
	
	wxMenuItem* menuFileMsgInSaveSel;
	menuFileMsgInSaveSel = new wxMenuItem( menuFile, wxID_ANY, wxString( _("Save Selected Incoming Message") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileMsgInSaveSel );
	
	wxMenuItem* menuFileMsgInSaveAll;
	menuFileMsgInSaveAll = new wxMenuItem( menuFile, wxID_ANY, wxString( _("Save All Incoming Messages") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileMsgInSaveAll );
	
	wxMenuItem* menuFileMsgOutSave;
	menuFileMsgOutSave = new wxMenuItem( menuFile, wxID_ANY, wxString( _("Save Outgoing Message Set") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileMsgOutSave );
	
	menuFile->AppendSeparator();
	
	wxMenuItem* menuFileExit;
	menuFileExit = new wxMenuItem( menuFile, wxID_ANY, wxString( _("E&xit") ) , wxEmptyString, wxITEM_NORMAL );
	menuFile->Append( menuFileExit );
	
	m_menubar1->Append( menuFile, _("&File") ); 
	
	menuEdit = new wxMenu();
	wxMenuItem* menuEditUndo;
	menuEditUndo = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("&Undo") ) + wxT('\t') + wxT("ctrl+z"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditUndo );
	
	menuEdit->AppendSeparator();
	
	wxMenuItem* menuEditCut;
	menuEditCut = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Cu&t") ) + wxT('\t') + wxT("ctrl+x"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditCut );
	
	wxMenuItem* menuEditCopy;
	menuEditCopy = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("&Copy") ) + wxT('\t') + wxT("ctrl+c"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditCopy );
	
	wxMenuItem* menuEditMsgInCopyLine;
	menuEditMsgInCopyLine = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Copy Line") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgInCopyLine );
	
	wxMenuItem* menuEditMsgInCopyData;
	menuEditMsgInCopyData = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Copy Data") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgInCopyData );
	
	wxMenuItem* menuEditPaste;
	menuEditPaste = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("&Paste") ) + wxT('\t') + wxT("ctrl+v"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditPaste );
	
	wxMenuItem* menuEditDelete;
	menuEditDelete = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("&Delete") ) + wxT('\t') + wxT("del"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditDelete );
	
	menuEdit->AppendSeparator();
	
	wxMenuItem* menuEditMsgInFilt;
	menuEditMsgInFilt = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Make Filter") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgInFilt );
	
	wxMenuItem* menuEditFlagsMsg;
	menuEditFlagsMsg = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Edit Flags") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditFlagsMsg );
	
	wxMenuItem* menuEditFlagsConnect;
	menuEditFlagsConnect = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Edit Flags") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditFlagsConnect );
	
	wxMenuItem* menuEditRxStatus;
	menuEditRxStatus = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("RX Status") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditRxStatus );
	
	wxMenuItem* menuEditFlagsClear;
	menuEditFlagsClear = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Clear Flags") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditFlagsClear );
	
	wxMenuItem* menuEditFlagsDefault;
	menuEditFlagsDefault = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Set Default Flags") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditFlagsDefault );
	
	wxMenuItem* menuEditMsgOutMod;
	menuEditMsgOutMod = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Edit Message") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgOutMod );
	
	wxMenuItem* menuEditMsgOutIns;
	menuEditMsgOutIns = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Add Message") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgOutIns );
	
	wxMenuItem* menuEditMsgOutScratch;
	menuEditMsgOutScratch = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Copy to scratch pad") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgOutScratch );
	
	wxMenuItem* menuEditMsgOutPM;
	menuEditMsgOutPM = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Make Periodic Message") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditMsgOutPM );
	
	wxMenuItem* menuEditSelectAll;
	menuEditSelectAll = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Select &All") ) + wxT('\t') + wxT("ctrl+a"), wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditSelectAll );
	
	wxMenuItem* menuEditClear;
	menuEditClear = new wxMenuItem( menuEdit, wxID_ANY, wxString( _("Clear") ) , wxEmptyString, wxITEM_NORMAL );
	menuEdit->Append( menuEditClear );
	
	m_menubar1->Append( menuEdit, _("&Edit") ); 
	
	menuHelp = new wxMenu();
	m_menubar1->Append( menuHelp, _("&Help") ); 
	
	this->SetMenuBar( m_menubar1 );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	SSTab1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	tabConnect = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxHORIZONTAL );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxStaticBoxSizer* sizCon_Intfc;
	sizCon_Intfc = new wxStaticBoxSizer( new wxStaticBox( tabConnect, wxID_ANY, _("J2534 Interfaces") ), wxVERTICAL );
	
	m_staticText16 = new wxStaticText( sizCon_Intfc->GetStaticBox(), wxID_ANY, _("Interface"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText16->Wrap( -1 );
	sizCon_Intfc->Add( m_staticText16, 0, wxALL, 5 );
	
	ComboInterface = new wxComboBox( sizCon_Intfc->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sizCon_Intfc->Add( ComboInterface, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText17 = new wxStaticText( sizCon_Intfc->GetStaticBox(), wxID_ANY, _("Path to DLL:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText17->Wrap( -1 );
	sizCon_Intfc->Add( m_staticText17, 0, wxALL, 5 );
	
	m_filePicker1 = new wxFilePickerCtrl( sizCon_Intfc->GetStaticBox(), wxID_ANY, wxEmptyString, _("Select a file"), wxT("*.*"), wxDefaultPosition, wxDefaultSize, wxFLP_DEFAULT_STYLE );
	m_filePicker1->Enable( false );
	
	sizCon_Intfc->Add( m_filePicker1, 0, wxALL|wxEXPAND, 5 );
	
	lblVendor = new wxStaticText( sizCon_Intfc->GetStaticBox(), wxID_ANY, _("Vendor:"), wxDefaultPosition, wxDefaultSize, 0 );
	lblVendor->Wrap( -1 );
	sizCon_Intfc->Add( lblVendor, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText19 = new wxStaticText( sizCon_Intfc->GetStaticBox(), wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText19->Wrap( -1 );
	sizCon_Intfc->Add( m_staticText19, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText20 = new wxStaticText( sizCon_Intfc->GetStaticBox(), wxID_ANY, _("Library:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText20->Wrap( -1 );
	sizCon_Intfc->Add( m_staticText20, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer1->Add( sizCon_Intfc, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sizCon_Dev;
	sizCon_Dev = new wxStaticBoxSizer( new wxStaticBox( tabConnect, wxID_ANY, _("J2534 Devices") ), wxVERTICAL );
	
	m_staticText14 = new wxStaticText( sizCon_Dev->GetStaticBox(), wxID_ANY, _("Device:"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText14->Wrap( -1 );
	sizCon_Dev->Add( m_staticText14, 0, wxALL, 5 );
	
	cmbCon_Dev = new wxComboBox( sizCon_Dev->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sizCon_Dev->Add( cmbCon_Dev, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxHORIZONTAL );
	
	DiscoverButton = new wxButton( sizCon_Dev->GetStaticBox(), wxID_ANY, _("Discover"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( DiscoverButton, 0, wxALL, 5 );
	
	BoxOpenButton = new wxButton( sizCon_Dev->GetStaticBox(), wxID_ANY, _("Open"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( BoxOpenButton, 0, wxALL, 5 );
	
	BoxCloseButton = new wxButton( sizCon_Dev->GetStaticBox(), wxID_ANY, _("Close"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( BoxCloseButton, 0, wxALL, 5 );
	
	
	sizCon_Dev->Add( bSizer10, 1, wxEXPAND, 5 );
	
	lblDeviceInfo = new wxStaticText( sizCon_Dev->GetStaticBox(), wxID_ANY, _("Name:\nVersion:\nOther Info:\nStatus:\nDevice ID:"), wxDefaultPosition, wxDefaultSize, 0 );
	lblDeviceInfo->Wrap( -1 );
	sizCon_Dev->Add( lblDeviceInfo, 0, wxALL, 5 );
	
	
	fgSizer1->Add( sizCon_Dev, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sizCon_DevInfo;
	sizCon_DevInfo = new wxStaticBoxSizer( new wxStaticBox( tabConnect, wxID_ANY, _("J2534 Device Information") ), wxVERTICAL );
	
	txtCon_DevInfo = new wxStaticText( sizCon_DevInfo->GetStaticBox(), wxID_ANY, _("Supported protos : iso stuff"), wxDefaultPosition, wxDefaultSize, 0 );
	txtCon_DevInfo->Wrap( -1 );
	sizCon_DevInfo->Add( txtCon_DevInfo, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer1->Add( sizCon_DevInfo, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sizCon_Con;
	sizCon_Con = new wxStaticBoxSizer( new wxStaticBox( tabConnect, wxID_ANY, _("Connect") ), wxVERTICAL );
	
	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 4, 2, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_staticText21 = new wxStaticText( sizCon_Con->GetStaticBox(), wxID_ANY, _("Protocol"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText21->Wrap( -1 );
	fgSizer2->Add( m_staticText21, 0, 0, 5 );
	
	
	fgSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	cmbCon_Proto = new wxComboBox( sizCon_Con->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer2->Add( cmbCon_Proto, 0, wxALL|wxEXPAND, 5 );
	
	ConnectButton = new wxButton( sizCon_Con->GetStaticBox(), wxID_ANY, _("Connect"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( ConnectButton, 0, wxALL, 5 );
	
	m_checkBox1 = new wxCheckBox( sizCon_Con->GetStaticBox(), wxID_ANY, _("Mixed mode"), wxDefaultPosition, wxDefaultSize, 0 );
	m_checkBox1->Enable( false );
	
	fgSizer2->Add( m_checkBox1, 0, wxALL, 5 );
	
	DisconnectButton = new wxButton( sizCon_Con->GetStaticBox(), wxID_ANY, _("Disconnect"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( DisconnectButton, 0, wxALL, 5 );
	
	m_staticText22 = new wxStaticText( sizCon_Con->GetStaticBox(), wxID_ANY, _("Baud Rate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText22->Wrap( -1 );
	fgSizer2->Add( m_staticText22, 0, 0, 5 );
	
	m_staticText23 = new wxStaticText( sizCon_Con->GetStaticBox(), wxID_ANY, _("Connect flags"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText23->Wrap( -1 );
	fgSizer2->Add( m_staticText23, 0, 0, 5 );
	
	ComboBaud = new wxComboBox( sizCon_Con->GetStaticBox(), wxID_ANY, _("10400"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer2->Add( ComboBaud, 0, wxALL, 5 );
	
	m_textCtrl7 = new wxTextCtrl( sizCon_Con->GetStaticBox(), wxID_ANY, _("0x00000000"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_textCtrl7, 0, wxALL, 5 );
	
	
	sizCon_Con->Add( fgSizer2, 1, wxEXPAND, 5 );
	
	m_staticText24 = new wxStaticText( sizCon_Con->GetStaticBox(), wxID_ANY, _("Device"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText24->Wrap( -1 );
	sizCon_Con->Add( m_staticText24, 0, 0, 5 );
	
	cmbCon_ConDev = new wxComboBox( sizCon_Con->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	sizCon_Con->Add( cmbCon_ConDev, 0, wxALL|wxEXPAND, 5 );
	
	
	fgSizer1->Add( sizCon_Con, 1, wxEXPAND, 5 );
	
	
	tabConnect->SetSizer( fgSizer1 );
	tabConnect->Layout();
	fgSizer1->Fit( tabConnect );
	SSTab1->AddPage( tabConnect, _("Connect"), true );
	tabMessages = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 2, 2, 0, 0 );
	fgSizer3->AddGrowableCol( 0 );
	fgSizer3->AddGrowableRow( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_dataViewCtrl2 = new wxDataViewCtrl( tabMessages, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_dataViewColumn3 = m_dataViewCtrl2->AppendTextColumn( _("Timestamp"), 0 );
	m_dataViewColumn4 = m_dataViewCtrl2->AppendTextColumn( _("Network ID"), 0 );
	m_dataViewColumn7 = m_dataViewCtrl2->AppendTextColumn( _("RXStatus"), 0 );
	m_dataViewColumn8 = m_dataViewCtrl2->AppendTextColumn( _("Data Bytes"), 0 );
	fgSizer3->Add( m_dataViewCtrl2, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer15;
	bSizer15 = new wxBoxSizer( wxVERTICAL );
	
	m_button8 = new wxButton( tabMessages, wxID_ANY, _("Clear\nRX buffer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button8, 0, wxALL, 5 );
	
	m_button9 = new wxButton( tabMessages, wxID_ANY, _("Clear\nTX buffer"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button9, 0, wxALL, 5 );
	
	m_button10 = new wxButton( tabMessages, wxID_ANY, _("Clear"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button10, 0, wxALL, 5 );
	
	m_button11 = new wxButton( tabMessages, wxID_ANY, _("Start"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_button11, 0, wxALL, 5 );
	
	m_staticText25 = new wxStaticText( tabMessages, wxID_ANY, _("Rate"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText25->Wrap( -1 );
	bSizer15->Add( m_staticText25, 0, wxALL, 5 );
	
	m_textCtrl8 = new wxTextCtrl( tabMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer15->Add( m_textCtrl8, 0, wxALL, 5 );
	
	
	fgSizer3->Add( bSizer15, 1, 0, 5 );
	
	wxBoxSizer* bSizer17;
	bSizer17 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer4;
	fgSizer4 = new wxFlexGridSizer( 2, 4, 0, 0 );
	fgSizer4->SetFlexibleDirection( wxBOTH );
	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_checkBox2 = new wxCheckBox( tabMessages, wxID_ANY, _("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_checkBox2, 0, wxALL, 5 );
	
	
	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	fgSizer4->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText27 = new wxStaticText( tabMessages, wxID_ANY, _("Scratch pad"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText27->Wrap( -1 );
	fgSizer4->Add( m_staticText27, 0, wxALL, 5 );
	
	m_comboBox9 = new wxComboBox( tabMessages, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer4->Add( m_comboBox9, 0, wxALL, 5 );
	
	m_comboBox10 = new wxComboBox( tabMessages, wxID_ANY, _("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	fgSizer4->Add( m_comboBox10, 0, wxALL, 5 );
	
	m_textCtrl10 = new wxTextCtrl( tabMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_textCtrl10, 0, wxALL, 5 );
	
	m_textCtrl11 = new wxTextCtrl( tabMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer4->Add( m_textCtrl11, 0, wxALL, 5 );
	
	
	bSizer17->Add( fgSizer4, 0, wxEXPAND, 5 );
	
	m_dataViewCtrl3 = new wxDataViewCtrl( tabMessages, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	m_dataViewColumn5 = m_dataViewCtrl3->AppendTextColumn( _("Network ID"), 0 );
	m_dataViewColumn6 = m_dataViewCtrl3->AppendTextColumn( _("TX flags"), 0 );
	m_dataViewColumn9 = m_dataViewCtrl3->AppendTextColumn( _("Data Bytes"), 0 );
	m_dataViewColumn10 = m_dataViewCtrl3->AppendTextColumn( _("Comments"), 0 );
	bSizer17->Add( m_dataViewCtrl3, 1, wxALL|wxEXPAND, 5 );
	
	
	fgSizer3->Add( bSizer17, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer18;
	bSizer18 = new wxBoxSizer( wxVERTICAL );
	
	
	bSizer18->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_button12 = new wxButton( tabMessages, wxID_ANY, _("Send"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_button12, 0, wxALL, 5 );
	
	m_staticText26 = new wxStaticText( tabMessages, wxID_ANY, _("Timeout"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText26->Wrap( -1 );
	bSizer18->Add( m_staticText26, 0, wxALL, 5 );
	
	m_textCtrl9 = new wxTextCtrl( tabMessages, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer18->Add( m_textCtrl9, 0, wxALL, 5 );
	
	
	fgSizer3->Add( bSizer18, 1, wxEXPAND, 5 );
	
	
	tabMessages->SetSizer( fgSizer3 );
	tabMessages->Layout();
	fgSizer3->Fit( tabMessages );
	SSTab1->AddPage( tabMessages, _("Messages"), false );
	tabPeriodic = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	SSTab1->AddPage( tabPeriodic, _("Periodic Messages"), false );
	tabFilters = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	SSTab1->AddPage( tabFilters, _("Filters"), false );
	tabConfig = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	SSTab1->AddPage( tabConfig, _("Config"), false );
	tabInit = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sizSlowInit;
	sizSlowInit = new wxStaticBoxSizer( new wxStaticBox( tabInit, wxID_ANY, _("5 Baud Init") ), wxVERTICAL );
	
	wxGridSizer* gSizer2;
	gSizer2 = new wxGridSizer( 3, 3, 0, 0 );
	
	m_staticText8 = new wxStaticText( sizSlowInit->GetStaticBox(), wxID_ANY, _("ECU Address"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText8->Wrap( -1 );
	gSizer2->Add( m_staticText8, 0, wxALL, 5 );
	
	m_staticText9 = new wxStaticText( sizSlowInit->GetStaticBox(), wxID_ANY, _("Keyword 1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText9->Wrap( -1 );
	gSizer2->Add( m_staticText9, 0, wxALL, 5 );
	
	m_staticText10 = new wxStaticText( sizSlowInit->GetStaticBox(), wxID_ANY, _("Keyword 2"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText10->Wrap( -1 );
	gSizer2->Add( m_staticText10, 0, wxALL, 5 );
	
	m_textCtrl1 = new wxTextCtrl( sizSlowInit->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	gSizer2->Add( m_textCtrl1, 0, wxALL, 5 );
	
	m_textCtrl2 = new wxTextCtrl( sizSlowInit->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl2->Enable( false );
	
	gSizer2->Add( m_textCtrl2, 0, wxALL, 5 );
	
	m_textCtrl3 = new wxTextCtrl( sizSlowInit->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_textCtrl3->Enable( false );
	
	gSizer2->Add( m_textCtrl3, 0, wxALL, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	
	gSizer2->Add( 0, 0, 1, wxEXPAND, 5 );
	
	ExecFastInitButton = new wxButton( sizSlowInit->GetStaticBox(), wxID_ANY, _("Execute"), wxDefaultPosition, wxDefaultSize, 0 );
	ExecFastInitButton->Enable( false );
	
	gSizer2->Add( ExecFastInitButton, 0, wxALL, 5 );
	
	
	sizSlowInit->Add( gSizer2, 0, 0, 5 );
	
	
	bSizer9->Add( sizSlowInit, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sizFastInit;
	sizFastInit = new wxStaticBoxSizer( new wxStaticBox( tabInit, wxID_ANY, _("Fast Init") ), wxVERTICAL );
	
	
	bSizer9->Add( sizFastInit, 1, wxEXPAND, 5 );
	
	
	bSizer8->Add( bSizer9, 1, wxEXPAND, 5 );
	
	wxGridSizer* gSizer3;
	gSizer3 = new wxGridSizer( 2, 3, 0, 0 );
	
	
	gSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	m_staticText11 = new wxStaticText( tabInit, wxID_ANY, _("Device"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText11->Wrap( -1 );
	gSizer3->Add( m_staticText11, 0, wxALL, 5 );
	
	m_staticText12 = new wxStaticText( tabInit, wxID_ANY, _("Protocol"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText12->Wrap( -1 );
	gSizer3->Add( m_staticText12, 0, wxALL, 5 );
	
	
	gSizer3->Add( 0, 0, 1, wxEXPAND, 5 );
	
	cmbInit_Dev = new wxComboBox( tabInit, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer3->Add( cmbInit_Dev, 0, wxALL, 5 );
	
	cmbInit_proto = new wxComboBox( tabInit, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	gSizer3->Add( cmbInit_proto, 0, wxALL, 5 );
	
	
	bSizer8->Add( gSizer3, 0, wxEXPAND, 5 );
	
	
	tabInit->SetSizer( bSizer8 );
	tabInit->Layout();
	bSizer8->Fit( tabInit );
	SSTab1->AddPage( tabInit, _("Init"), false );
	tabFunctMsg = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	
	tabFunctMsg->SetSizer( bSizer6 );
	tabFunctMsg->Layout();
	bSizer6->Fit( tabFunctMsg );
	SSTab1->AddPage( tabFunctMsg, _("Funct Msg"), false );
	tabIOProgV = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	wxStaticBoxSizer* sizAnalog;
	sizAnalog = new wxStaticBoxSizer( new wxStaticBox( tabIOProgV, wxID_ANY, _("Analog IO") ), wxVERTICAL );
	
	
	bSizer4->Add( sizAnalog, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxVERTICAL );
	
	wxStaticBoxSizer* sizProgV;
	sizProgV = new wxStaticBoxSizer( new wxStaticBox( tabIOProgV, wxID_ANY, _("Programming Voltage") ), wxVERTICAL );
	
	
	bSizer5->Add( sizProgV, 1, wxEXPAND, 5 );
	
	wxStaticBoxSizer* sizBatV;
	sizBatV = new wxStaticBoxSizer( new wxStaticBox( tabIOProgV, wxID_ANY, _("Battery Voltage (OBD2 pin 16)") ), wxVERTICAL );
	
	
	bSizer5->Add( sizBatV, 1, wxEXPAND, 5 );
	
	
	bSizer4->Add( bSizer5, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer4, 1, wxEXPAND, 5 );
	
	m_staticText1 = new wxStaticText( tabIOProgV, wxID_ANY, _("Device"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer3->Add( m_staticText1, 0, wxALIGN_CENTER|wxALL, 5 );
	
	cmb_IO_Device = new wxComboBox( tabIOProgV, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer3->Add( cmb_IO_Device, 0, wxALIGN_CENTER|wxALL, 5 );
	
	
	tabIOProgV->SetSizer( bSizer3 );
	tabIOProgV->Layout();
	bSizer3->Fit( tabIOProgV );
	SSTab1->AddPage( tabIOProgV, _("IO && Programming Voltages"), false );
	tabResults = new wxPanel( SSTab1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_dataViewListCtrl3 = new wxDataViewListCtrl( tabResults, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );
	tResults_Device = m_dataViewListCtrl3->AppendTextColumn( _("Device") );
	tResult_Result = m_dataViewListCtrl3->AppendTextColumn( _("Result") );
	bSizer2->Add( m_dataViewListCtrl3, 1, wxALL|wxEXPAND, 5 );
	
	
	tabResults->SetSizer( bSizer2 );
	tabResults->Layout();
	bSizer2->Fit( tabResults );
	SSTab1->AddPage( tabResults, _("Results"), false );
	
	bSizer1->Add( SSTab1, 1, wxEXPAND|wxFIXED_MINSIZE, 5 );
	
	
	this->SetSizer( bSizer1 );
	this->Layout();
	
	this->Centre( wxBOTH );
	
	// Connect Events
	DiscoverButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::DiscoverButton_Click ), NULL, this );
	BoxOpenButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::BoxOpenButton_Click ), NULL, this );
	BoxCloseButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::BoxCloseButton_Click ), NULL, this );
	ConnectButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::ConnectButton_Click ), NULL, this );
	DisconnectButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::DisconnectButton_Click ), NULL, this );
	ExecFastInitButton->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::ExecSlowInitButton_Click ), NULL, this );
}

frmMainBase::~frmMainBase()
{
	// Disconnect Events
	DiscoverButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::DiscoverButton_Click ), NULL, this );
	BoxOpenButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::BoxOpenButton_Click ), NULL, this );
	BoxCloseButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::BoxCloseButton_Click ), NULL, this );
	ConnectButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::ConnectButton_Click ), NULL, this );
	DisconnectButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::DisconnectButton_Click ), NULL, this );
	ExecFastInitButton->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( frmMainBase::ExecSlowInitButton_Click ), NULL, this );
	
}

dlgConnectFlags::dlgConnectFlags( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	
	this->Centre( wxBOTH );
}

dlgConnectFlags::~dlgConnectFlags()
{
}
