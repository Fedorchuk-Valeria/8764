//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit8.h"
#include "Polygon.h"
#include "Ellipse.h"
#include "Rectangle.h"
#include "Circle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;
Pentagon A(93, 51, 133, 81, 131, 101, 97, 127, 73, 111);
Ellip E(180, 130, 40, 20);
Circ C(100, 190, 40);
Rectan R(150, 50, 30, 65);
int F;

__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm8::Button1Click(TObject *Sender)
{
   Timer1->Enabled = false;
   Timer2->Enabled = false;
   Timer3->Enabled = false;
   A.Show(Canvas);
   F = 1;
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button2Click(TObject *Sender)
{
	   if (F == 1)
	   {Label1->Caption = "Perimetr = " + String(A.Perimetr())
						 + "\nSquare = " + String(A.Area())
						 + "\nCenter of mass - ("
						 + String(A.CenterOfMassX()) + ", "
						 + String(A.CenterOfMassY()) + ")";
	   }

	   if (F == 2)
	   {Label1->Caption = "Perimetr = " + String(E.Perimetr())
						 + "\nSquare = " + String(E.Area())
						 + "\nCenter of mass - ("
						 + String(E.CenterOfMassX()) + ", "
						 + String(E.CenterOfMassY()) + ")";
	   }

	   if (F == 3)
	   {Label1->Caption = "Perimetr = " + String(C.Perimetr())
						 + "\nSquare = " + String(C.Area())
						 + "\nCenter of mass - ("
						 + String(C.CenterOfMassX()) + ", "
						 + String(C.CenterOfMassY()) + ")";
	   }

	   if (F == 4)
	   {Label1->Caption = "Perimetr = " + String(R.Perimetr())
						 + "\nSquare = " + String(R.Area())
						 + "\nCenter of mass - ("
						 + String(R.CenterOfMassX()) + ", "
						 + String(R.CenterOfMassY()) + ")";
	   }
}
//---------------------------------------------------------------------------



void __fastcall TForm8::Button3Click(TObject *Sender)
{
     Timer1->Enabled = false;
	 Timer2->Enabled = false;
	 Timer3->Enabled = false;
	 if(F == 1)
	 {
		A.Move(Canvas, 43, 56);
	 }
	 if(F == 2)
	 {
		E.Move(Canvas, 63, 46);
	 }
	 if(F == 3)
	 {
		C.Move(Canvas, 43, 82);
	 }
	 if(F == 4)
	 {
		R.Move(Canvas, 123, 22);
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button4Click(TObject *Sender)
{
     Timer1->Enabled = false;
	 Timer2->Enabled = false;
	 Timer3->Enabled = false;
	 if(F == 1)
	 {
		A.Change(Canvas, 42, 32, 51, 47, 51);
	 }
	 if(F == 2)
	 {
		E.Change(Canvas, 12, 8);
	 }
	 if(F == 3)
	 {
		C.Change(Canvas, 9);
	 }
	 if(F == 4)
	 {
		R.Change(Canvas, 6, 11);
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Timer1Timer(TObject *Sender)
{

	 if(F == 1)
	 {
		A.Movement(Canvas, 2, 2);
	 }
	 if(F == 2)
	 {
		E.Movement(Canvas, 2, 2);
	 }
	 if(F == 3)
	 {
		C.Movement(Canvas, 2, 2);
	 }
	 if(F == 4)
	 {
		R.Movement(Canvas, 2, 2);
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button5Click(TObject *Sender)
{
		if(Timer2->Enabled == true)
		Timer2->Enabled = false;

        if(Timer3->Enabled == true)
		Timer3->Enabled = false;

		Timer1->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Timer2Timer(TObject *Sender)
{

	 if(F == 1)
	 {
		A.Increase(Canvas);
	 }

	 if(F == 2)
	 {
		E.Increase(Canvas);
	 }
	 if(F == 3)
	 {
		C.Increase(Canvas);
	 }
	 if(F == 4)
	 {
		R.Increase(Canvas);
	 }
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button6Click(TObject *Sender)
{
		if(Timer1->Enabled == true)
		Timer1->Enabled = false;
		if(Timer3->Enabled == true)
		Timer3->Enabled = false;

		Timer2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Timer3Timer(TObject *Sender)
{

	 if(F == 1)
	 {
		A.Decrease(Canvas);
	 }

	 if(F == 2)
	 {
		E.Decrease(Canvas);
	 }

	 if(F == 3)
	 {
		C.Decrease(Canvas);
	 }
     if(F == 4)
	 {
		R.Decrease(Canvas);
	 }
}

//---------------------------------------------------------------------------

void __fastcall TForm8::Button7Click(TObject *Sender)
{
		if(Timer1->Enabled == true)
		Timer1->Enabled = false;

        if(Timer2->Enabled == true)
		Timer2->Enabled = false;

		Timer3->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button8Click(TObject *Sender)
{
	   Timer1->Enabled = false;
	   Timer2->Enabled = false;
	   Timer3->Enabled = false;
	   E.Show(Canvas);
	   F = 2;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button9Click(TObject *Sender)
{
      Timer1->Enabled = false;
	  Timer2->Enabled = false;
	  Timer3->Enabled = false;
	  C.Show(Canvas);
	  F = 3;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button10Click(TObject *Sender)
{
   A.Hide(Canvas);
   C.Hide(Canvas);
   E.Hide(Canvas);
   R.Hide(Canvas);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Button11Click(TObject *Sender)
{
      Timer1->Enabled = false;
	  Timer2->Enabled = false;
	  Timer3->Enabled = false;
	  R.Show(Canvas);
	  F = 4;
}
//---------------------------------------------------------------------------

