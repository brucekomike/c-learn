#include<stdio.h>

int xfunc(int i){
int the_value = 0;
if(i<0) the_value=-1;
else if(i==0) the_value=0;
else the_value=1;
return the_value;
}


int main(){
int o;
scanf("%d", &o);
printf("%d", xfunc(o));
return 0;
}
