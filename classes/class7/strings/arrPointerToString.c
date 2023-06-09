#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int calc_weight(char *s);
char* max_weight(char* s[], int n);
int main(){
   return 0;
}
/*
פונקציה שמקבלת מחרוזת ומחזירה א ת המשקל שלה
נחשב את המשקל כך ש
a = 1 , b = 2 .... 
ואז לחבר את כל הספרות
*/
int calc_weight(char *s){
   int weight = 0;
   for (int i = 0; s[i] != 0; i++){
       weight += s[i] - 'a' + 1;
   }
   return weight;
}
/*
פונקציה שמקבלת מערך של מחרוזות ואת האורך שלו ומחזירה מצביע שמשקלה מרבי
כל איבר במערך מצביע לי על מחרוזת 
*/
char* max_weight(char* s[], int n){
    char *s_max = s[0]; // pointer to the first string in array
    int maxW = calc_weight(s_max);
    for(int i = 1; i < n; i++){
        int weight = calc_weight(s[i]);
        if(weight > maxW){
            maxW = weight;
            s_max = s[i];
        }
    }
    return s_max;
    
    
    
}