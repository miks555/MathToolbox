#pragma once
ref class polynomial_case_b
{
	System::String^ coefficients;
    double a;
    double b;
    double dx;
public:
    double calculate_int();
    polynomial_case_b(System::String^ arg_a,System::String^ arg_b, System::String^ arg_dx, System::String^ arg_coefficients);
};

ref class polynomial_case_a
{
    System::String^ coefficients;
    double x;
public:
    double calculate_y();
    polynomial_case_a(System::String^ arg_x,System::String^ arg_coefficients);
};

