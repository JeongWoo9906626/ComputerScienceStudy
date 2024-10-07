#pragma once
#include <iostream>
#include "Observer.h"

class TestObserverA : public Observer
{
public:
	void update(int state) override
	{
		std::cout << "TestObserverA " << state << "change" << std::endl;
	}
};

class TestObserverB : public Observer
{
public:
	void update(int state) override
	{
		std::cout << "TestObserverB " << state << "change" << std::endl;
	}
};