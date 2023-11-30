#include <iostream>
using namespace std;

class Date{
    public:
        Date(int year,int month,int day){
            this->year=year;
            this->month=month;
            this->day=day;
        }
        void print(){
            cout<<year<<"-"<<month<<"-"<<day<<endl;
        }
        void Set_date(int year,int month,int day){
            this->year=year;
            this->month=month;
            this->day=day;
        }
    private:
        int year;
        int month;
        int day;
};

class Time{
    public:
        Time(int hour,int minute,int second){
            this->hour=hour;
            this->minute=minute;
            this->second=second;
        }
        void print(){
            cout<<hour<<":"<<minute<<":"<<second<<endl;
        }
        void Set_time(int hour,int minute,int second){
            this->hour=hour;
            this->minute=minute;
            this->second=second;
        }
    private:
        int hour;
        int minute;
        int second;
};

class DateTime:public Date,public Time{
    public:
        DateTime(int year,int month,int day,int hour,int minute,int second):Date(year,month,day),Time(hour,minute,second){
            this->year=year;
            this->month=month;
            this->day=day;
            this->hour=hour;
            this->minute=minute;
            this->second=second;
        }
        void print(){
            cout<<year<<"-"<<month<<"-"<<day<<" "<<hour<<":"<<minute<<":"<<second<<endl;
        }
        void Set_date_time(int year,int month,int day,int hour,int minute,int second){
            this->year=year;
            this->month=month;
            this->day=day;
            this->hour=hour;
            this->minute=minute;
            this->second=second;
        }
    private:
        int year;
        int month;
        int day;
        int hour;
        int minute;
        int second;
};

int main(){
    DateTime dt(2019,10,1,12,30,30);
    dt.print();
    dt.Set_date_time(2019,10,2,12,30,30);
    dt.print();
    dt.Set_date(2019,10,3);
    dt.print();
    dt.Set_time(12,30,30);
    dt.print();
    return 0;
}