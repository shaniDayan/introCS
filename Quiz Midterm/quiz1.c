#include <stdio.h>
#include <stdbool.h>

#define M 4
#define N 3

// quiz 1
/*
סכום המחלקים גדול פעמיים מהמספר
- לחלק עם מודולו וחלקי עשר
*/
int midterm_quiz_q1(int num);
/*
מקבלת מערך של ציונים מחזירה את מספר הסטודנטים שקיבלו את הציון
הגבוה מהממוצע
כלומר קודם לחשב ממוצע 
*/
int midterm_quiz_q2(int arr[], int n);
/*
ערך כל פיקסל בתמונה בין 0 ל225
מקסימום מקומי- אם הוא גדול מכל השכנים שלו
מינימום מקומי אם הוא קטן מהשכנים שלו 
(בלי שווה בכלל)
מחליפים כל מקסימום או מינימום מקומי במינוס אחד
*/
void midterm_quiz_q3 (int pic[M][N]);
// בודק אם לא יצאנו מהתחום
bool outOfRange(int raw, int col);
// בודק מינימום
bool min(int pic[M][N],int raw, int col);
// בודק מקסימום
bool max(int pic[M][N],int raw, int col);
int midterm_quiz_q1_k(int num);
int main () {
    // printf("%d", midterm_quiz_q1(12));
    int arr[5] = {100, 60, 80, 100, 60};
    printf("%d", midterm_quiz_q2(arr, 5) );
    
    // int pic[M][N] = { {1 , 2, 3},
                    //   {4, 5, 6},
                    //   {6, 5, 4},
                    //   {3, 2, 10}};
    //  midterm_quiz_q3 (pic);
    return 0;
}
int midterm_quiz_q1(int num){
    int sum = 0;
    int i = 1;
    while(i <= num){
        if(num % i == 0){
            sum += i;
        }
        i++;
    }
    if(sum > (2 * num)){
        return 1;
    }
    else{
        return 0;
    }
}

int midterm_quiz_q2(int arr[], int n){
    double avg = 0;
    int sum = 0;
    for(int i=0; i < n; i++){
        sum += arr[i];
    }
    avg = (double)sum / n;
    int aboveAvg = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] > avg){
            aboveAvg++;
        }
    }
    return aboveAvg;
}

void midterm_quiz_q3 (int pic[M][N]){
    
    for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf(" %d  ", pic[i][j]);
            }
        
        printf("\n");
    } 
    
    min (pic, 3, 1);
    max (pic ,3, 2 );
      
    int index[M][N] = {{0}};
    for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (min(pic, i, j) || max(pic, i, j)){
                index[i][j] = -1;
            }
        }
    } 
  
     for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            if (index[i][j] == -1){
                pic[i][j] = -1;
            }
        }
    } 
    printf("\n\n\n");
     for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf(" %d ", index[i][j]);
            }
            printf("\n");
        }
    printf("\n\n\n");
    for(int i = 0; i < M; i++){
        for (int j = 0; j < N; j++){
            printf(" %d ", pic[i][j]);
            }
            printf("\n");
        }
      
}
bool outOfRange(int raw, int col){
    return (!(raw >= M || raw < 0 || col < 0 || col >= N));
}
// בודק מינימום
bool min(int pic[M][N], int raw, int col){
   
    for (int d = -1; d < 2;d++){
        if (outOfRange(raw + d,col)){
            if (pic[raw][col] > pic[raw + d][col]){
                return false;
            }
        }
          
           
    }
    for (int u = -1 ;u < 2; u++){
      if (outOfRange(raw,col + u)){
                  if (pic[raw][col] > pic[raw][col + u]){
                     return false;
                    }
            }
    }
    if (outOfRange(raw - 1, col + 1)){
        if (pic[raw][col] > pic[raw - 1][col + 1]){
            return false;
        }
    }
    if (outOfRange(raw + 1, col - 1)){
        if (pic[raw][col] > pic[raw + 1][col - 1]){
            return false;
        }
    }
    return true;
    
    
}
// בודק מקסימום
bool max(int pic[M][N],int raw, int col){
     
    for (int d = -1; d < 2;d++){
        if (outOfRange(raw + d,col)){
            if (pic[raw][col] < pic[raw + d][col]){
                return false;
            }
        }
          
           
    }
    for (int u = -1 ;u < 2; u++){
      if (outOfRange(raw,col + u)){
                  if (pic[raw][col] < pic[raw][col + u]){
                        return false;
                    }
            }
    }
    if (outOfRange(raw - 1, col + 1)){
        if (pic[raw][col] < pic[raw - 1][col + 1]){
            return false;
        }
    }
    if (outOfRange(raw + 1, col - 1)){
        if (pic[raw][col] < pic[raw + 1][col - 1]){
            return false;
        }
    }
    return true;
    
}
