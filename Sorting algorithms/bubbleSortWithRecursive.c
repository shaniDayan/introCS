#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

/*פונקציה של באבל עם ריקורסיה
נתון מערך של מספרים שלמים בגודל אן שאנחנו רוצים למיין
צריך למיין בעזרת ריקורסיה ועקרון באבל*/
void bubble(int a[] ,int n){
    if(n<=1) return; // we have nothing to sort
    bubble(a+1, n-1);// the next index
    for(int i=0; (i< n-1) && a[i] > a[i+1];i++){
        swap(a+i, a+i+1); // the first swap is between just 2 index
    }
}
int main(){

}