#include<stdio.h>
int main(){
int score, grade;
printf("input score:");
scanf("%d", &score);
switch(grade = score/10){
case(0):printf("\nGrade - E");break;
case(1):printf("\nGrade - E");break;
case(2):printf("\nGrade - E");break;
case(3):printf("\nGrade - E");break;
case(4):printf("\nGrade - E");break;
case(5):printf("\nGrade - E");break;
case(6):printf("\nGrade - D");break;
case(7):printf("\nGrade - C");break;
case(8):printf("\nGrade - B");break;
case(9):printf("\nGrade - A");break;
default:printf("\nGrade - A");break;
}
printf("\n");
}
