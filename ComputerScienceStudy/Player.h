#pragma once
#include <iostream>
#include <string>

/// <summary>
/// 추상 클래스 및 상속
/// </summary>

class Player 
{
public:
    virtual void Test() = 0;
};

class Tanker : public Player 
{
public:
    void Test() override 
    {
        std::cout << "This is Tanker" << std::endl;
    }
};

class Healer : public Player 
{
public:
    void Test() override 
    {
        std::cout << "This is Healer" << std::endl;
    }
};

class Archer : public Player 
{
public:
    void Test() override 
    {
        std::cout << "This is Archer" << std::endl;
    }
};

