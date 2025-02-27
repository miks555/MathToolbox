#include "complex_class.h"
#include "math.h"
complex_num::complex_num(System::String^ arg_a, System::String^ arg_b)
{
	a = System::Convert::ToDouble(arg_a);
	b = System::Convert::ToDouble(arg_b);
}
double complex_num:: show_real()
{
	return a;
}
double complex_num::show_img()
{
	return b;
}
double complex_num::module()
{
	return sqrt(a * a + b * b);
}
converter::converter(System::String^ arg_r, System::String^ arg_a)
{
	r = System::Convert::ToDouble(arg_r);
	a = System::Convert::ToDouble(arg_a);
}

System::String^ converter::convert()
{
	if (r * sin(a)< 0)
	{
	return System::Convert::ToString(r * cos(a)) + System::Convert::ToString(r * sin(a)) + "i";
	}
	return System::Convert::ToString(r * cos(a)) + "+" + System::Convert::ToString(r * sin(a)) + "i";
}