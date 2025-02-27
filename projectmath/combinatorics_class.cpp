#include "combinatorics_class.h"
#include "errorclass.h"
combinatorics_class::combinatorics_class(System::String^ arg_a, System::String^ arg_b)
{
	a = System::Convert::ToDouble(arg_a);
	b = System::Convert::ToDouble(arg_b);
}
int combinatorics_class::variations_with_repeats()
{
	return System::Convert::ToInt32(power());
}
int combinatorics_class::variations_without_repeats()
{
	int n = System::Convert::ToInt32(a);
	int k = System::Convert::ToInt32(b);
	if (1 <= k && k <= n)
	{
	}
	else
	{
		int z = n;
		n = k;
		k = z;
	}
	if (1 <= k && k <= n)
	{
	}
	else
	{
		error^ a = gcnew error(data, "condition 1 <= k <= n not met");
		throw a;
	}
	return System::Convert::ToInt32(factorial(n)/factorial(n - k));
}
int combinatorics_class::combinations()
{
	int n = System::Convert::ToInt32(a);
	int k = System::Convert::ToInt32(b);
	if (0 <= k && k <= n)
	{
	}
	else
	{
		int z = n;
		n = k;
		k = z;
	}
	if (0 <= k && k <= n)
	{
	}
	else
	{
		error^ a = gcnew error(data, "condition 0 <=k<= n not met");
		throw a;
	}
	return System::Convert::ToInt32(factorial(n)/(factorial(n - k)*factorial(k)));
}