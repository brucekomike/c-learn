#include <stdio.h>

int main(){
int heads;
int feet;
int sum_of_usagi;
int sum_of_kun;
int flagSuccess = 0;
printf("please input the value of heads:");
scanf("%d", &heads);
printf("please input the value of feet:");
scanf("%d", &feet);
int i;
for(i = 0; i <= heads; i++){
sum_of_usagi = i;
sum_of_kun = heads - i;
if ((sum_of_usagi * 4 + sum_of_kun*2)  == feet) {
  flagSuccess = 1;
  break;
}
}

if(!flagSuccess){printf("false\n");return 0 ;}
printf("usagi: %d, kun: %d\n", sum_of_usagi, sum_of_kun);

}
