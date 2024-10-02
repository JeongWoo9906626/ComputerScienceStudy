#pragma once
#include "Singleton.h"
// Singleton + Dependency Injection

/// <summary>
/// DI(Dependency Injection) : 의존성 주입
/// -> 메인 모듈이 하위 모듈에 대한 의존성을 주기보다 DI가 간접적으로 의존성 주입
///		==> '디커플링 된다'
/// 장점 :	1. 모듈 쉽게 교체 가능 -> 테스트 쉬움 & 마이그레이션 하기 쉬움
///			2. 추상화 레이어 기반 -> 의존성 방향 일관 & 쉬운 추론 & 모듈 간 관계 명확
/// 단점 : 런타임 패널티 (클래수 증가 => 복잡성 증가)
/// 원칙 :	1. 상위 모듈은 하위 모듈의 어떠한 것도 가져오지 않아야 함
///			2. 상위 모듈, 하위 모듈 둘다 추상화에 의존해야 함
///			3. 추상화는 세부 사항에 의존하지 말아야 함
/// </summary>

class DI
{
private:
	Singleton& Single;

public:
	DI(Singleton& _Singleton)
		: Single(_Singleton)
	{

	}

	void DITest()
	{
		Single.Test("Sentence");
	}
};

