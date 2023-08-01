#include "MainWindow.h"
#include <wx/wx.h>

MainWindow::MainWindow(const wxString &title) : wxFrame(nullptr, wxID_ANY, title)
{
  panel = new wxPanel(this);
  btn = new wxButton(panel, wxID_ANY, "Click Me", wxPoint(80, 80), wxSize(100, 35));
  label = new wxStaticText(panel, wxID_ANY, "", wxPoint(250, 150));

  btn->Bind(wxEVT_BUTTON, &MainWindow::OnButtonClick, this);
}

void MainWindow::OnButtonClick(wxCommandEvent &event)
{
  wxMessageDialog *dialogue = new wxMessageDialog(nullptr, "Welcome to wxWidgets", "Info", wxOK);
  dialogue->ShowModal();
}