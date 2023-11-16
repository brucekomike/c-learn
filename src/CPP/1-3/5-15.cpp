# include <iostream>
# include <string.h>

using namespace std;
class A{
    public:
        A(const char *st){
            strcpy(string, st);
            cout<<"constructor called for"<<string<<endl;
        }
        ~A(){
            cout<<"Destructor called for"<<string<<endl;
        }
    private:
        char string[50];
};

void fun(){
    A FunObject("FunObject");
    static A staticObject("StaticObject");
    cout<<"In fun()."<<endl;    
}
A GlobalObject("GlobalObject");

int main(){
    A MainObject("MainObject");
    cout<<"In main(). befor called fun\n";
    fun();
    cout<<"In main(). after called fun\n";
    return 0;
}