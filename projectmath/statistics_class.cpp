#include "statistics_class.h"
#include <vector>
statistics_class::statistics_class(System::String^ arg_a)
{
	a = arg_a;
}
double statistics_class::mean()
{
	double sum=0;
	array<System::String^>^ j = a->Split(',');
	for (int i = 0; i < j->GetLength(0); i++)
	{
		sum = sum + System::Convert::ToDouble(j[i]);
	}
	return sum/ j->GetLength(0);
}
double statistics_class::moda()
{
	std::vector<double> con;
	array<System::String^> ^j= a->Split(',');
	for (int i = 0; i < j->GetLength(0); i++)
	{
		con.push_back(System::Convert::ToDouble(j[i]));
	}
	for (int i = 0; i < con.size()-1; i++) {///sort
		if (con[i] > con[i + 1]) {
			double ll = con[i];
			con[i] = con[i + 1];
			con[i + 1] = ll;
			if (i > 0) {
				i = i - 2;
			}
		}
	}
	double mode = con[0];
	int m_c = 1;
	int c = 1;
	for (int i = 1; i < con.size(); i++) {
		if (con[i] == con[i - 1])
		{
			c++;
		}
		else {
			if (c > m_c) {
				m_c = c;
				mode = con[i - 1];
			}
			c = 1;
		}
	}
	if (c > m_c)
	{
		m_c = c;
		mode = con[con.size() - 1];
	}
	return mode;
}

double statistics_class::median()
{
	std::vector<double> con;
	array<System::String^>^ j = a->Split(',');
	for (int i = 0; i < j->GetLength(0); i++)
	{
		con.push_back(System::Convert::ToDouble(j[i]));
	}
	for (int i = 0; i < con.size() - 1; i++) {///sort
		if (con[i] > con[i + 1]) {
			double ll = con[i];
			con[i] = con[i + 1];
			con[i + 1] = ll;
			if (i > 0) {
				i = i - 2;
			}
		}
	}
	if (con.size() % 2 == 0)
	{
		return (con[con.size() / 2 - 1] + con[con.size() / 2]) / 2;
	}
	return con[con.size() / 2];
}
double statistics_class::variance()
{
	std::vector<double> con;
	array<System::String^>^ j = a->Split(',');
	for (int i = 0; i < j->GetLength(0); i++)
	{
		con.push_back(System::Convert::ToDouble(j[i]));
	}
	double sum=0;
	double m = mean();
	for (int i = 0; i < con.size(); i++)
	{
		sum = sum + (con[i] - m) * (con[i] - m);
	}
	return sum/con.size();
}
double statistics_class::standard_deviation()
{
	return sqrt(variance());
}
double statistics_class::smallest_element()
{
	array<System::String^>^ j = a->Split(',');
	double min = System::Convert::ToDouble(j[0]);
	for(int i = 0; i < j->GetLength(0); i++)
	{
		if (System::Convert::ToDouble(j[i]) < min)
		{
			min = System::Convert::ToDouble(j[i]);
		}
	}
	return min;
}
double statistics_class::largest_element()
{
	array<System::String^>^ j = a->Split(',');
	double max = System::Convert::ToDouble(j[0]);
	for (int i = 0; i < j->GetLength(0); i++)
	{
		if (System::Convert::ToDouble(j[i]) > max)
		{
			max = System::Convert::ToDouble(j[i]);
		}
	}
	return max;
}
