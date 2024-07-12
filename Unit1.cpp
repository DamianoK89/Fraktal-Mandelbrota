//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
TColor kpFractal(double cX, double cY)
{
        double x = 0, y = 0;
        byte n = 0;
        for(; n < 255; n++)
        {
                double xNext = x * x - y * y + cX;
                double yNext = 2 * x * y + cY;
                if(xNext * xNext + yNext * yNext > 4)
                break;
        else
        {
                x = xNext;
                y = yNext;
        }
 }
 TColor kolor;
 if(n == 255) kolor = clBlack;
 else kolor = TColor(255, 255 - n, n);

 return kolor;
}
//---------------------------------------------------------------------------
void __fastcall Mandelbrot(TCanvas *Canvas, TObject *Temp)
{
        int kMax = reinterpret_cast<TControl *>(Temp)->ClientWidth;
        int lMax = reinterpret_cast<TControl *>(Temp)->ClientHeight;

        double cXmin = -2.0, cYmin = -1.25;
        double cXmax = 1.0, cYmax = 1.25;
        //double cXmin = 0.20, cYmin = 0.54;
        //double cXmin = -0.7413, cYmin = 0.1052;
        //double cXmax = 0.22, cYmax = 0.55;
        //double cXmax = -0.7515, cYmax = 0.1155;
        for(int l = 0; l < lMax; l++)
        {
                for(int k = 0; k < kMax; k++)
                {
                        double cX, cY;
                        cX = cXmin + k * (cXmax - cXmin) / kMax;
                        cY = cYmin + l * (cYmax - cYmin) / lMax;
                        Canvas->Pixels[k][l] = kpFractal(cX, cY);
                }
        }
}
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
void __fastcall TForm1::FormPaint(TObject *Sender)
{
        Mandelbrot(Canvas, this);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
        Application->MessageBoxA("Fraktal Mandelbrota \nVersion 1.0.0.0 \nby Damian Kie³basa \n2023 \ncopyleft \nAll rights reversed", "O programie", MB_OK | MB_ICONINFORMATION);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FraktalMandelbrotawybranywycinek1Click(
      TObject *Sender)
{
        Label1->Visible = true;
        Label1->Caption = "Fraktal Mandelbrota - wybrany wycinek #1";

        double cXmin = 0.20, cYmin = 0.54;
        double cXmax = 0.22, cYmax = 0.55;

        void __fastcall Mandelbrot(TCanvas *Canvas, TObject *Temp);
        {
                int kMax = ClientWidth;
                int lMax = ClientHeight;

                //double cXmin = -2.0, cYmin = -1.25;
                //double cXmax = 1.0, cYmax = 1.25;
                //double cXmin = 0.20, cYmin = 0.54;
                //double cXmin = -0.7413, cYmin = 0.1052;
                //double cXmax = 0.22, cYmax = 0.55;
                //double cXmax = -0.7515, cYmax = 0.1155;
                for(int l = 0; l < lMax; l++)
                {
                        for(int k = 0; k < kMax; k++)
                        {
                                double cX, cY;
                                cX = cXmin + k * (cXmax - cXmin) / kMax;
                                cY = cYmin + l * (cYmax - cYmin) / lMax;
                                Canvas->Pixels[k][l] = kpFractal(cX, cY);
                        }
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FraktalMandelbrota1Click(TObject *Sender)
{
        Label1->Visible = true;
        Label1->Caption = "Fraktal Mandelbrota";

        double cXmin = -2.0, cYmin = -1.25;
        double cXmax = 1.0, cYmax = 1.25;

        void __fastcall Mandelbrot(TCanvas *Canvas, TObject *Temp);
        {
                int kMax = ClientWidth;
                int lMax = ClientHeight;


                for(int l = 0; l < lMax; l++)
                {
                        for(int k = 0; k < kMax; k++)
                        {
                                double cX, cY;
                                cX = cXmin + k * (cXmax - cXmin) / kMax;
                                cY = cYmin + l * (cYmax - cYmin) / lMax;
                                Canvas->Pixels[k][l] = kpFractal(cX, cY);
                        }
                }
        }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FraktalMandelbrotawybranywycinek21Click(
      TObject *Sender)
{
        Label1->Visible = true;
        Label1->Caption = "Fraktal Mandelbrota - wybrany wycinek #2";

        double cXmin = -0.7413, cYmin = 0.1052;
        double cXmax = -0.7515, cYmax = 0.1155;

        void __fastcall Mandelbrot(TCanvas *Canvas, TObject *Temp);
        {
                int kMax = ClientWidth;
                int lMax = ClientHeight;


                for(int l = 0; l < lMax; l++)
                {
                        for(int k = 0; k < kMax; k++)
                        {
                                double cX, cY;
                                cX = cXmin + k * (cXmax - cXmin) / kMax;
                                cY = cYmin + l * (cYmax - cYmin) / lMax;
                                Canvas->Pixels[k][l] = kpFractal(cX, cY);
                        }
                }
        }
}
//---------------------------------------------------------------------------

