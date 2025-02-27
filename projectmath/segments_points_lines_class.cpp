#include "segments_points_lines_class.h"
#include <vector>
#include "errorclass.h"
#include "math.h"



double case_a::calculate_length()
{
	std::vector<double> vec_1;
	array<System::String^>^ j = segment_1->Split(',');
	for (int i = 0; i < j->GetLength(0); i++)
	{
		vec_1.push_back(System::Convert::ToDouble(j[i]));
	}
	std::vector<double> vec_2;
	array<System::String^>^ uu = segment_2->Split(',');
	for (int i = 0; i < uu->GetLength(0); i++)
	{
		vec_2.push_back(System::Convert::ToDouble(uu[i]));
	}
	return sqrt( (vec_2[0]-vec_1[0])* (vec_2[0] - vec_1[0]) + ((vec_2[1] - vec_1[1])* (vec_2[1] - vec_1[1]))    );
	}
	System::String^ case_a::calculate_center()
	{
		std::vector<double> vec_1;
		array<System::String^>^ j = segment_1->Split(',');
		for (int i = 0; i < j->GetLength(0); i++)
		{
			vec_1.push_back(System::Convert::ToDouble(j[i]));
		}
		std::vector<double> vec_2;
		array<System::String^>^ uu = segment_2->Split(',');
		for (int i = 0; i < uu->GetLength(0); i++)
		{
			vec_2.push_back(System::Convert::ToDouble(uu[i]));
		}

		return System::Convert::ToString((vec_1[0] + vec_2[0]) / 2) + " , " + System::Convert::ToString((vec_1[1] + vec_2[1]) / 2);

	}
	case_a::case_a(System::String^ arg_s_1, System::String^ arg_s_2)
	{
		segment_1 = arg_s_1;
		segment_2 = arg_s_2;
	}


	double  case_b::calculate_slope_1()
	{
		slope_1 = atan(a_1);
		return slope_1;
		}
		double  case_b::calculate_slope_2()
		{
			slope_2 = atan(a_2);
			return slope_2;
		}
		case_b::case_b(System::String^ arg_a_1, System::String^ arg_b_1, System::String^ arg_a_2, System::String^ arg_b_2)
		{
			a_1 = System::Convert::ToDouble(arg_a_1);
			b_1 = System::Convert::ToDouble(arg_b_1);
			a_2 = System::Convert::ToDouble(arg_a_2);
			b_2 = System::Convert::ToDouble(arg_b_2);
		}
			System::String^ case_b::ps()
			{
				if (a_1 == a_2)
				{
					return "parallel";
				}
				else {
					if (a_1 == -1.0 / (a_2))
					{
						return "perpendicular";
					}
					else {
						return "neither perpendicular nor parallel";
					}
				}
			}
			System::String^ case_b::intersect()
			{
				if (b_1 == b_2 && a_1==a_2)
				{
					return "lines include themselves";
				}
				if (a_1 != a_2)
				{
					return "lines intersect";
				}
					return  "lines do not intersect";
			} 



			
			
			
			double case_c::length()
			{
				std::vector<double> vec;
				array<System::String^>^ oo = point->Split(',');
				for (int i = 0; i < oo->GetLength(0); i++)
				{
					vec.push_back(System::Convert::ToDouble(oo[i]));
				}
				return fabs(A*vec[0]+B*vec[1]+C) / sqrt(A * A + B * B);
				}
				case_c::case_c(System::String^ arg_A, System::String^ arg_B, System::String^ arg_C, System::String^ arg_point)
				{

					     A = System::Convert::ToDouble(arg_A);
						 B = System::Convert::ToDouble(arg_B);
						 C = System::Convert::ToDouble(arg_C);
						point = arg_point;
				}
	
				
			

