#include <iostream>

namespace std{
	class TDate1{
		public:
		  void SetDate();
			TDate1(int y, int m, int d){
				SetDate(y,m,d);
				cout<<"Constructor called. \n";
			}
			~TDate1(){
				cout<<"Destructor called. \n";
			}
			void SetDate(int y, int m, int d){
				year=y;
				month=m;
				day=d;
			}
			int IsLeapYear(){
				return(year%4==0&&year%100!=0)||(year%400==0);
			}
			void Print(){
				cout<<year<<"."<<month<<"."<<day<<endl;
			}
		private:
			int year, month, day;
	};
}
