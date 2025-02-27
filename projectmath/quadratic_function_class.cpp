#include "quadratic_function_class.h"
#include "errorclass.h"
#include "math.h"

System::String^ quadratic_function_class::calculate()
{

    if (a == 0) {
        if (b != 0) {
           return System::Convert::ToString(-c/b);
        }
        else {
            if (c == 0) {
                return  "inf";
            }
            else {
                return  "none";
            }
        }
    }
    else {
        double delta;
        delta = b * b - 4 * (a * c);
        if (delta < 0) {
            return  "none";
        }
        else {
            if (delta == 0) {
                return System::Convert::ToString(-b / (2 * a));
            }
            else {
                return System::Convert::ToString((-b - sqrt(delta)) / (2 * a)) + " and "+ System::Convert::ToString((-b + sqrt(delta)) / (2 * a));
            }
        }
    }
}
	quadratic_function_class::quadratic_function_class(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c)
	{
		a = System::Convert::ToDouble(arg_a);
		b = System::Convert::ToDouble(arg_b);
		c = System::Convert::ToDouble(arg_c);
	}
	
