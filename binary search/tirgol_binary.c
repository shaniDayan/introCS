#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void midterm_quiz_q2(char arr[], int n);

int main() {
   
}
// binary search
int binary (int arr [], int n, int x){
    int l = 0, r = n - 1, mid;
    
    while (l <= r){
        mid = (l +r) / 2;
        if(arr[mid] == x){
            return mid; // the index where x exsit
        }
        else if (arr[mid] < x){
            l = mid + 1; 
        }
        else{
            r = mid - 1;
        }
    }
    return -1; // we did not find x in arr 
}
// מערך עולה ויורד צריך למצוא את האינדקס בו קורה השינוי 
int binary1 (int arr[], int n){
   int l = 0, r = n - 1, mid;
    
    while (l <= r){
        mid = (l +r) / 2;
        if (mid == 0 || mid == n -1 ){
            return mid;
        }
        if(arr[mid] < arr[mid + 1] && arr[mid] < arr[mid -1]){
            return mid; 
        }
        else if (arr[mid] < arr [ mid + 1]){
            r = mid - 1; 
        }
        else{
            l = mid + 1;
        }
    }
    return -1;  
}
/*
 שני מערכים ממוינים בסדר עולה איי קצר באורך באחד מבי 
 איי מכילה את האברים של בי פרט לאיבר אחד אז נשתמש בחיפוש בינארי
 נחפש איפה האיבר שונה נמשיך כל עוד האברים שונים אחד מהשני
 */
int binary2 (int a[],int b[], int n){
   int l = 0, r = n - 1, mid;
    
    while (l < r){ // אנחנו לא צריכים להשוואות כי אז יש מצב שיצא מחוץ למערך אחד מהם הרי יותר גדול מהשני באחד
        mid = (l +r) / 2;
        if(a[mid] == b[mid]){
            l = mid + 1; 
        }
        else{
            r =  mid;
        }
    }
    return b[mid]; 
}
/*
אותה שאלה כמו הקודמת רק דרך יותר פשוטה ומובנת
*/
int binary3 (int a[],int b[], int n){
   int l = 0, r = n - 1, mid;
    
    while (l <= r){ // אנחנו לא צריכים להשוואות כי אז יש מצב שיצא מחוץ למערך אחד מהם הרי יותר גדול מהשני באחד
        mid = (l +r) / 2;
        if(mid == 0){
            return a[mid] == b[mid] ? b[mid +1] : b[mid];
        }
        if(a[mid] == b[mid]){
            l = mid + 1; 
        }
        else if(a[mid - 1] == b[mid -1 ]){
            return b[mid];
        }
        else{
            r =  mid - 1;
        }
    }
    return b[mid];
}
/*
מערך עולה ויורד לסירוגין 
כל המקומות הזוגיים עולים וכך גם המקומות האי זוגיים כמו
1 7 3 11 7 23 9 
כל פעם נחשב את הסכום ונעשה איתו את החיפוש הבינארי כי הסכומים עולים ביחד עם המערך 

*/
int binary4 (int arr [], int n, int x){
    int l = 0, r = n - 2, mid, sum;
    // n - 2 cuz we are doing of two number and the last number cant be
    // added to another number
    while (l <= r){
        mid = (l +r) / 2;
        sum = arr[mid] + arr[mid +1];
        if(sum == x){
            return mid; 
        }
        else if (sum < x){
            l = mid + 1; 
        }
        else{
            r = mid - 1;
        }
    }
    return -1; // we didnt found the sum in the array 
}
/*
שאלה ממבחן מערך של שברים שעולים 
אנחנו מחפשים את האיבר הכי קרוב בערך לאיקס שקיבלנו
נבדוק את השלושה הערכים ואת ההפרשיים שלהם
mid - 1, mid , mid +1
*/
int binary_test1 (double arr[], int n, int x){
    int l = 0, r = n - 1, mid;
    while (l <= r){
        mid = (l +r) / 2;
        if(dif(arr[mid], arr[mid -1]) >  dif(arr[mid], arr[mid+1])){
            return mid; // the index where x exsit
        }
        else if (arr[mid] < x){
            l = mid + 1; 
        }
        else{
            r = mid - 1;
        }
    }
    return -1; // we did not find x in arr 
}
// פונקצית עזר שנותן לנו את המרחק בין שני מספרים בערך מוחלט
double dif (double a, double b){
    if (a - b < 0){
        return (b - a);
    }
    return (a - b);
}
/*
מקבלים מערך של זוגות עוקבים צריך למצוא איזה אינדקס נמצא לא מקום עוקבי
*/
int binary_test3 (int arr [], int n, int x){
    int l = 0, r = n - 1, mid;
    
    while (l <= r){
        mid = (l +r) / 2;
        if(mid == 0 || mid == n - 1 || arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]){
            return mid; 
        }
        else if (arr[mid] = arr[mid + 1]){
            if (mid % 2 == 0 ){
                r = mid -1;
            }
            else {
                l = mid + 1; 
            }
        }
        else{
            if (mid % 2 != 0 ){
                r = mid -1;
            }
            else {
                l = mid + 1; 
            }
        }
    }
    /*
     // 22 33 7 22 11 55 22 
     mid 6
     arr[6] == arr[5] // ==2
     and 6 % 2 == 0 
     so r is 7
     now the arr- 
     // 22 33 7 22 1
     mid is  3
     arr[3] == arr [4] // ==3
     so r is 4
     now the arr 
     7 22 1 
     ...........
    */
   
    return -1; // we did not find x in arr 
}
    
    
