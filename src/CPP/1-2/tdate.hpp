#include <iostream>

namespace std{
	class TDate{
		public:
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