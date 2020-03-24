#include <iostream>
#include <map>
#include <memory>
#include "./pubh/const.h"
#include "./otn/otn.h"
#include "./opt/opt.h"
#include "./devm/devm.h"

using namespace std;

int main()
{
    OTN otn;
    OPT opt;
    std::shared_ptr<Devm> devm = Devm::GetInstance();
    devm->TestCallBack(VIEW_OPT);
    devm->TestCallBack(VIEW_OTN);

    return 0;
}