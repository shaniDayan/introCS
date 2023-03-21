#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void makom(int n){
    /*סיבוכיות מקום 
    i מקצים מקום בהתאם ל
    n^2 אז
    i/ 2 כי מתחילים מ0 עד 
    והחצי הוא פשוט קבוע
    סופרים את כמות הבתים שהמאלוק מקצה 
    */
    for(int i = 0; i<n/2;i++){
        int *k = (int*)malloc(sizeof(int)*i);
    }
    /* n/2   אם יש את הפרי אז הסיבוכיות מקום זה
    n אז הסיבוכיות מקום היא 
    */
    for(int i = 0; i<n/2;i++){
        int *k = (int*)malloc(sizeof(int)*i);
        free(k);
    }
    /*
    n^3 נשים לב שהסיבוכיות מקום במקרה הזה היא 
    i נשתמש בנוסחא הכללית של 
    ∑ i^k = Ɵ(n^(k+1))
    */
    for(int i = 0; i<n/2;i++){
        int *k = (int*)malloc(sizeof(int)*i);
        int *k = (int*)malloc(sizeof(int)*i*i);
        free(k);
    }
    /*
    n^3 נשים לב שהסיבוכיות מקום במקרה הזה היא 
    ∑ i כי הסיגמה הפנימית זה
    i^2 שזה 
    לפי הנוסחאות
    n/2 הסיגמה בחוץ רצה עד ל
    אז השילוב שלהם  ביחד
    ∑ i^2 = Ɵ(n^3)
    */
     for(int i = 0; i<n/2;i++){
        int *k = (int*)malloc(sizeof(int)*i);
        for (int j=0; j< i; i++){
            int *g = (int*)malloc(sizeof(int)*i);
        }
    }
   
}
int main(){

    return 0;
}