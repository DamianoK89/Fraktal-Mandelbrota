//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *Parametry1;
        TMenuItem *Oprogramie1;
        TMenuItem *FraktalMandelbrota1;
        TMenuItem *FraktalMandelbrotawybranywycinek1;
        TMenuItem *FraktalMandelbrotawybranywycinek21;
        TLabel *Label1;
        TPanel *Panel1;
        void __fastcall FormPaint(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
        void __fastcall FraktalMandelbrotawybranywycinek1Click(
          TObject *Sender);
        void __fastcall FraktalMandelbrota1Click(TObject *Sender);
        void __fastcall FraktalMandelbrotawybranywycinek21Click(
          TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
