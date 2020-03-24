#pragma once

#include <iostream>

using namespace std;

class ICallBack
{
public:
    ICallBack(){};
    virtual ~ICallBack(){};
    virtual void PrintCallBackFunc() = 0;
};
