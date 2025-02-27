#pragma once
#include "errorclass.h"
ref class complex_num
{
	double a;
	double b;
public:
	double show_real();
	double show_img();
	double module();
	complex_num^ operator + (complex_num ^arg)
	{
		complex_num^ hlp = gcnew complex_num("0", "0");
		hlp->a = a + arg->a;
		hlp->b = b + arg->b;
		return hlp;
	}
	complex_num^ operator - (complex_num^ arg)
	{
		complex_num^ hlp = gcnew complex_num("0", "0");
		hlp->a = a - arg->a;
		hlp->b = b - arg->b;
		return hlp;
	}
	complex_num^ operator * (complex_num^ arg)
	{
		complex_num^ hlp = gcnew complex_num("0", "0");
		hlp->a = a*arg->a-b*arg->b;
		hlp->b = a*arg->b+b*arg->a;
		return hlp;
	}
	complex_num^ operator / (complex_num^ arg)
	{
		if (arg->a == 0 || arg->b == 0)
		{
			error^ a = gcnew error(zero_div, "0 division");
			throw a;
		}
		complex_num^ hlp = gcnew complex_num("0", "0");
		hlp->a = (a * arg->a + b * arg->b) / (arg->a* arg->a+ arg->b * arg->b);
		hlp->b = (a * arg->b - b * arg->a) / (arg->a * arg->a + arg->b * arg->b);
		return hlp;
	}
	complex_num(System::String^ arg_a, System::String^ arg_b);
};
ref class converter
{
	double r;
	double a;
public:
	converter(System::String^ arg_r, System::String^ arg_a);
	System::String^ convert();
};

