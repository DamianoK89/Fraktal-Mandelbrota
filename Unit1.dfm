object Form1: TForm1
  Left = 335
  Top = 167
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Fraktal Mandelbrota'
  ClientHeight = 700
  ClientWidth = 900
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnPaint = FormPaint
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = -8
    Top = -8
    Width = 913
    Height = 41
    TabOrder = 0
    object Label1: TLabel
      Left = 1
      Top = 15
      Width = 911
      Height = 25
      Align = alBottom
      Alignment = taCenter
      Caption = 'caption'
      Color = clMenuBar
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clBlack
      Font.Height = -20
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentColor = False
      ParentFont = False
      Layout = tlCenter
      Visible = False
    end
  end
  object MainMenu1: TMainMenu
    Left = 96
    Top = 64
    object Parametry1: TMenuItem
      Caption = 'Parametry'
      object FraktalMandelbrota1: TMenuItem
        Caption = 'Fraktal Mandelbrota'
        OnClick = FraktalMandelbrota1Click
      end
      object FraktalMandelbrotawybranywycinek1: TMenuItem
        Caption = 'Fraktal Mandelbrota - wybrany wycinek #1'
        OnClick = FraktalMandelbrotawybranywycinek1Click
      end
      object FraktalMandelbrotawybranywycinek21: TMenuItem
        Caption = 'Fraktal Mandelbrota - wybrany wycinek #2'
        OnClick = FraktalMandelbrotawybranywycinek21Click
      end
    end
    object Oprogramie1: TMenuItem
      Caption = 'O programie'
      OnClick = Oprogramie1Click
    end
  end
end
