/*
מיון של מערך מבולגן שאנחנו רוצים שהם יהיו מסודרים לפי גודל
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// max sort

void swap (int* pa, int* pb);
int max_index(int arr[], int n);
void max_sort(int arr[], int n);
// דוגמא שתהיה לנו 
int main(){
   int arr[5] = {7, 9, 2, 5, 3};
   max_sort(arr, 5);
   for (int i = 0; i < 5; i++){
       printf("%d ", arr[i]);
   }
   return 0;
}
// מחליפה בין המקומות
void swap (int* pa, int* pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}
// מוצאת את האינדקס של המקסימלי 
int max_index(int arr[], int n){
    int max = 0;
    for(int i = 1; i < n ;i++){
        if(arr[i] > arr[max]){
            max = i;
        }
    }
    return max;
}
/*
ממיינת את מהערך בעזרת מיון של מקסימום
כל פעם אנחנו מוצאים את האיבר המקסימלי ושמים אותו בסוף המערך
אנחנו נשלח לפונקציה שמוצאת את האינדקס של המקסימלי רק את החלק של המערך של ממיון עדין 
כדי שלא כל פעם נחזיר אותו אינדקס
*/
void max_sort(int arr[], int n){
    for (int len = n; len > 1; len--){
        int idx = max_index(arr, len);
        swap (arr + idx, arr + len - 1);
    }
}