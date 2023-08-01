#ifdef WX_PRECOMP
#include "wx_pch.h"
#endif

#ifdef __BORLANDC__
#pragma hdrstop
#endif

#include "App.h"
#include "MainWindow.h"

IMPLEMENT_APP(App);

bool App::OnInit()
{
    MainWindow *mainWindow = new MainWindow("wxWidgets Starter App");
    mainWindow->Show();

    return true;
}
