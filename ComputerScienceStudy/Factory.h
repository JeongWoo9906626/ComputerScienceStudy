#pragma once
#include <memory>
#include <string_view>
#include "Player.h"

/// <summary>
/// Factory Pattern : 객체 생성을 위한 **인터페이스를 정의**하면서, 실제 객체 생성은 서브클래스에서 담당
///					-> 객체 생성 부분을 떼어내 추상화한 패턴
///						=> 상위 클래스가 뼈대 결정
///						=> 하위 클래스에서 객체 생성에 관한 구체적인 내용 결정
/// 장점 :	1. 느슨한 결합 => 상위 클래스에서는 생성 방법 알 필요 없음 => 유연성 향상
///			2. 유지 보수성 증가 => 객체 생성 로직이 따로 있음
/// </summary>

class Factory
{
public:
	std::unique_ptr<Player> CreateShape(std::string_view PlayerType)
	{
		if (PlayerType == "Tanker")
		{
			return std::make_unique<Tanker>();
		}
		else if (PlayerType == "Healer")
		{
			return std::make_unique<Healer>();
		}
		else
		{
			return std::make_unique<Archer>();
		}
	}
};

