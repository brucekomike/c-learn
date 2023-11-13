#include <iostream>
#include "tdate.hpp"

int main(){
    using namespace std;
    TDate date1, date2;
    date1.SetDate(1996, 5, 4);
    date2.SetDate(1998,4,9);
    int leap=date1.IsLeapYear();
    cout<<leap<<endl;
    date1.Print();
    date2.Print();
}
