#include<iostream>
using namespace std;
class Operate
{
    public:
    void fun();
};
void Operate::fun()
{
    cout<<"It is the member function of the class.";
}
int main()
{
    Operate op;
    op.fun();
    return 0;
}