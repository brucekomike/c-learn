#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function to print the given number in words
char convert(char *num) {
   char kanji[20];
   int len = strlen(num);
   // cases
   if (len == 0) {
      fprintf(stderr, "empty string");
      return "error";
   }
   if (len > 4) {
      fprintf(stderr, "Length more than 4 is not supported");
      return "error";
   }
   // the first string wont be used.
   char *single_digit[] = { "零", "壹", "贰", "叁", "肆","伍", "陆", "柒", "捌", "玖"};
   // The first string is not used, it is to make
   // array indexing simple
      char *tens_place[] = {"", "拾", "壹拾壹", "壹拾贰", "壹拾叁", "壹拾肆", "壹拾伍", "壹拾陆", "壹拾柒", "壹拾捌", "壹拾玖"};
   // The first two string are not used, they are to make
   // array indexing simple
      char *tens_multiple[] = {"", "", "贰拾", "叁拾", "肆拾", "伍拾", "陆拾", "柒拾", "捌拾", "玖拾"};
      char *tens_power[] = {"佰", "乾"};
   // Used for debugging purpose only
   //printf("%s: ", num);

   // For single digit number
   if (len == 1) {
      //printf("%s", single_digit[*num - '0']);
      strncat(kanji, single_digit[*num - '0'], 1);
      return kanji;
   }
   // Iterate while num is not '\0'
   while (*num != '\0') {
      // Code path for first 2 digits
      if (len >= 3) {
         if (*num -'0' != 0) {
            //printf("%s", single_digit[*num - '0']);
            //printf("%s", tens_power[len-3]); // here len can be 3 or 4
            strncat(kanji,  single_digit[*num - '0'], 1);
            strncat(kanji,  tens_power[len-3], 1);
         }
         --len;
      }
      // Code path for last 2 digits
      else {
         // Need to explicitly handle 10-19. Sum of the two digits is
         //used as index of "tens_place" array of strings
         if (*num == '1') {
            int sum = *num - '0' + *(num + 1)- '0';
            //printf("%s", tens_place[sum]);
            strncat(kanji, tens_place[sum], 1);
            return kanji;
         }
         // Need to explicitely handle 20
         else if (*num == '2' && *(num + 1) == '0') {
            //printf("twenty");
            kanji = "twenty";
            return kanji;
         }
         // Rest of the two digit numbers i.e., 21 to 99
         else {
            int i = *num - '0';
            //printf("%s", i? tens_multiple[i]: "");
            strncat(kanji, (i? tens_multiple[i]: ""), 1);
            ++num;
            if (*num != '0')
               //printf("%s", single_digit[*num - '0']);
               strncat(kanji, single_digit[*num - '0'], 1);
         }
      }
      ++num;
   }
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
const int coin_sum = 100;
int coin_corrent;
int coin_1,coin_2,coin_3;
int fk,mk,uk;
 for(mk = 0; mk<=20;mk++){
  coin_1 = male_kun(mk);
   for(fk = 0;fk<=33;fk++){
    coin_2 = female_kun(fk);
    for(uk=0; uk<=300 && (uk%3==0); uk++){
     coin_3 = unknow_kun(uk);
     if(((coin_1+coin_2+coin_3) == coin_sum )&&((mk+fk+uk)== 100))printf("\
雞翁%s，値錢%s；雞母%s，値錢%s；雞鶵%s，値錢%s。\n\
", convert(mk),convert(coin_1),
   convert(fk),convert(coin_2),
   convert(uk),convert(coin_3)
);
    }
   }
 }
   return 0;
}
