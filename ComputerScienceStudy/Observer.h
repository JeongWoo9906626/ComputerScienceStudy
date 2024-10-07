#pragma once
#include <vector>
#include <memory>
#include <algorithm>

/// <summary>
/// Observer Pattern : � ��ü�� ���°� ���ϰ� �Ǹ�, ���� ��ü�� �� ���� �������鿡�� ���ߴٴ� ���� �˸��� ������ ����
/// ���� :	1. ������ ����
///			2. Ȯ�强
///			3. �ڵ� ����
/// 
/// ���� :	1. ���� ���� (��� ���������� ������ �ϱ� ����)
///			2. �˸� ���� (�˸� ������ ��Ȯ���� ����)
/// </summary>

class Observer
{
public:
	virtual void update(int state) = 0;
};

class Subject
{
private:
	std::vector<std::shared_ptr<Observer>> Observers;
	int state;

public:
	void AddObserver(std::shared_ptr<Observer> _Observer)
	{
		Observers.emplace_back(_Observer);
	}

	void RemoveObserver(std::shared_ptr<Observer> _Observer)
	{
		Observers.erase(std::remove(Observers.begin(), Observers.end(), _Observer), Observers.end());
	}

	void SetState(int State)
	{
		state = State;
		Notify();
	}

	void Notify()
	{
		for (const std::shared_ptr<Observer>& _Observer : Observers)
		{
			_Observer->update(state);
		}
	}
};