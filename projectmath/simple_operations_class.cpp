#include "simple_operations_class.h"
#include "errorclass.h"
double simple_operations_class::sum()
{
	return a + b;
}
double simple_operations_class::subtr()
{
	return a - b;
}
double simple_operations_class::product()
{
	return a * b;
}
double simple_operations_class::division()
{
	if (b == 0)
	{
		error^ a = gcnew error(zero_div, "division by 0");
		throw a;
	}
	return a / b;
}
double simple_operations_class::mod()
{
	if (b == 0)
	{
		error^ a = gcnew error(zero_div, "division by 0");
		throw a;
	}
	return (System::Convert::ToInt32(a) % System::Convert::ToInt32(b))*1.0;
}
double simple_operations_class::i_div()
{
	if (b == 0)
	{
		error^ a = gcnew error(zero_div, "division by 0");
		throw a;
	}
	return (System::Convert::ToInt32(a) / System::Convert::ToInt32(b))*1.0;
}
simple_operations_class::simple_operations_class(System::String ^arg_a, System::String^ arg_b)
{
	a = System::Convert::ToDouble(arg_a);
	b = System::Convert::ToDouble(arg_b);
}