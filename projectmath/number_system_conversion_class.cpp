#include "number_system_conversion_class.h"

#include <math.h>

#include <vector>


	conversion_10_o::conversion_10_o(System::String^ arg_num, System::String^ arg_base)
	{
		number = System::Convert::ToInt32(arg_num);
		base = System::Convert::ToInt32(arg_base);
	}
	System::String^ conversion_10_o::convert()
	{
		int sum = 0;
		int op = 0;
		while (sum < number) {
			sum = sum + pow(base, op);
			op++;
		}
		System::String^ out;
		std::vector<int>a(op);
		for (int i = 0; i < op; i++) {
			a[i] = number % base;
			number = number / base;
		}
		for (int i = op - 1; i != -1; i--) {
			out = out + System::Convert::ToString(a[i]);
			if (i!=0)
			{
				out = out + ",";
		}
		}
		return out;
	}
		
	
		conversion_o_10::conversion_o_10(System::String^ arg_num, System::String^ arg_base)
		{
			number = arg_num;
			base = System::Convert::ToInt32(arg_base);
		}
		
		System::String^ conversion_o_10::convert()
		{
			std::vector<double> vec;
			array<System::String^>^ j = number->Split(',');
			for (int i = 0; i < j->GetLength(0); i++)
			{
				vec.push_back(System::Convert::ToDouble(j[i]));
			}
			int sum = vec[0];
			for (int i = 0; i < vec.size() - 1; i++) {
				sum = (sum * base) + vec[i + 1];
			}
			return System::Convert::ToString(sum);
		}
		
		
		