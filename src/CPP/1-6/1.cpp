#include <iostream>
using namespace std;
class B1{
    public:
    B1(){
        cout<<"B1"<<endl;
    }
};
class B2{
    public:
    B2(){
        cout<<"B2"<<endl;
    }
};
class B3{
    public:
    B3(){
        cout<<"B3"<<endl;
    }
};



class A:public B2,public B1{
    public:
        A(){
            cout<<"A"<<endl;
        }
    private:
        B3 bb;
};

int main(){
    A aa;
    B1 b1;
    B2 b2;
    B3 b3;
    cout<<sizeof(aa)<<endl;
    cout<<sizeof(b1)<<endl;
    cout<<sizeof(b2)<<endl;
    cout<<sizeof(b3)<<endl;
    return 0;
}
