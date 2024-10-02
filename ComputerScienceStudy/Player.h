#pragma once
#include "Factory.h"
#include <string>

/// <summary>
/// 추상 클래스 및 상속
/// </summary>

class Player
{
public:
	virtual void Test() = 0;
};

class Tanker : public Player
{
public:
	void Test() override
	{
		std::string TankerPlayer = "This is Rectangle";
	}
};

class Healer : public Player
{
public:
	void Test() override
	{
		std::string HealerPlayer = "This is Healer";
	}
};

class Archer : public Player
{
public:
	void Test() override
	{
		std::string ArcherPlayer = "This is Archer";
	}
};
