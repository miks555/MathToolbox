#pragma once
enum errors_enum {nothing_sel=0,zero_div,empty,data};
ref class error
{
private:
    int number;
    System::String ^description;
public:
    int getNum();
    System::String^ getDesc();
    error(int numer_arg, System::String ^opis_arg);
};