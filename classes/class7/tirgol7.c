#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// string.h libary uses 
int main(){
    char src[50]= "hello ", dest[50] = "world";
   // copy dest to src
   strcat(dest, src);
   printf("Final destination string : %s", dest); // hello world
   // comparing two strings
   char str1[15] ="abcdef";
   char str2[15]="ABCDEF";
   int ret = strcmp (str1, str2);
   if(ret < 0) {
      printf("str1 is less than str2");
   } else if(ret > 0) {
      printf("str2 is less than str1");
   } else {
      printf("str1 is equal to str2");
   }
   return 0;
}
// how many times the str2 is in str1
char upCase(char c){
    if (c >= 'a' && c<= 'z'){
        return c - 'a' +'A';
    }
    return c;
}
int isEqualSringN(char s1[], char s2[], int n){
    for(int i= 0 ; i< n; i++){
        if(upCase(s1[i] )!= upCase(s2[i])){
            return 0 ;
        }
    }
    return 1;
}
// יש לנו שתי מחרוזות בודק כמה פעמים המחרוזת השנייה נמצאת 
//  בראשונה. משתמש בשתי הפונקציות למעלה
 int countSubstring(char* s1 , char *s2){
    int len1 = strlen(s1), len2 = strlen(s2);
    int count = 0;
    for(int i = 0; i <= len2-len1; i++){
        if(isEqualSringN(s1, s2+i, len1)){
            count++;
        }
    }
    return count;
 }

 // פונקציה שמקבלת מחרוזתצ המצייגת מספר שלם ומחזירה את המספר הזה
//  int

int char2dig(char ch){
    return ch - '0';
}
int str2int(char *str){
    int sign = 1;
    int num;
    if(*str == '-'){
        sign = -1;
        str++;
    }
    num =0;
    while (*str != '\0'){
        num = num * 10 + char2dig(*str);
        str++;
    }
    return sign *num;
}