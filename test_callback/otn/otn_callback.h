#pragma once

#include "../callback/icallback.h"

class OtnCallBack : public ICallBack
{
public:
    OtnCallBack();
    virtual ~OtnCallBack();

private:
    void PrintCallBackFunc() override;
};
