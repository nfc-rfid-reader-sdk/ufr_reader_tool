/***************************************************************
 * Name:      uFR_Readers_toolApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Aleksandar Krstic (aleksandar.krstic@d-logic.rs)
 * Created:   2019-03-14
 * Copyright: Aleksandar Krstic (www.d-logic.net)
 * License:
 **************************************************************/

#include "uFR_Readers_toolApp.h"

//(*AppHeaders
#include "uFR_Readers_toolMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(uFR_Readers_toolApp);

bool uFR_Readers_toolApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	uFR_Readers_toolFrame* Frame = new uFR_Readers_toolFrame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
