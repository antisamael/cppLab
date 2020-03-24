#include <iostream>
#include "singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton::Singleton()
{
}

Singleton::~Singleton()
{
    delete instance;
}

Singleton* Singleton::GetInstance()
{
    if (instance == nullptr)
    {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::Print()
{
    std::cout << "!!! Singleton back !!!" << std::endl;
}