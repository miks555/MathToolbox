#include "more_about_triangle_class.h"
#include "math.h"
#include <vector>
#include "errorclass.h"
	
	triangle_case_a::triangle_case_a(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c)
	{
		a = System::Convert::ToDouble(arg_a);
		 b = System::Convert::ToDouble(arg_b);
		 c = System::Convert::ToDouble(arg_c);
		 if (a <= 0 || b <= 0 || c <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
		 if (a + b > c && a + c > b && b + c > a)
		 {
			
		 }
		 else
		 {
			 error^ a = gcnew error(data, "cannot construct triangle");
			 throw a;
		 }
	}
	double triangle_case_a::calculate_ac()
	{
		ac = acos((a * a + c * c - b * b) / (2 * a * c));
		return ac;
	}
	double triangle_case_a::calculate_ab()
	{
		ab = acos((a * a + b * b - c * c) / (2 * a * b));
		return ab;
	}
	double triangle_case_a::calculate_bc()
	{
		bc = acos((c * c + b * b - a * a) / (2 * c * b));
		return bc;
	}
	double triangle_case_a::calculate_area()
	{
		double p = (a + b + c) / 2;
			area = sqrt(p * (p - a) * (p - b) * (p - c));
		return area;
	}
		

	System::String^ triangle_case_b::center()
	{
		std::vector<double> up_vec;
		array<System::String^>^ j = up->Split(',');
		for (int i = 0; i < j->GetLength(0); i++)
		{
			up_vec.push_back(System::Convert::ToDouble(j[i]));
		}
		std::vector<double> left_vec;
		array<System::String^>^ yy = left->Split(',');
		for (int i = 0; i < yy->GetLength(0); i++)
		{
			left_vec.push_back(System::Convert::ToDouble(yy[i]));
		}
		std::vector<double> right_vec;
		array<System::String^>^ uu = right->Split(',');
		for (int i = 0; i < uu->GetLength(0); i++)
		{
			right_vec.push_back(System::Convert::ToDouble(uu[i]));
		}
		return System::Convert::ToString((up_vec[0]+ left_vec[0] + right_vec[0])/3 ) + " , " + System::Convert::ToString((up_vec[1] + left_vec[1] + right_vec[1]) / 3);
		}



		System::String^ triangle_case_b::area()
		{

			std::vector<double> up_vec;
			array<System::String^>^ j = up->Split(',');
			for (int i = 0; i < j->GetLength(0); i++)
			{
				up_vec.push_back(System::Convert::ToDouble(j[i]));
			}
			std::vector<double> left_vec;
			array<System::String^>^ yy = left->Split(',');
			for (int i = 0; i < yy->GetLength(0); i++)
			{
				left_vec.push_back(System::Convert::ToDouble(yy[i]));
			}
			std::vector<double> right_vec;
			array<System::String^>^ uu = right->Split(',');
			for (int i = 0; i < uu->GetLength(0); i++)
			{
				right_vec.push_back(System::Convert::ToDouble(uu[i]));
			}
			return System::Convert::ToString(   0.5*fabs(               (up_vec[0]-left_vec[0])*(right_vec[1]-left_vec[1])-(up_vec[1]-left_vec[1])*(right_vec[0]-left_vec[0])                                         )                 );
		}
		triangle_case_b::triangle_case_b(System::String^ arg_up, System::String^ arg_left, System::String^ arg_right)
		{
			up = arg_up;
			left= arg_left;
			right = arg_right;
		}
	