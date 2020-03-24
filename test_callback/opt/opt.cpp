#include "../devm/devm.h"
#include "opt.h"
#include "opt_callback.h"

OPT::OPT()
{
    Initialize();
}

OPT::~OPT()
{}

void OPT::Initialize()
{
    auto callBack = std::make_shared<OptCallBack>();
    RegCallBack(VIEW_OPT, callBack);
}

void OPT::RegCallBack(View view, std::shared_ptr<ICallBack> cb)
{
    std::shared_ptr<Devm> devm = Devm::GetInstance();
    devm->RegCallBack(view, cb);
}
