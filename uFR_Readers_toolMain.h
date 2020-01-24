/***************************************************************
 * Name:      uFR_Readers_toolMain.h
 * Purpose:   Defines Application Frame
 * Author:    Aleksandar Krstic (aleksandar.krstic@d-logic.rs)
 * Created:   2019-03-14
 * Copyright: Aleksandar Krstic (www.d-logic.net)
 * License:
 **************************************************************/
#include "lib/include/uFCoder.h"
#ifndef UFR_READERS_TOOLMAIN_H
#define UFR_READERS_TOOLMAIN_H

//(*Headers(uFR_Readers_toolFrame)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/menu.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/statusbr.h>
//*)

class uFR_Readers_toolFrame: public wxFrame
{
    public:

        uFR_Readers_toolFrame(wxWindow* parent,wxWindowID id = -1);
        virtual ~uFR_Readers_toolFrame();

    private:

        //(*Handlers(uFR_Readers_toolFrame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnbtnReaderOpenClick(wxCommandEvent& event);
        void OnbtnReaderResetClick(wxCommandEvent& event);
        void OnbtnReaderCloseClick(wxCommandEvent& event);
        void OnbtnReaderSoftRestartClick(wxCommandEvent& event);
        void OnbtnCheckConnectionClick(wxCommandEvent& event);
        void OnbtnSetSignalizationClick(wxCommandEvent& event);
        void OnbtnTurnRedLightClick(wxCommandEvent& event);
        void OnbtnEnterSleepModeClick(wxCommandEvent& event);
        void OnbtnLeaveSleepModeClick(wxCommandEvent& event);
        void OnbtnSetAutoSleepClick(wxCommandEvent& event);
        void OnbtnGetAutoSleepClick(wxCommandEvent& event);
        void OnbtnSetSpeedPermanentlyClick(wxCommandEvent& event);
        void OnbtnGetSpeedClick(wxCommandEvent& event);
        void OnbtnLockKeysClick(wxCommandEvent& event);
        void OnbtnUnlockKeysClick(wxCommandEvent& event);
        void OnbtnReaderOpenExClick(wxCommandEvent& event);
        void OnbtnFactoryResetClick(wxCommandEvent& event);
        void setStatusColor(UFR_STATUS status);
        void OnbEnterNewBaudRateClick(wxCommandEvent& event);
        void OnbResetBaudRateClick(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnbResetBaudRateToDefaultClick(wxCommandEvent& event);
        //*)

        //(*Identifiers(uFR_Readers_toolFrame)
        static const long ID_BUTTON1;
        static const long ID_BUTTON2;
        static const long ID_BUTTON3;
        static const long ID_BUTTON4;
        static const long ID_BUTTON5;
        static const long ID_BUTTON6;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL3;
        static const long ID_STATICTEXT5;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT6;
        static const long ID_TEXTCTRL5;
        static const long ID_BUTTON7;
        static const long ID_STATICTEXT19;
        static const long ID_COMBOBOX5;
        static const long ID_BUTTON18;
        static const long ID_STATICTEXT22;
        static const long ID_TEXTCTRL14;
        static const long ID_STATICTEXT20;
        static const long ID_TEXTCTRL12;
        static const long ID_STATICTEXT21;
        static const long ID_TEXTCTRL13;
        static const long ID_BUTTON19;
        static const long ID_STATICTEXT7;
        static const long ID_COMBOBOX1;
        static const long ID_STATICTEXT8;
        static const long ID_COMBOBOX2;
        static const long ID_BUTTON8;
        static const long ID_BUTTON9;
        static const long ID_BUTTON10;
        static const long ID_BUTTON11;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL6;
        static const long ID_STATICTEXT10;
        static const long ID_BUTTON12;
        static const long ID_STATICTEXT11;
        static const long ID_TEXTCTRL7;
        static const long ID_STATICTEXT12;
        static const long ID_BUTTON13;
        static const long ID_STATICTEXT13;
        static const long ID_COMBOBOX3;
        static const long ID_STATICTEXT14;
        static const long ID_COMBOBOX4;
        static const long ID_BUTTON14;
        static const long ID_STATICTEXT15;
        static const long ID_TEXTCTRL8;
        static const long ID_STATICTEXT16;
        static const long ID_TEXTCTRL9;
        static const long ID_BUTTON15;
        static const long ID_STATICTEXT17;
        static const long ID_TEXTCTRL10;
        static const long ID_BUTTON16;
        static const long ID_STATICTEXT18;
        static const long ID_TEXTCTRL11;
        static const long ID_BUTTON17;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT2;
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(uFR_Readers_toolFrame)
        wxStaticText* StaticText10;
        wxStaticText* StaticText9;
        wxStaticText* StaticText20;
        wxButton* btnCheckConnection;
        wxTextCtrl* LockPassTB;
        wxButton* btnSetSpeedPermanently;
        wxTextCtrl* COMResetBR;
        wxButton* btnTurnRedLight;
        wxButton* btnFactoryReset;
        wxComboBox* LightCB;
        wxButton* btnReaderSoftRestart;
        wxButton* btnReaderReset;
        wxButton* btnReaderOpenEx;
        wxTextCtrl* RXGet;
        wxStaticText* StaticText13;
        wxComboBox* NewBaudCB;
        wxStaticText* StaticText2;
        wxStaticText* StaticText14;
        wxTextCtrl* ReaderTypeTB;
        wxButton* btnSetSignalization;
        wxStaticText* StaticText6;
        wxButton* btnGetAutoSleep;
        wxStaticText* StaticText19;
        wxStaticText* StaticText8;
        wxStaticText* StaticText11;
        wxStaticText* StaticText18;
        wxButton* btnEnterSleepMode;
        wxButton* bResetBaudRateToDefault;
        wxButton* bEnterNewBaudRate;
        wxStaticText* StaticText1;
        wxStaticText* StaticText3;
        wxTextCtrl* SleepGetTB;
        wxTextCtrl* SecondsSetTB;
        wxTextCtrl* TXGet;
        wxButton* btnReaderClose;
        wxTextCtrl* InfoTB;
        wxComboBox* BeepCB;
        wxTextCtrl* UnlockPassTB;
        wxStaticText* PortInterfaceTB;
        wxStaticText* StaticText5;
        wxTextCtrl* PortInterfaceResetBR;
        wxStaticText* StaticText7;
        wxTextCtrl* PortInterface;
        wxStatusBar* StatusBar1;
        wxButton* btnReaderOpen;
        wxStaticText* StatusLabel;
        wxStaticText* StaticText15;
        wxStaticText* StaticText12;
        wxButton* btnLeaveSleepMode;
        wxButton* btnUnlockKeys;
        wxTextCtrl* ReaderTypeResetBR;
        wxComboBox* RXCB;
        wxButton* btnGetSpeed;
        wxButton* btnSetAutoSleep;
        wxStaticText* StaticText17;
        wxStaticText* StaticText4;
        wxComboBox* TXCB;
        wxButton* btnLockKeys;
        wxTextCtrl* AdditionalTB;
        wxStaticText* StaticText16;
        wxTextCtrl* PortNameTB;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // UFR_READERS_TOOLMAIN_H
