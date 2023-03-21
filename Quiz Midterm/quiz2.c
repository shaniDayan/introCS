#include <stdio.h>
#include <math.h>
#define M 4
#define N 3
//  בוחן אמצע תשפב מועד ב פתרון שלי
// שאלה 1
int midterm_quiz_q1 (int num);
// שאלה 2
void midterm_quiz_q2 (char arr [], int n);
// שאלה 2 פונקצית עזר
int minLetter (char arr[] ,int start, int n);
// שאלה 3 
void midterm_quiz_q3(int grades [M][N]);
// מחשבת את ההמוצע של כל תלמיד במערך חדש של ממוצעים
void avgArr(int grades [M][N], int arr[M]);
// בודק מה הערך המקסימלי במערך חד ממדי
int maxInArr(int avg[M]);

int isTheBigger(int grades [M][N], int index);
int main () {
    // printf("enter number for q1 to check if its a perfect number: \n");
    // int num;
    // scanf("%d", &num);
    // printf("is %d is perfect number %d", num , midterm_quiz_q1(num));
    // char arr[5] = {'h', 'e', 'z', 'l', 'o'};
    // midterm_quiz_q2(arr, 5);
    // כתבתי ככה כדי שיהיה אפשר לראות את המערך יותר ויזואלי
    int grades [M][N] = {{100, 90, 20},
                         {95, 95, 95},
                         {90, 80, 100},
                         {55, 100, 90}};
    for (int i=0 ; i< M; i++){
        for (int j=0; j<N; j++){
            printf("%d ", grades[i][j]);
        }
        printf("\n");
    }
    midterm_quiz_q3(grades);
    return 0;
    
}
int midterm_quiz_q1 (int num){
    int sum = 0 , i = 1;
    while (i < num){
        if (num % i == 0){
            sum = sum + i;
        }
        i++;
    }
    if (num == sum){
        return 1;
    }
    else
        return 0;
}
void midterm_quiz_q2 (char arr [], int n){
    for (int i = 0; i< n; i++){
        int index = minLetter(arr, i, n);
        if(index != i){
            char temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
       
    }
    for (int i = 0; i< n; i++){
        printf("%c ", arr[i]);
    }
}
/* temp = h
 arr [0] = e arr[1] = temp = h
 פונקציה שמקבלת מערך אינדקס התחלתי ואת כל האורך עוברת
 מהאינדקס ההתחלתי עד הסוף ומחזירה את האינדקס של ההכי קטן
 אם האורכים שווים היא יוצאת ולא עושה כלום
*/
int minLetter (char arr[] , int start, int n){
    char min = arr[start];
    int index = start;
    for (int i = start; i< n; i++){
        if (arr[i] < min){
            min = arr[i];
            index = i;
        }
    }
    return index;
}
// מפה שאלה שלוש
void midterm_quiz_q3(int grades [M][N]){
    int avg[M] = {0};
    avgArr(grades,avg);
    // שלושת האינדקסים של אלה עם הממוצע הכי גבוה
    int index1 = maxInArr(avg);
    avg[index1] = 0;
    int index2 = maxInArr(avg);
    avg[index2] = 0;
    int index3 = maxInArr(avg);
    if (isTheBigger(grades, index1) == 1){
       printf("%d\n", index1);  
    }
    else if (isTheBigger(grades, index2) == 1){
         printf("%d\n", index2);
    }
    else if (isTheBigger(grades, index3) == 1){
        printf("%d\n", index3);
    }
    else
        printf("-1");
    
}
void avgArr(int grades [M][N], int avg[M]){
    for (int student = 0; student < M; student++){
        for (int grade = 0; grade < N; grade++){
            avg[student] += grades[student][grade];
        }
    }
}
int maxInArr(int avg[M]){
    int index = 0;
    int max = avg[0];
    for (int i = 0; i< M; i++){
        if (max < avg[i]){
            max = avg[i];
            index = i;
        }
    }
    return index;
    
    
    
    
}
int isTheBigger(int grades [M][N], int index){
    int maxGrade = 0;
    for(int i = 0; i < N; i++){
        if(maxGrade < grades[index][i]){
            maxGrade = grades[index][i];
        }
    }
    for (int raw = 0; raw < M; raw++){
        for (int col = 0; col < N; col++){
            if (maxGrade < grades[raw][col]){
                return 0;
            }
        }
    }
    return 1;
}
