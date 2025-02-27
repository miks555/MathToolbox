#include "figures_and_solids_class.h"
#include "math.h"
#include "errorclass.h"
double pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481117450284102701938521105559644622948954930381964428;
double triangle::calculatearea()
{
	area = a * h / 2;
	return area;
}
triangle::triangle(System::String^ arg_a, System::String^ arg_h)
{
	a = System::Convert::ToDouble(arg_a);
	h = System::Convert::ToDouble(arg_h);
	if (a <= 0 || h <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}
triangle::triangle()
{
}

double trapezoid::calculatearea()
{
	area = ((a + b)/2 )*h;
	return area;
}
trapezoid::trapezoid(System::String^ arg_a, System::String^ arg_b, System::String^ arg_h)
{
	a = System::Convert::ToDouble(arg_a);
	h = System::Convert::ToDouble(arg_h);
	b = System::Convert::ToDouble(arg_b);
	if (a <= 0 || h <= 0||b<=0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}


	 double rectangle::calculatearea()
	 {
		 area = a * b;
		 return area;
	 }
	 rectangle::rectangle(System::String^ arg_a, System::String^ arg_b)
	 {
		 a = System::Convert::ToDouble(arg_a);
		 b = System::Convert::ToDouble(arg_b);
		 if (a <= 0 || b <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	 }


	 double parallelogram::calculatearea()
	 {
		 area = a * h;
		 return area;
	 }
	 parallelogram::parallelogram(System::String^ arg_a, System::String^ arg_h)
	 {
		 a = System::Convert::ToDouble(arg_a);
		 h = System::Convert::ToDouble(arg_h);
		 if (a <= 0 || h <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	 }

	 double rhombus::calculatearea()
	 {
		 area = a * h;
		 return area;
	 }
	 rhombus::rhombus(System::String^ arg_a, System::String^ arg_h)
	 {
		 a = System::Convert::ToDouble(arg_a);
		 h = System::Convert::ToDouble(arg_h);
		 if (a <= 0 || h <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	 }

	 double deltoid::calculatearea()
	 {
		 area = 0.5 * d1 * d2;
		 return area;
	 }
deltoid::deltoid(System::String^ arg_d1, System::String^ arg_d2)
		 {
			 d1 = System::Convert::ToDouble(arg_d1);
			 d2 = System::Convert::ToDouble(arg_d2);
			 if (d1 <= 0 || d2 <= 0)
			 {
				 error^ a = gcnew error(data, "length must be positive");
				 throw a;
			 }
		 }
	

double circle::calculatearea()
{
	area = pi *r*r;
	return area;
}
double circle::calculatedimension()
{
	dim = pi * 2 * r;
	return dim;
}
circle::circle(System::String^ arg_r)
{
	r= System::Convert::ToDouble(arg_r);
	if (r <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}
circle::circle()
{
}

double circle_slice::calculatearea()
{
	area = (a/360)*pi * r * r;
	return area;
}

double circle_slice::calculatedimension()
{
	dim = (a / 360) * pi * 2 * r;
	return dim;
}
circle_slice::circle_slice(System::String^ arg_r, System::String^ arg_a)
{
	r = System::Convert::ToDouble(arg_r);
	a = System::Convert::ToDouble(arg_a);
	if (r <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
	if (a < 0 || a>360)
	{
		error^ a = gcnew error(data, "condition not met: angle = <0,360>");
		throw a;
	}
}



	 double cuboid::calculatearea()
	 {
		 area = 2*(a*b+b*c+a*c);
		 return area;
	 }
	 double cuboid::calculatvolume() {
		 volume = a*b*c;
		 return volume;
	 }
	 double cuboid::calculatediagonal() {
		 diagonal = sqrt(a*a+b*b+c*c);
		 return diagonal;
	 }
cuboid::cuboid(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c)
{
	a = System::Convert::ToDouble(arg_a);
	b = System::Convert::ToDouble(arg_b);
	c = System::Convert::ToDouble(arg_c);
	if (a <= 0|| b <= 0 || c <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}




double prism::calculatearea()
{
	area = h * bc;
	return area;
}
double prism::calculatvolume() {
	volume = ba*h;
	return volume;
}
prism::prism(System::String^ arg_ba, System::String^ arg_h, System::String^ arg_bc)
{
	ba = System::Convert::ToDouble(arg_ba);
	h = System::Convert::ToDouble(arg_h);
	bc = System::Convert::ToDouble(arg_bc);
	if (ba <= 0 || h <= 0 || bc <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}


double pyramid::calculatearea()
{
	area = la+ba;
	return area;
}
double pyramid::calculatvolume() {
	volume = ba * h * (1.0/3);
	return volume;
}
pyramid::pyramid(System::String^ arg_ba, System::String^ arg_h, System::String^ arg_la)
{
	ba = System::Convert::ToDouble(arg_ba);
	h = System::Convert::ToDouble(arg_h);
	la = System::Convert::ToDouble(arg_la);
	if (ba <= 0 || h <= 0 || la <= 0)
	{
		error^ a = gcnew error(data, "length must be positive");
		throw a;
	}
}




	 double ball::calculatearea()
	 {
		 area = 4 * pi * r * r;
		 return area;
	 }
	 double ball::calculatvolume()
	 {
		 volume = 4.0 / 3 * pi * r * r * r;
		 return volume;
	 }
	 ball::ball(System::String^ arg_r)
	 {
		 r = System::Convert::ToDouble(arg_r);
		 if (r <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	}
	 ball::ball()
	 {

	}



	 double cone::calculatearea()
	 {
		 area = pi * r * (r + sqrt(h * h + r * r));
		 return area;
	 }
	 double cone::calculatvolume()
	 {
		 volume = 1.0 / 3 *pi*r*r*h;
		 return volume;
	 }
	 cone::cone(System::String^ arg_r, System::String^ arg_h)
	 {
		 r = System::Convert::ToDouble(arg_r);
		 h= System::Convert::ToDouble(arg_h);
		 if (r <= 0 || h <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	 }
	 cone::cone()
	 {

	 }


	 double cylinder::calculatearea()
	 {
		 area = 2*pi*r*(r+h);
		 return area;
	 }
	 double cylinder::calculatvolume()
	 {
		 volume = pi*r*r*h;
		 return volume;
	 }
	 cylinder::cylinder(System::String^ arg_r, System::String^ arg_h)
	 {
		 r = System::Convert::ToDouble(arg_r);
		 h = System::Convert::ToDouble(arg_h);
		 if (r <= 0 || h <= 0)
		 {
			 error^ a = gcnew error(data, "length must be positive");
			 throw a;
		 }
	 }