#include "number_properties_class.h"
#include <vector>
bool number_properties_class::check_prime()
{
	if (a <= 1) {
		return 0;
	}
	for (int i = 2; i < a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}
bool number_properties_class::check_perfect()
{
	if (a == 0)
	{
		return 0;
	}
	int sum = 0;
	int i=1;
	while (i < a)
	{
		if (a % i == 0)
		{
			sum=sum+i;
		}
		i++;
	}
	if (a == sum)
	{
		return 1;
	}
	return 0;
}
std::vector<int> number_properties_class::factorial()
{
	std::vector<int> g;
	int t = 2; 
	int h = a;
	while (h > 1)
	{
		while (h % t == 0)
		{
			g.push_back(t);
			h = h/t;
		}
		t=t+1;
	}
	return g;
}
number_properties_class::number_properties_class(System::String^ arg_a)
{
	a = System::Convert::ToInt32(arg_a);
}