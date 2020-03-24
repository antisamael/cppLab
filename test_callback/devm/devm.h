#pragma once

#include <map>
#include <memory>
#include "../pubh/const.h"
#include "../pubh/types.h"
#include "../callback/icallback.h"

using namespace std;

class Devm
{
public:
    Devm();
    virtual ~Devm();
    static std::shared_ptr<Devm> GetInstance();
    void RegCallBack(const View view, std::shared_ptr<ICallBack> cb);
    void TestCallBack(const View view) const;

private:
    map<View, std::shared_ptr<ICallBack>> m_callbackFuncMap{};
};
