///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 16 2008)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __commentpagebase__
#define __commentpagebase__

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statline.h>
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/textctrl.h>
#include <wx/panel.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class CommentPageBase
///////////////////////////////////////////////////////////////////////////////
class CommentPageBase : public wxPanel 
{
	private:
	
	protected:
		wxStaticText* m_staticText1;
		wxStaticLine* m_staticline1;
		wxCheckBox* m_checkBoxContCComment;
		wxCheckBox* m_checkBoxContinueCppComment;
		wxStaticText* m_staticText11;
		wxStaticLine* m_staticline11;
		wxCheckBox* m_checkBoxUseSlash2Starts;
		wxCheckBox* m_checkBoxUseShtroodel;
		wxStaticLine* m_staticline4;
		wxStaticText* m_staticText4;
		wxStaticText* m_staticText6;
		wxTextCtrl* m_textCtrlClassPattern;
		wxStaticText* m_staticText7;
		wxTextCtrl* m_textCtrlFunctionPattern;
		wxStaticLine* m_staticline5;
		wxStaticText* m_staticText12;
	
	public:
		CommentPageBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 644,439 ), long style = wxTAB_TRAVERSAL );
		~CommentPageBase();
	
};

#endif //__commentpagebase__
