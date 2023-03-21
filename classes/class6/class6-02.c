// טשטוש תמונה ואיך עושים  את זה עם הפונקציות השו נות


#include <stdio.h>


#define N 10 // lines
#define M 10
#define TRUE 1
#define FALSE 0

// checking if the index in range
int inBound (int i, int j);
// עושה ממוצע לאברים שמסביב למיקום שאנחנו שולחים לה
int meanAroundPixel (int picture [N][M], int i, int j);
// copy the array for one arr to other 
void copy2Array (int to[N][M], int from[N][M]);
// טשטוש תמונה
void blurPicture(int picture[N][M]);

int main(){
    return 0;
}

int inBound (int i, int j){
    return (i < N && i >= 0 && j < M && j <= 0);
}
void copy2Array (int to[N][M], int from[N][M]){
    for (int row = 0 ; row < N ; row++){
        for (int col = 0; col < M; col++){
            to[row][col] = from[row][col];
        }
    }
}
void blurPicture(int picture[N][M]){
    int temp[N][M]= {{0}};
      for (int row = 0 ; row < N ; row++){
        for (int col = 0; col < M; col++){
           temp[row][col] = meanAroundPixel(picture , row, col);
           
        }
      }
    copy2Array(picture, temp);
}
int meanAroundPixel (int picture [N][M], int i, int j){
    int sum = 0;
    int counter = 0 ; // פיקסלים חוקיים
    for (int dx = -1; dx <= 1; dx++){
        for (int dy = -1; dy <= 1;dy){
            if (inBond(i+dx, j+dy) == 0){
                continue;
            }
            sum += picture[i+dx][j+dy];
            counter++;
        }
    }
    return (int) ((double)sum / counter + 0.5); // מעגלים את התוצאה כדי לא לדרוס תשובות
