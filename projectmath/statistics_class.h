#pragma once
ref class statistics_class
{
	System::String^ a;
public:
	statistics_class(System::String^ arg_a);
	double moda();
	double median();
	double variance();
	double standard_deviation();
	double mean();
	double smallest_element();
	double largest_element();
};


