#include "polynomial_class.h"
#include <vector>
#include "errorclass.h"

double calc_val(std::vector<double> a, double x) {
    double w = a[0];
    for (int i = 0; i < a.size()-1; i++) {
        w = (w * x) + a[i + 1];
    }
    return w;
}


    double polynomial_case_b::calculate_int()
    {
        std::vector<double> vec;
        array<System::String^>^ j = coefficients->Split(',');
        for (int i = 0; i < j->GetLength(0); i++)
        {
            vec.push_back(System::Convert::ToDouble(j[i]));
        }
        double sum = 0;
        if (dx <= 0)
        {
            error^ a = gcnew error(data, "condition not met dx>0");
            throw a;
        }
        if (b < a) {
            error^ a = gcnew error(data, "condition not met b>=a");
            throw a;
        }
        while (1) {
            if (a + dx >= b) {
                dx = b - a;
                sum = sum + 0.5 * dx * (calc_val(vec, a) + calc_val(vec, a+dx));
                return sum;
            }
            sum = sum + 0.5 * dx * (calc_val(vec, a) + calc_val(vec, a + dx));
            a = a + dx;
        }
    }
    polynomial_case_b::polynomial_case_b(System::String^ arg_a, System::String^ arg_b, System::String^ arg_dx, System::String^ arg_coefficients)
    {
        a = System::Convert::ToDouble(arg_a);
        b = System::Convert::ToDouble(arg_b);
        dx = System::Convert::ToDouble(arg_dx);
        coefficients = arg_coefficients;
    }

  
   

        double polynomial_case_a::calculate_y()
        {
            std::vector<double> vec;
            array<System::String^>^ j = coefficients->Split(',');
            for (int i = 0; i < j->GetLength(0); i++)
            {
                vec.push_back(System::Convert::ToDouble(j[i]));
            }
           return calc_val(vec, x);
        }
        polynomial_case_a::polynomial_case_a(System::String^ arg_x, System::String^ arg_coefficients)
        {
            x = System::Convert::ToDouble(arg_x);
            coefficients = arg_coefficients;
        }