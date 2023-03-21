#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    return 0;
}

void merge(int a[], int na, int b[], int nb, int c[]){
    int ia, ib, ic;
    for(ia=ib=ic=0;(ia<na)&&(ib<nb); ic++){
        if(a[ia]<b[ib]){ // בודק מי האיבר שיותר גדול 
            c[ic] = a[ia]; // נשים בסי את האיבר של איי כי הוא הקטן 
            ia++; 
        }
        else{
            c[ic] = b[ib]; // אחרת נשים את האיבר של בי בתוך סיס
            ib++;
        }
    } // נעצור את הלולאה כשאחד המערכים יסתיים והפור למטה זה בשביל האיברים שנשארו
    for(;ia<na; ia++,ic++) c[ic] = a[ia];
    for(;ib<nb;ib++, ic++) c[ic] = b[ib];
}

/*merge_sort with recursive*/
/*פונקציית מעטפת 
אנחנו מקצים מקום למערך חדש שהוא יהיה לנו עזר במהלך הריקורסיה ואז בסוף משחררים אותו */
void merge_sort(int a[], int n){
    int *tmp_array = malloc(sizeof(int) *n);
    internal_msort(a, n, tmp_array);
    free(tmp_array);
}
/*איך הריקורסיה עובדת
אנחנו מחלקים את המערך שלנו לשני חלקיםת חלק אחד יכול להיות גדול יותר מהשני
אנחנו שולחים את זה בריקורסיה עד שאנחנו עם מערכים ממש קטנים ואין עוד איך לחלק
 merge sort עכשיו לכל חלק לפי הצדדים נעשה מיון לפי החלקים עם
 אחרי שחילקנו את הבעיה לבעיות קטנות ולכל שני חלקי המערך עשינו מיון 
 בסוף נעלה למעלה בעץ ולא יהיה יותר מה למיין
 את כל המיון הכנסו למערך העזר שלנו
 אז בסוף נעתיק אותו למערך המקורי ונשחרר במעטפת את המערך עזר
*/
void internal_msort(int a[], int n, int helper_array[]){
    int left = n/2, right = n -left;
    if (n<2) return;
    internal_msort(a , left, helper_array);
    internal_msort(a+left, right, helper_array);
    merge(a, left, a+left, right, helper_array);
    memcpy(a, helper_array, n*sizeof(int));
}

/*complexity
for every level we do n action and we call the recursive with array that has n/2 member
we have the time complexity -
T(n) = 2T(n/2)+ n
2T(n/2) we do recursive twice 
n for the merge sort
and notice that T(1) = 1
so time complexity is nlog2n
place complexity - 
we do malloc with n and the deep of recursive is logn (we split the array every time)
so n +logn 
so the place complexity is n*/