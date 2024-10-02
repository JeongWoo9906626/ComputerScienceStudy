#pragma once
#include <string>
class Singleton
{
public:
	static Singleton& GetInstnace()
	{
		static Singleton Instnace = Singleton();
		return Instnace;
	}
	void Test(std::string& Sentence);

private:
	Singleton();
	~Singleton();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
};

