#pragma once
ref class triangle_case_a
{
protected:
	double a;
	double b;
	double c;
	double ac;
	double ab;
	double bc;
	double area;
public:
	triangle_case_a(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c);
	double calculate_ac();
	double calculate_ab();
	double calculate_bc();
    double calculate_area();
};
ref class triangle_case_b
{
private:
	System::String^ up;
	System::String^ left;
	System::String^ right;
public:
	System::String^ center();
	System::String^ area();
	triangle_case_b(System::String^ arg_up, System::String^ arg_left, System::String^ arg_right);
};
