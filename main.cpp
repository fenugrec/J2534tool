#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif // WX_PRECOMP

#include <wx/wx.h>

#include "J2534main.h"


class J2534tool: public wxApp
{
public:
	virtual bool OnInit();
};


wxIMPLEMENT_APP(J2534tool);

bool J2534tool::OnInit()
{
	J2534main *frame = new J2534main(NULL);
	frame->Show(TRUE);
	SetTopWindow(frame);

	return true;
}
