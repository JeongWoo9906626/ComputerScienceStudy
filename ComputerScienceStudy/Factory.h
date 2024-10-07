#pragma once
#include <memory>
#include <string_view>
#include "Player.h"

/// <summary>
/// Factory Pattern : ��ü ������ ���� **�������̽��� ����**�ϸ鼭, ���� ��ü ������ ����Ŭ�������� ���
///					-> ��ü ���� �κ��� ��� �߻�ȭ�� ����
///						=> ���� Ŭ������ ���� ����
///						=> ���� Ŭ�������� ��ü ������ ���� ��ü���� ���� ����
/// ���� :	1. ������ ���� => ���� Ŭ���������� ���� ��� �� �ʿ� ���� => ������ ���
///			2. ���� ������ ���� => ��ü ���� ������ ���� ����
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

