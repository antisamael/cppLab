#include <iostream>
using namespace std;

template <class... T>
void f(T... args)
{
    cout << sizeof...(args) << endl; //打印变参的个数
}

int main()
{
    f();
    f(1, 2);
    f(1, 2.5, "");
    return 0;
}