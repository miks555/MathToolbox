#pragma once
ref class figure abstract
{
public:
	virtual double calculatearea() = 0;
protected:
	double area;
};
ref class solid abstract:public figure 
{
public:
	virtual double calculatvolume() = 0;
protected:
	double volume;
};

ref class triangle :public figure
{
public:
	virtual double calculatearea() override;
	triangle(System::String^ arg_a, System::String^ arg_h);
	triangle();
protected: 
	double a;
	double h;
};

ref class trapezoid :public triangle
{
public:
	virtual double calculatearea() override;
	trapezoid(System::String^ arg_a, System::String^ arg_b, System::String^ arg_h);
protected:
	double b;
};

ref class rectangle :public figure
{
public:
	virtual double calculatearea() override;
	rectangle (System::String^ arg_a, System::String^ arg_b);
protected:
	double a;
	double b;
};

ref class parallelogram :public triangle
{
public:
	virtual double calculatearea() override;
	parallelogram(System::String^ arg_a, System::String^ arg_h);
};

ref class rhombus :public triangle
{
public:
	virtual double calculatearea() override;
	rhombus(System::String^ arg_a, System::String^ arg_h);
};

ref class deltoid :public figure
{
public:
	virtual double calculatearea() override;
	deltoid(System::String^ arg_d1, System::String^ arg_d2);
protected:
	double d1;
	double d2;
};


ref class circle :public figure
{
public:
	virtual double calculatearea() override;
	virtual double calculatedimension();
	circle(System::String^ arg_r);
	circle();
protected:
	double r;
	double dim;
};

ref class circle_slice :public circle
{
public:
	virtual double calculatearea() override;
	virtual double calculatedimension() override;
	circle_slice(System::String^ arg_r, System::String^ arg_a);
protected:
	double a;
};

ref class cuboid :public solid
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	virtual double calculatediagonal();
	cuboid(System::String^ arg_a, System::String^ arg_b, System::String^ arg_c);
protected:
	double a;
	double b;
	double c;
	double diagonal;
};

ref class prism :public solid
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	prism(System::String^ arg_ba, System::String^ arg_h, System::String^ arg_bc);
protected:
	double ba;
	double h;
	double bc;
};

ref class pyramid :public solid
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	pyramid(System::String^ arg_ba, System::String^ arg_h, System::String^ arg_la);
protected:
	double ba;
	double h;
	double la;
};

ref class ball :public solid
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	ball(System::String^ arg_r);
	ball();
protected:
	double r;
};

ref class cone :public ball
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	cone(System::String^ arg_r, System::String^ arg_h);
	cone();
protected:
	double h;
};

ref class cylinder :public cone
{
public:
	virtual double calculatearea() override;
	virtual double calculatvolume() override;
	cylinder(System::String^ arg_r, System::String^ arg_h);
};

