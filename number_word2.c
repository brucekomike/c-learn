#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function to print the given number in words
void convert(int num, char kk[200]) {
   //printf("%d", num);
   int kou=0,jyu=0,hyaku=0,sen=0;
   int hyaku_zero=0,sen_zero=0;
   // cases
   if (num < 0) {
      fprintf(stderr, "negative number");
      return;
   }
   if (num > 9999) {
      fprintf(stderr, "Length more than 4 is not supported");
      return;
   }
   sen = num/1000;
   num-=sen*1000;
   hyaku = num/100;
   num-=hyaku*100;
   jyu=num/10;
   num-=jyu*10;
   kou=num;
   if(sen&&(jyu||kou)&&!hyaku) sen_zero=1;
   else if(hyaku&&kou&&!jyu) hyaku_zero=1;
   char *single_digit[] = { "零", "壹", "贰", "叁", "肆","伍", "陆", "柒", "捌", "玖"};
   char *tanyi[] = {"拾", "佰", "乾"};
   if(sen){strncat(kk,single_digit[sen],5);strncat(kk,tanyi[2],5);}
   if(sen_zero)strncat(kk,single_digit[0],5);
   if(hyaku){strncat(kk,single_digit[num/100],5);strncat(kk,tanyi[1],5);}
   if(hyaku_zero)strncat(kk,single_digit[hyaku],5);
   if(jyu){strncat(kk,single_digit[jyu],5);strncat(kk,tanyi[0],5);}
   if(kou||!jyu)strncat(kk,single_digit[kou],5);
}

int male_kun(int num){
return num*5;
}
int female_kun(int num){
return num*3;
}
int unknow_kun(int num){
return num/3;
}
int main() {
//test codes
/*char test_string[200];
convert(25, test_string);
printf("%s", test_string);*/
const int coin_sum = 100;
int coin_left;
int coin_1,coin_2,coin_3;
int fk,mk,uk;
for(mk = 0; mk<=20;mk++){
  coin_1 = male_kun(mk);
  //printf("%d ",mk);
  int coin_left_1 = coin_sum - coin_1;
  fk=0;
    for(fk = 0;fk<=(coin_left_1/3);fk++){
      coin_left = 100 - coin_1;
      coin_2 = female_kun(fk);
      coin_left-=coin_2;
      uk = 3*coin_left;
      coin_3 = unknow_kun(uk);
      //printf("%d %d %d\n", mk, fk, uk);
      if(((coin_1+coin_2+coin_3) == coin_sum )&&((mk+fk+uk)== 100)){
        char mk_s[200]="", fk_s[200]="", uk_s[200]="", co_1[200]="", co_2[200]="", co_3[200]="";
        convert(mk, mk_s);
        convert(coin_1, co_1);
        convert(fk, fk_s);
        convert(coin_2, co_2);
        convert(uk, uk_s);
        convert(coin_3, co_3);
        printf("\
雞翁%s，値錢%s；雞母%s，値錢%s；雞鶵%s，値錢%s。\n\
", mk_s, co_1, fk_s, co_2, uk_s, co_3);
     }
    }
   }
   return 0;
}
