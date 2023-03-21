#include <stdio.h>
#include <math.h>
#include <limits.h> // for define of int like INT_MAX or INT_MIN      
#include <stdbool.h>



void histrogrma();
int main() {
    int n , m;
    //arr();
    /*
    printf("Enter your numbers:\n");
    scanf("%d%d", &m , &n);
    GCD(n ,m);
    error_accourred();
    printf("%d\n",typeOfMistanim() ); //print 1
    printf("%d\n",typeOfMistanim() ); // print 2
   */
   histrogrma();
    return 0;
}

int GCD(int n, int m){
    if (m < 0)
        m = -m;
    if (n < 0)
        n = -n;
    while (n != 0){
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

int howFactionWorks(){
    /*
    מוקצים תאי זיכרון עבור המשתנים הנמצאים בהגדרה הפונקציה
    מחושבים הביטויים הנמצאים ברשימת הארגומנטים המופיעים בקריאה לפונקציה 
    הסדר אינו משנה
    ערך כל ביטוי מוכנס למשתנה המתאים נקרא
    call by value
    מוקצים משתנים המוגדרים בגוף הפונקציה ומתבצע קוד הפונקציה
    ואז אחרי שהוא מחזיר התאים האלה נמחקים.
    */
    printf("this is how function work!\n");
    return 0;
}

int error_accourred(){
    /*
    המחסנית עובדת כך-
    קודם כל אנחנו מוסיפים לתחתית את הערכים מהפונקציה הראשית
    אם אנחנו קוראים לפונקציות זה מוסיף ללמעלה כך שכל פעם שהפונקציה מסתיימת המקומות נמחקים
    */
    return 0;
}

int typeOfMistanim(){
    //printf("you stupid b+^&!!\nyou cant use global mistanim!!\n it's bad for you\n");
    //printf("\npoor boy.\n");
    // משתנים סטטיים שימושים מאוד
    static int a = 0 ;
    // לא מוקצה על המחסנית ולכן לא נמחק כשהפונקציה מסתיימת ואפשר להשתמש בו בכל מקום בקוד
    // אי אפשר לשנות אותו בגלל שהוא מוגדר רק בפונקציה שלו ושם אפשר לעשות עליו פעולות
    // אפשר להשתמש בו בכללי 
    a++;
    return a;
}
/*
void getMat (arr[][10], int n){
    for (int row = 0; row < n; i++){
        for (int col = 0; col< 10; col++){
            scanf("%d", & arr[row][col]);
        }
    }
}
int arr(){
    int arr[100] = {0};
    getArr(arr, 100);
    sumArr(arr, 100)
    int ArrPlus [100][5] = {{ 0 }}; // מערך דו ממדי 
    // איך מעברים מערך דו ממדי
    getMat(arr , 100);
    return 0;
}
// אין צורך להחזיר את המערך כי זה משנה את המערך בפונקציה ואפשר להשתמש בו בשאר
void getArr(int arr[], int n){
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
}
int sumArr(int arr[], int n){
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
    return sum;
}
*/
void histrogrma(){
    int num = 23233;
    int hist [10] = {0};
    while (num > 0){
        hist[num%10]++;
        num /= 10;
    }
    for (int i=0; i<10; i++){
        if(hist[i] != i && hist[i] != 0){
            printf("false\n");
            break;
        }
        else{
             printf("true\n");
             break;
        }
           
    }
    for (int i = 0; i< 10; i++){
        printf("%d\n", hist[i]);
    }
}
