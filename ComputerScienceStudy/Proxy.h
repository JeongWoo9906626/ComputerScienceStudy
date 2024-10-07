#pragma once
#include <iostream>

/// <summary>
/// Proxy Pattern : 객체에 대한 접근을 제어하는 디자인 패턴
/// 
/// 장점 :	1. 접근 제어 => 실제 객체에 대한 접근 제어
/// 
/// 단점 :	1. 복잡성 증가 => 구현할 클래스 수 증가
///			2. 성능 문제 => 오버헤드 발생 가능 (직접 접근이 아니라 한단계 거쳐서 접근하기 때문)
/// </summary>
/// 
class Subject
{
public:
	virtual void Request() = 0;
};

class RealSubject : public Subject
{
public:
	void Request() override
	{
		std::cout << "실제 작업" << std::endl;
	}
};

class Proxy : public Subject
{
public:
	void Request() override
	{
		if (nullptr == Real) 
		{
			Real = std::make_unique<RealSubject>();
		}

		Real->Request();
	}

private:
	std::unique_ptr<RealSubject> Real = nullptr;
};

