#pragma once
ref class advanced_operations_class
{
protected:
	double a;
	double b;
public:
	double scm();
	double gcd();
	double power();
	double sqr();
	double log();
	double newton();
	double factorial(int c);
	advanced_operations_class(System::String^ arg_a, System::String^ arg_b);
	advanced_operations_class();  
};

