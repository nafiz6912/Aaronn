#include<iostream>
using namespace std;
class Counter{
    private:
    static int count;
    public:
    void increment(){
        count++;
    }
    static void showCount(){
        cout<<"Count:"<<count<<endl;
    }
};
int Counter::count=0;
int main()
{
    Counter obj1,obj2;
    obj1.increment();
    obj2.increment();
    Counter::showCount();
    return 0;
}