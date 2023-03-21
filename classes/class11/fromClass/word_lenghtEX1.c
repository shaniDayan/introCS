#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*השאלה
יש להדפיס את כל המילים הבינאריות באורך אן 
מילה בינארית שהיא רק מספרות של אפס ואחד
*/
/* מה הפונקציה עושה
משלימה את תוכן המילה הבינאית בכל האפשרויות ומדפיס אותן
*/
void binary (int word[], int n, int index);
void binary_wrapper(int n);
void print(int arr[],int n);

int main(){
    binary_wrapper(3);
    return 0;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}
void binary_wrapper(int n){
    int *word = malloc(n*sizeof(int));
    if(word != NULL)return;
    binary(word,n,0);
    free(word);
}
void binary (int word[], int n, int index){
    if(index==n){
        print(word,n);
        return;
    }
    word[index] = 0;
    binary(word,n,index+1);
    word[index] = 1;
    binary(word,n,index+1);

}
