#pragma once
ref class simple_operations_class
{
	double a;
	double b;
public:
	double sum();
	double subtr();
	double product();
	double division();
	double mod();
	double i_div();
	simple_operations_class(System::String^ arg_a, System::String^ arg_b);
};