#pragma once

/// <summary>
/// Strategy Pattern : 객체의 행위를 정의하는 여러 알고리즘을 캡슐화하여 **런타임에 행위를 바꿀** 수 있도록 만드는 디자인 패턴
/// 
/// 장점 :	1. 유연성 -> 클래스 외부에서 관리 & 런타임에 알고리즘 교체
///			2. OCP 준수 : 전략 추가시에 기존 코드 건드리지 않음
///			3. 유지보수성 향상 : 알고리즘을 다른 클래스에 분리하여 독립적으로 수정 가능
/// </summary>


class Strategy
{
public:
	virtual void Test() = 0;
};

class TestA : public Strategy
{
public:
	void Test() override;
};

class TestB : public Strategy
{
public:
	void Test() override;
};