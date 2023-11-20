#include <iostream>


using namespace std;
class DATE{
    public:
        DATE(){
            month=date=year=0;
            cout<<"Default called. \n";
        }
        DATE(int m,int d,int y){
            month=m;
            year=y;
            date=d;
            cout<<"Constructor called\n";
        }
        ~DATE(){
            cout<<"Destructor caled. \n";
        }
        void print(){
            cout<<"Month="<<month<<",Day="<<date<<
            ",year="<<year<<endl;
        }
    private:
        int month, date, year;
};

int main(){
    DATE dates[5]={DATE(7,22,1998),DATE(7,23,1998),DATE(11,20,2003)};
    dates[3]=DATE(7,25,1998);
    dates[4]=DATE(1,7,2003);
    for(int i(0);i<5;i++)dates[i].print();
    return 0;
}