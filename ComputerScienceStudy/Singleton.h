#pragma once
#include <string>
/// <summary>
/// Singleton Pattern : �ϳ��� Ŭ������ ���� �ϳ��� �ν��Ͻ��� ������ ����
/// -> �ϳ��� �ν��ͽ��� ���� ������ ����µ� ���
///	���� : **���� ��� ����** �ش� �ν��Ͻ��� �ٸ� ������ �����ϸ� ����ϱ� ����
/// ���� : **�������� ������** 
///		=> TDD(Test Driven Development)�� �� �ɸ���
///			=> TDD�� ���� �׽�Ʈ�� �ַ� ��� (�׽�Ʈ�� ���� �������̾�� ��)
///			=> �̸� ������ �ν��Ͻ��� ������� �����ϱ� ������ �������� �׽�Ʈ ����� �����
/// �ذ�å : DI(Dependency Injection)������ ������ ���� �ذ�
///			=> ������ �����ϰ� ����� ��
/// </summary>
class Singleton
{
public:
	static Singleton& GetInstnace()
	{
		static Singleton Instnace = Singleton();
		return Instnace;
	}
	void Test(const std::string& Sentence);

private:
	Singleton();
	~Singleton();
	Singleton(const Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;
	Singleton(Singleton&&) = delete;
	Singleton& operator=(Singleton&&) = delete;
};

