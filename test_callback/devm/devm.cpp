#include "devm.h"

using namespace std;

Devm::Devm()
{}

Devm::~Devm()
{}

std::shared_ptr<Devm> g_devm;
std::shared_ptr<Devm> Devm::GetInstance()
{
    if (g_devm == nullptr) {
        g_devm = std::make_shared<Devm>();
    }
    return g_devm;
}

void Devm::RegCallBack(const View view, std::shared_ptr<ICallBack> cb)
{
    // TODO: ������Կ����Ż�һ�£�ʹ�� unique_ptr���������ö��Ƕ���
    m_callbackFuncMap.insert(pair<View, std::shared_ptr<ICallBack>>(view, cb));
}

void Devm::TestCallBack(const View view) const
{
    auto iter = m_callbackFuncMap.begin();
    for (; iter != m_callbackFuncMap.end(); ++iter)
    {
        if (iter->first == view && iter->second != nullptr)
        {
            std::shared_ptr<ICallBack> cb = iter->second;
            cb->PrintCallBackFunc();
        }
    }
}
