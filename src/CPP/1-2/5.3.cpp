#include <iostream>
#include "tdate1.hpp"

int main(){
    using namespace std;
    TDate1 today(1998,4,9), tomorrow(1998,4,10);
    cout<<"today is ";
    today.Print();
    cout<<"tomorrow is ";
    tomorrow.Print();
    return 0;
}
