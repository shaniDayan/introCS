#include <stdio.h>
/*
חיפוש בנארי במערך ממוין 
לא עובד על מערך לא ממוין 
חיפוש בנארי יעיל פלוס פלוס 
*/
int binary_search(int arr[], int n, int x);
int main(){
    return 0;
}
// הסבר טוב במצגת עם אנימציה
int binary_search(int arr[], int n, int x){
    int low = 0, high = n - 1;
    while (low <= high){
        int mid = (low +high) / 2;
        if(arr[mid] == x){
            return mid; // the index where x exsit
        }
        else if (arr[mid] < x){
            low = mid + 1; 
        }
        else{
            high = mid - 1;
        }
    }
    return -1; // we did not find x in arr 
}
