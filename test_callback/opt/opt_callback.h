#pragma once

#include "../callback/icallback.h"

class OptCallBack : public ICallBack
{
public:
    OptCallBack();
    virtual ~OptCallBack();

private:
    void PrintCallBackFunc() override;
};
