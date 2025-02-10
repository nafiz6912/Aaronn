#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
    }
int add(int a,int b,int c){
    return a+b+c;
    }    
float add(float a,float b){
    return a+b;
}
int main(){
    int x=5,y=7,z=9;
    float m=3.5,n=2.5;

    cout <<"sum of "<< x <<"and" <<y<<"is : "<< add(x,y)<< endl;
    }