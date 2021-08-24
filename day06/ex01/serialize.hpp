#pragma once
#include <cstdint>

typedef struct Data
{
	int a;
	int b;
	Data()
	{
		a = 3;
		b = 2;
	}
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);