#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
// bubble sort
void swap (int* pa, int* pb);
bool bubble(int arr[], int n);
void bubble_sort(int arr[], int n);
int main(){
   int arr[5] = {7, 9, 2, 5, 3};
   bubble_sort(arr, 5);
   for (int i = 0; i < 5; i++){
       printf("%d ", arr[i]);
   }
   return 0;
}
void swap (int* pa, int* pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

bool bubble(int arr[], int n){
    bool is_sorted = true;
    for (int i = 1; i < n; i++){
        if(arr[i - 1] > arr[i]){
            is_sorted = false;
            swap(arr + i - 1, arr + i);
        }
    }
}
void bubble_sort(int arr[], int n){
    for (int len = n; len > 1; len--){
        if (bubble(arr, len)){
            break;
        }
    }
}