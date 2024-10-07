#pragma once
#include <vector>
#include <memory>
#include <algorithm>

/// <summary>
/// Observer Pattern : 어떤 객체의 상태가 변하게 되면, 변한 객체가 그 밑의 옵저버들에게 변했다는 것을 알리는 디자인 패턴
/// 장점 :	1. 느슨한 결합
///			2. 확장성
///			3. 자동 통지
/// 
/// 단점 :	1. 성능 문제 (모든 옵저버에게 통지를 하기 때문)
///			2. 알림 순서 (알림 순서가 명확하지 않음)
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