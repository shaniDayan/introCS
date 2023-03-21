#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 4
/***************************
כשאנחנו מקבלים כתובת מהזיכרון אנחנו נקבל את המקום הראשון שבו המשתנה נמצא
& אפשר להשיג אותו בעזרת עם 
אי אפשר להגדיר את המקום של המשתנה רק לקבל אותו וכדי לאכסן אותו צריך טיפוס מתאים אחר 
* הטיפוס זה כל טיפוס שקיים ומוסיפים 
!!!לא עושים המרות בין משתנים של פוינטרים

**********************************
**********************************
&  שלב ראשון זה להוציא את הכתובת בעזרת 
* שלב שני זה לעשות פוינטר בעזזרת כוכבית
שלב שלישי זה להשוואות את המשתנה שאנחנו רוצים לשנות בעזרת הכוכבית
int a = 3;
int *p = &a;
y = p;
printf("%d ", y); y is 3!!
NULL אם עדין אין לנו ערך לפוינטר צריך להתחל אותו ל
int *p = NULL
**********************************/
void swap (int* px, int* py);
//main מקבלת מכנה ומונה ומצמצם את השבר ומכניסה את הערכים לפוינטרים החדשים כדי לקבל אותם ב
void reduce (int nom, int den, int* new_nom, int* den_den);
int gcd(int x, int y);
void aritmetica();
void arr_pointer();
void init_arr(int *arr);
int main(){
    /*****************************************************
    int a = 3;
    int *p;
    
    p = &a; // pointer for a 
    // & to get the addres for a and * for saving the addres
    // int *name; is just for int type if we want double we will save
    // the pointer by double *name2
    
    int x = 5, y = 7;
    printf("before the swap\n");
    printf("x is %d y is %d\n", x, y);
    // call by adress
    swap(&x,&y);
    printf("after the swap\n");
    printf("x is %d y is %d\n", x, y);
    printf("to print pointer %p", &x);
    return 0;
    *****************************************************
    int nom = 3, den = 5;
    int* new_nom = NULL;
    int* den_den = NULL;
    reduce (nom, den, new_nom, den_den);
    *****************************************************/
    int grades[N] = {100, 94, 29, 40};
    *grades = 95; // the same as grades[0]
    init_arr(grades);
    
}

void swap (int* px, int* py){
    int temp = *px;
    *px = *py;
    *py = temp;
}
void reduce (int nom, int den, int* new_nom, int* new_den){
    int g = gcd(nom, den);
    *new_nom = nom / g;
    *new_den = den / g;
}
int gcd(int x, int y){ // its not real
    return 1;
}
void aritmetica(){
    /********************************
     * ניתן לקדם והלחזיר מצביע עם הפעולות
     * ++
     * --
     * ניתן לחסר שני מבצעים זה מזה בתנאי שהם מאותו סוג
     * אז אפשר לקדם מציע במערך
     * אז אם אני שולחת את הכותבת של המערך אני יכולה לעבור לאיבר הבא שלו בעזרת פלוס  אחד 
     *אפשר להשתמש גם ב
     * sizeof
     * כדי לגלות מה הגודל
     * ובמערך מובטח לי שהערכים אחד אחרי השני בזיכרון אז אם יש לי את הכתובת של תחילת המערך 
     * וסוף המערך ונחסיר ביניהם אז  נוכל לגדל את הגודל של המערך 
     * ******************************/
     
}
void arr_pointer(){
    double arr[3];
    double *p = arr; // will let me the adress of arr[1]
    
}
void init_arr(int *arr){ 
    // the same as : int arr[]
    printf("enter numbers for arr: \n");
    for (int i = 0; i < N; i++){
        scanf("%d", arr + i); /// the same as; arr[i]
    }
}
    
