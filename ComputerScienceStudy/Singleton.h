#pragma once
class Singleton
{
public:
	static Singleton& GetInstnace()
	{
		static Singleton Instnace = Singleton();
		return Instnace;
	}

private:
	Singleton();
	~Singleton();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
};

