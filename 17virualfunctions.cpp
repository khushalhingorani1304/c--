#include<iostream>
using namespace std;

class A{
public:

void f1(){
    cout<<"A f1 called";
}
virtual void f2()=0;
// {
//     cout<<"A f2 called";
// }
void f3(){
    cout<<"A f3 called";
}
virtual void f4(){
    cout<<"A f4 called";
}

};


class B : public A{

public:
void f1(){
    cout<<"B f1 called";
}
virtual void f2(){
    cout<<"B f2 called";
}
void f3(){
    cout<<"B f3 called";
}
virtual void f4(){
    cout<<"B f4 called";
}



};



int main()
{
    A *a2;
    B b1;

    // a1.f1();
    // a1.f2();
    // a1.f3();
    // a1.f4();

    a2 = &b1;

    a2->f1();
    a2->f2();
    a2->f3();
    a2->f4();
    
    return 0;
}
