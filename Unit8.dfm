object Form8: TForm8
  Left = 0
  Top = 0
  Caption = 'Form8'
  ClientHeight = 463
  ClientWidth = 893
  Color = clWhite
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 292
    Top = 39
    Width = 3
    Height = 13
  end
  object Button1: TButton
    Left = 696
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Pentagon'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 44
    Top = 386
    Width = 75
    Height = 25
    Caption = 'Parametrs'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 44
    Top = 422
    Width = 75
    Height = 29
    Caption = 'Move '
    TabOrder = 2
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 148
    Top = 386
    Width = 81
    Height = 25
    Caption = 'Change '
    TabOrder = 3
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 148
    Top = 424
    Width = 81
    Height = 25
    Caption = 'Movement'
    TabOrder = 4
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 259
    Top = 424
    Width = 75
    Height = 25
    Caption = 'Increase'
    TabOrder = 5
    OnClick = Button6Click
  end
  object Button7: TButton
    Left = 259
    Top = 386
    Width = 75
    Height = 25
    Caption = 'Decrease'
    TabOrder = 6
    OnClick = Button7Click
  end
  object Button8: TButton
    Left = 696
    Top = 63
    Width = 75
    Height = 25
    Caption = 'Ellipse'
    TabOrder = 7
    OnClick = Button8Click
  end
  object Button9: TButton
    Left = 696
    Top = 16
    Width = 75
    Height = 25
    Caption = 'Circle'
    TabOrder = 8
    OnClick = Button9Click
  end
  object Button10: TButton
    Left = 756
    Top = 408
    Width = 77
    Height = 25
    Caption = 'Erase'
    TabOrder = 9
    OnClick = Button10Click
  end
  object Button11: TButton
    Left = 696
    Top = 160
    Width = 75
    Height = 25
    Caption = 'Rectangle'
    TabOrder = 10
    OnClick = Button11Click
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 50
    OnTimer = Timer1Timer
    Left = 808
    Top = 32
  end
  object Timer2: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer2Timer
    Left = 808
    Top = 88
  end
  object Timer3: TTimer
    Enabled = False
    Interval = 100
    OnTimer = Timer3Timer
    Left = 808
    Top = 152
  end
end
