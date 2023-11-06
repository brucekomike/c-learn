#include<stdio.h>
int main(){
int a=1,b=2,c=3;
int i = ((a=3)&&(b=0)&&(c=5));
printf("%d %d %d %d", i, a, b, c);
return 0;
}
