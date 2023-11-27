#include<iostream>
//# include <iostream.h>
using namespace std;
class A{
    public:
        void f(int i){
            cout<<i<<endl;
        }
        void g(){
            cout<<"g\n";
        }

};
class B:A{
    public:
        void h(){
            cout<<"h\n";
        }
        using A::f;
        using A::g;
};

int main(){
    B d1;
    d1.f(6);
    d1.g();
    d1.h();
}