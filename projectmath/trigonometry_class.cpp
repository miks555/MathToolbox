#include "trigonometry_class.h"
#include <vector>
std::vector<double> trigonometry_class::calc()
{
	if(unit)
	{
		a = a*(3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428/180) ;
	}
	std::vector<double>n(16);
	n[0] = cos(a);
	n[1] = sin(a);
	n[2] = tan(a);
	n[3] = 1/tan(a);
	n[4] = acos(a);
	n[5] = asin(a);
	n[6] = atan(a);
	n[7] = 1/atan(a);
	n[8] = cosh(a);
	n[9] = sinh(a);
	n[10] = tanh(a);
	n[11] = 1/tanh(a);
	n[12] = acosh(a);
	n[13] = asinh(a);
	n[14] = atanh(a);
	n[15] = 1/atanh(a);
	return n;
}
trigonometry_class::trigonometry_class(bool h,double arg)
{
	unit = h;
	a = arg;
}