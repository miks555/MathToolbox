#pragma once
ref class case_a
{
public:
	double calculate_length();
	System::String^ calculate_center();
	case_a(System::String^ arg_s_1 , System::String^ arg_s_2);
private:
	System::String^ segment_1;
	System::String^ segment_2;
};

ref class case_b
{
public:
	double calculate_slope_1();
	double calculate_slope_2();
	case_b(System::String^ arg_a_1, System::String^ arg_b_1, System::String^ arg_a_2, System::String^ arg_b_2);
	System::String^ ps();
	System::String^ intersect();
private:
	double slope_1;
	double slope_2;
	double a_1;
	double b_1;
	double a_2;
	double b_2;
};

ref class case_c
{
public:
	double length( );
	case_c(System::String^ arg_A, System::String^ arg_B, System::String^ arg_C, System::String^ arg_point);
private:
	double slope_1;
	double slope_2;
	double A;
	double B;
	double C;
	System::String^ point;
};
