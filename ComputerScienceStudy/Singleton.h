#pragma once
#include <string>
/// <summary>
/// Singleton Pattern : 하나의 클래스에 오직 하나의 인스턴스만 가지는 패턴
/// -> 하나의 인스터스를 통해 로직을 만드는데 사용
///	장점 : **생성 비용 감소** 해당 인스턴스를 다른 모듀들이 공유하며 사용하기 때문
/// 단점 : **의존성이 높아짐** 
///		=> TDD(Test Driven Development)할 때 걸림돌
///			=> TDD는 단위 테스트를 주로 사용 (테스트가 서로 독립적이어야 함)
///			=> 미리 생성된 인스턴스를 기반으로 구현하기 때문에 독립적인 테스트 만들기 어려움
/// 해결책 : DI(Dependency Injection)의존성 주입을 통해 해결
///			=> 결합을 느슨하게 만들어 줌
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

