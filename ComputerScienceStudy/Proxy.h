#pragma once
#include <iostream>

/// <summary>
/// Proxy Pattern : ��ü�� ���� ������ �����ϴ� ������ ����
/// 
/// ���� :	1. ���� ���� => ���� ��ü�� ���� ���� ����
/// 
/// ���� :	1. ���⼺ ���� => ������ Ŭ���� �� ����
///			2. ���� ���� => ������� �߻� ���� (���� ������ �ƴ϶� �Ѵܰ� ���ļ� �����ϱ� ����)
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
		std::cout << "���� �۾�" << std::endl;
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

