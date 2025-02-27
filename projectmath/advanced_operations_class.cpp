#include "advanced_operations_class.h"
#include "math.h"
#include "errorclass.h"
double advanced_operations_class::power()
{
	if (a == 0 && b == 0) {
		error^ rr = gcnew error(data, "the power of 0^0 cannot be calculated");
		throw rr;
	}
	return pow(a, b);
}
double advanced_operations_class::sqr()
{
	if (a <= 0 || b == 0) {
		error^ rr = gcnew error(data, "wrong data");
		throw rr;
	}
	return pow(a, 1.0/b);
}
double advanced_operations_class::log()
{
	if (a <= 0 || a==0||b<=0) {
		error^ rr = gcnew error(data, "wrong data");
		throw rr;
	}
	return log10(b) / log10(a);
}
double advanced_operations_class::gcd() 
{
	int c = System::Convert::ToInt32(a);
	int d = System::Convert::ToInt32(b);
		if (c <= 0 || d <= 0) {
			error^ rr = gcnew error(data, "condition not met: a>0 or b>0");
			throw rr;
		}
		while (d != 0) {
			int r = c % d;
			c = d;
			d = r;
		}
		return c;
}
double advanced_operations_class::scm()
{
	return  System::Convert::ToInt32(a) * System::Convert::ToInt32(b) / gcd();
}
double advanced_operations_class::factorial(int c)
{
		if (c < 0) {
			error^ rr = gcnew error(data, "number should be >=0");
			throw rr;
		}
		if (c == 0) {
			return 1;
		}
		int v = c;
		for (int i = 1; i < c - 1; i++) {
			v = v * (c - i);
		}
		return v;
}
double advanced_operations_class::newton()
{
	int n = System::Convert::ToInt32(a);
	int k = System::Convert::ToInt32(b);
	if (0 <= k && n >= k) {}
	else {
		error^ rr = gcnew error(data, "condition not met: 0 <= k <= n");
		throw rr;
	}
	return factorial(n) / (factorial(k) * factorial(n - k));
}

advanced_operations_class::advanced_operations_class(System::String^ arg_a, System::String^ arg_b)
{
	a = System::Convert::ToDouble(arg_a);
	b = System::Convert::ToDouble(arg_b);
}
advanced_operations_class::advanced_operations_class()
{
}