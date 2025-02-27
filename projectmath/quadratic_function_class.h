#pragma once
ref class quadratic_function_class
{
public:
	System::String ^calculate();
	quadratic_function_class(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c);
private:
	double a;
	double b;
	double c;
};

