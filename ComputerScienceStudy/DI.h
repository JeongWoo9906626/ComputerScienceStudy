#pragma once
#include "Singleton.h"
// Dependency Injection
class DI
{
private:
	Singleton& Single;

public:
	DI(Singleton& _Singleton)
		: Single(_Singleton)
	{

	}

	void Test(std::string Sentence)
	{
		Single.Test(Sentence);
	}
};

