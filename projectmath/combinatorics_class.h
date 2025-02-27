#pragma once
#include "advanced_operations_class.h"
ref class combinatorics_class :public advanced_operations_class
{
public:
	combinatorics_class(System::String^ arg_a, System::String^ arg_b);
	int variations_with_repeats();
	int variations_without_repeats();
	int combinations();
};