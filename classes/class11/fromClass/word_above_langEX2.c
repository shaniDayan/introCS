#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define K 3
/*שאלה 2 
יש להדפיס את כל המילים באורך אן מעל האלםבית של 
{0,1,2,....,k}*/
///////////////////////////////
int main(){
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
        binary(word,n,index + 1); 
    }
}
