//---------------------------------------------------------------------------

#pragma hdrstop

#include "Circle.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

void Circ::Change(TCanvas* Canvas, int a)
{
	 if(radius1 > 10)
	  {
	  Hide(Canvas);
	  radius1 -= a;
	  radius2 = radius1;
	  Show(Canvas);
	  }
}

void Circ::Increase(TCanvas* Canvas)
{
	 if(radius1 < 70)
	  {
	  Hide(Canvas);
	  radius1 += 2;
	  radius2 = radius1;
	  Show(Canvas);
	  }
}

void Circ::Decrease(TCanvas* Canvas)
{
	 if(radius1 > 10)
	  {
	  Hide(Canvas);
	  radius1 -= 2;
	  radius2 = radius1;
	  Show(Canvas);
	  }
}
