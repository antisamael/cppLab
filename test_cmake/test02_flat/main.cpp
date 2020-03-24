#include "singleton.h"

int main()
{
    Singleton* single = Singleton::GetInstance();
    single->Print();
    return 0;
}