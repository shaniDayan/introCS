#include <stdio.h>
#include <limits.h> // for define of int like INT_MAX or INT_MIN             

int Factorial(){
    /*
    Factorial
    */
    int input;
    int sum=1, i=1;
    printf("Enter a number\n");
    scanf("%d", &input);
    while (i<=input){
        sum=sum*i;
        i++;
    }
    printf("%d", sum);
    return 0;

}
int Positivenum(){
    
    int input;
    printf("Enter a number\n");
    do {
        if(scanf("%d",&input)!=1){
            printf("You are so bad! we need int! bye bye\n");
            return 1;
        }
    }while(input<0);
    
    printf("You are the best, sooo positive!\n");
    return 0;
}
int FactorialFor(){
    int n,i;
    int sum=1 ;
    scanf("%d",&n);
    for (i=1; i <= n; i++){
        sum*=i;
    }
    printf("%d",sum);
    return 0;
}
int SmallestNum(){
    int n, min_number = INT_MAX;
    scanf("%d", &n);
    for (int i=0; i < n;i++){
        int number;
        scanf("%d", &number);
        if (number<min_number)
            min_number=number;
    }
    printf("%d", min_number);
    return 0;
}
int WhenBreak(){
    while(1){
        int number;
        scanf("%d", &number);
        if(number<5)
            break;
    }
    return 0;
    
}
int main() {
    //Factorial();
    //Positivenum();
    //FactorialFor();
    //SmallestNum();
    WhenBreak();
    return 0;
}
