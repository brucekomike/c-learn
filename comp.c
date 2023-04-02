#include<stdio.h>

int main(){
int a[2];
int i;
for(i = 0; i < 2; i++){
printf("input the %d int", i);
scanf("%d", &a[i]);
}
for(i = 0; i < 2; i++){
printf("%d", a[i]);
}
}
