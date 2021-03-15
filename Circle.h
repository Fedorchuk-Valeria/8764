//---------------------------------------------------------------------------

#ifndef CircleH
#define CircleH
//---------------------------------------------------------------------------
#endif

#include <vcl.h>
#include "Ellipse.h"

class Circ: public Ellip
{ public:
	  Circ(int x, int y, int r) :  Ellip(x, y)
	  {
		  radius1 = radius2 = r;
	  }

	  void Change(TCanvas* Canvas, int a);

	  void Increase(TCanvas* Canvas);

	  void Decrease(TCanvas* Canvas);
};
