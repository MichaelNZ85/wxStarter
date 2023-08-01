#include <wx/wx.h>

class MainWindow : public wxFrame
{
public:
    MainWindow(const wxString &title);

private:
    wxPanel *panel;
    wxButton *btn;
    wxStaticText *label;
    void OnButtonClick(wxCommandEvent &event);
};