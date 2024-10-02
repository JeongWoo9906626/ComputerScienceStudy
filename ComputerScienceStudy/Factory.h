#pragma once
#include <memory>
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
	std::unique_ptr<Player> CreateShape(const std::string& PlayerType)
	{
		if (true == PlayerType._Equal("Tanker"))
		{
			return std::make_unique<Tanker>();;
		}
		if (true == PlayerType._Equal("Healer"))
		{
			return std::make_unique<Healer>();;
		}
		if (true == PlayerType._Equal("Archer"))
		{
			return std::make_unique<Archer>();;
		}
		return nullptr;
	}
};

