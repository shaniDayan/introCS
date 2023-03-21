#include <stdio.h>
#include <math.h>
#include <limits.h> // for define of int like INT_MAX or INT_MIN      
#include <stdbool.h>



/*
מחלק משותף הגדול ביותר בהיתנן שני מספרים שלמים חיובים, הסדר אינו משנה
m n
GCD(m,n);
הוא השלם הגדול ביותר שמחלק את שניהם

*/
int GCD(){
    int n, m, gcd;
    scanf("%d%d",&n,&m);// n<m
    while(n>0){
        int temp=n;
        n=n%m; // שארית 
        m=temp;
    }
    printf("%d", m);
    
    return 0;
}
/*
checking if the number is prime

*/
bool prime (int num){
    int i;
    bool isPrime=true;
    if(num==1||num % 2 == 0 && num!=2)
        isPrime=false;
    else{
        for (int i=3;i<sqrt(num);i+=2) {
            if(num % i == 0){
                isPrime==false;
                break;
            }
        }
    }
    return isPrime;
}
int main() {

    //GCD();
    int num;
    scanf("%d",&num);
    if(prime(num))
        printf("%d is prime", num);
    else
        printf("%d is not prime", num);
    return 0;
}
