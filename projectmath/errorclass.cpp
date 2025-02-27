#include "errorclass.h"
int error::getNum()
{
    return number;
}
System::String ^error::getDesc()
{
    return description; 
}
error::error(int number_arg, System::String^ description_arg)
{
    number = number_arg;
    description = description_arg;
}