#include "../devm/devm.h"
#include "otn.h"
#include "otn_callback.h"

OTN::OTN()
{
    Initialize();
}

OTN::~OTN()
{}

void OTN::Initialize()
{
    auto callBack = std::make_shared<OtnCallBack>();
    RegCallBack(VIEW_OTN, callBack);
}

void OTN::RegCallBack(View view, std::shared_ptr<ICallBack> cb)
{
    std::shared_ptr<Devm> devm = Devm::GetInstance();
    devm->RegCallBack(view, cb);
}
