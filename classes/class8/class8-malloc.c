#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void init_arr(int *arr, int name_student);
int main(){
    // איך ליצור מערך עם זיכרון דינמי כדי לא לקבוע את גודל המערך
    int name_student;
    scanf("%d", &name_student);
    int *arr = malloc(name_student*sizeof(int));
    if(arr == NULL)// לוודא שההקצאה הצליחה
    {
        return 1;
    }
    init_arr(arr, name_student);
    // void*; the pointer of malloc is void* so we don't know the type 
    // if i want to get acsses to the pointer we need to change it to the type 
    // we want
    free(arr); // to free from memories
}
void init_arr(int *arr, int name_student){
    printf("enter numbers for arr: \n");
    for (int i = 0; i < name_student; i++){
        scanf("%d", arr + i); /// the same as; arr[i]
    }
}
