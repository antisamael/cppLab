#pragma once

#include <memory>
#include "../pubh/const.h"
#include "../callback/icallback.h"

using namespace std;

class OPT
{
public:
    OPT();
    virtual ~OPT();

private:
    void Initialize();
    void RegCallBack(View view, std::shared_ptr<ICallBack> cb);
};

