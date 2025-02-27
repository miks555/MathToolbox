#pragma once
ref class conversion_10_o
{
private:
	int number;
	int base;
public:
	conversion_10_o(System::String^ arg_num, System::String^ arg_base);
	System::String^ convert();
};

ref class conversion_o_10
{
private:
	System::String^ number;
	int base;
public:
	conversion_o_10(System::String^ arg_num, System::String^ arg_base);
	System::String^ convert();
};

