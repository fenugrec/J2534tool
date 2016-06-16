///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __UI_STUFF_H__
#define __UI_STUFF_H__

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/intl.h>
#include <wx/statusbr.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/filepicker.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/panel.h>
#include <wx/dataview.h>
#include <wx/notebook.h>
#include <wx/frame.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class frmMainBase
///////////////////////////////////////////////////////////////////////////////
class frmMainBase : public wxFrame 
{
	private:
	
	protected:
		wxStatusBar* m_statusBar1;
		wxMenuBar* m_menubar1;
		wxMenu* menuFile;
		wxMenu* menuEdit;
		wxMenu* menuHelp;
		wxNotebook* SSTab1;
		wxPanel* tabConnect;
		wxStaticText* m_staticText16;
		wxComboBox* ComboInterface;
		wxStaticText* m_staticText17;
		wxFilePickerCtrl* m_filePicker1;
		wxStaticText* lblVendor;
		wxStaticText* m_staticText19;
		wxStaticText* m_staticText20;
		wxStaticText* m_staticText14;
		wxComboBox* cmbCon_Dev;
		wxButton* DiscoverButton;
		wxButton* BoxOpenButton;
		wxButton* BoxCloseButton;
		wxStaticText* lblDeviceInfo;
		wxStaticText* txtCon_DevInfo;
		wxStaticText* m_staticText21;
		wxComboBox* cmbCon_Proto;
		wxButton* ConnectButton;
		wxCheckBox* m_checkBox1;
		wxButton* DisconnectButton;
		wxStaticText* m_staticText22;
		wxStaticText* m_staticText23;
		wxComboBox* ComboBaud;
		wxTextCtrl* m_textCtrl7;
		wxStaticText* m_staticText24;
		wxComboBox* cmbCon_ConDev;
		wxPanel* tabMessages;
		wxDataViewCtrl* m_dataViewCtrl2;
		wxDataViewColumn* m_dataViewColumn3;
		wxDataViewColumn* m_dataViewColumn4;
		wxDataViewColumn* m_dataViewColumn7;
		wxDataViewColumn* m_dataViewColumn8;
		wxButton* m_button8;
		wxButton* m_button9;
		wxButton* m_button10;
		wxButton* m_button11;
		wxStaticText* m_staticText25;
		wxTextCtrl* m_textCtrl8;
		wxCheckBox* m_checkBox2;
		wxStaticText* m_staticText27;
		wxComboBox* m_comboBox9;
		wxComboBox* m_comboBox10;
		wxTextCtrl* m_textCtrl10;
		wxTextCtrl* m_textCtrl11;
		wxDataViewCtrl* m_dataViewCtrl3;
		wxDataViewColumn* m_dataViewColumn5;
		wxDataViewColumn* m_dataViewColumn6;
		wxDataViewColumn* m_dataViewColumn9;
		wxDataViewColumn* m_dataViewColumn10;
		wxButton* m_button12;
		wxStaticText* m_staticText26;
		wxTextCtrl* m_textCtrl9;
		wxPanel* tabPeriodic;
		wxPanel* tabFilters;
		wxPanel* tabConfig;
		wxPanel* tabInit;
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxTextCtrl* m_textCtrl1;
		wxTextCtrl* m_textCtrl2;
		wxTextCtrl* m_textCtrl3;
		wxButton* ExecFastInitButton;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText12;
		wxComboBox* cmbInit_Dev;
		wxComboBox* cmbInit_proto;
		wxPanel* tabFunctMsg;
		wxPanel* tabIOProgV;
		wxStaticText* m_staticText1;
		wxComboBox* cmb_IO_Device;
		wxPanel* tabResults;
		wxDataViewListCtrl* m_dataViewListCtrl3;
		wxDataViewColumn* tResults_Device;
		wxDataViewColumn* tResult_Result;
		
		// Virtual event handlers, overide them in your derived class
		virtual void DiscoverButton_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void BoxOpenButton_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void BoxCloseButton_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void ConnectButton_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void DisconnectButton_Click( wxCommandEvent& event ) { event.Skip(); }
		virtual void ExecSlowInitButton_Click( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		frmMainBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("J2534 tool"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 651,495 ), long style = wxCAPTION|wxCLOSE_BOX|wxMINIMIZE_BOX|wxTAB_TRAVERSAL );
		
		~frmMainBase();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class dlgConnectFlags
///////////////////////////////////////////////////////////////////////////////
class dlgConnectFlags : public wxDialog 
{
	private:
	
	protected:
	
	public:
		
		dlgConnectFlags( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Connect Flags"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE ); 
		~dlgConnectFlags();
	
};

#endif //__UI_STUFF_H__
