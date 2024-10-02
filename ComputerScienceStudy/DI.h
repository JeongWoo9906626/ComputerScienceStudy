#pragma once
#include "Singleton.h"
// Singleton + Dependency Injection

/// <summary>
/// DI(Dependency Injection) : ������ ����
/// -> ���� ����� ���� ��⿡ ���� �������� �ֱ⺸�� DI�� ���������� ������ ����
///		==> '��Ŀ�ø� �ȴ�'
/// ���� :	1. ��� ���� ��ü ���� -> �׽�Ʈ ���� & ���̱׷��̼� �ϱ� ����
///			2. �߻�ȭ ���̾� ��� -> ������ ���� �ϰ� & ���� �߷� & ��� �� ���� ��Ȯ
/// ���� : ��Ÿ�� �г�Ƽ (Ŭ���� ���� => ���⼺ ����)
/// ��Ģ :	1. ���� ����� ���� ����� ��� �͵� �������� �ʾƾ� ��
///			2. ���� ���, ���� ��� �Ѵ� �߻�ȭ�� �����ؾ� ��
///			3. �߻�ȭ�� ���� ���׿� �������� ���ƾ� ��
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

