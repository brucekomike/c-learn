#include<stdio.h>

int get_value(char *target){
int feedBack;
printf("please input the value of %s:", target);
scanf("%d", &feedBack);
return feedBack;
}
int main(){
int a[4];
int vvv;
int middleWare;
int changing = 1;
a[0] = get_value("a");
a[1] = get_value("b");
a[2] = get_value("c");
a[3] = get_value("d");

while(changing){
  int changed =0;
  for(vvv=0; vvv<4; vvv++){
    //printf("%d", vvv);
    if (a[vvv-1]>a[vvv]){
    middleWare = a[vvv-1];
    a[vvv-1] = a[vvv];
    a[vvv]=middleWare;
    changed++;
    }
  }
  if(changed==0)changing=0;
}

for(vvv=0;vvv<4;vvv++)printf("%d ", a[vvv]);
printf("\n");
return 0;
}
