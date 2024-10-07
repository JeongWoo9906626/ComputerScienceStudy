#pragma once

/// <summary>
/// Strategy Pattern : ��ü�� ������ �����ϴ� ���� �˰����� ĸ��ȭ�Ͽ� **��Ÿ�ӿ� ������ �ٲ�** �� �ֵ��� ����� ������ ����
/// 
/// ���� :	1. ������ -> Ŭ���� �ܺο��� ���� & ��Ÿ�ӿ� �˰��� ��ü
///			2. OCP �ؼ� : ���� �߰��ÿ� ���� �ڵ� �ǵ帮�� ����
///			3. ���������� ��� : �˰����� �ٸ� Ŭ������ �и��Ͽ� ���������� ���� ����
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