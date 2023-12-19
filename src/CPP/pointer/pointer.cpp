#include <iostream>

using namespace std;
int main(){
  //define the a and b
  char a[20],b[]="abcdefg";
  //define a pointer to b
  char *p=b;
  //use the value and change the geting the upper case letters
  for(int i=0;i<5;i++){
    a[i]=*p++-32;
  }
  //assign a end of text to the string
  a[5]='\0';
  //output the string
  cout<<a<<endl;

  return 0;
}
