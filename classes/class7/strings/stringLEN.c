#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int len(char * s);
int main(){
    char s[] = "walla";
    /*
    the size of the string will be 6 cuz is shown as- 
    w a l l a \0
    if we do malloc we need to remember to add 1 
    we can go over the string until /0 so we do not need to transfer the length
    */
    printf("%s ", s);
    
    return 0;
}
int len(char * s){
    int counter = 0;
    for (; s[counter] != '\0'; counter++); // counter will be the lenght of the string
    // option 2
    for(;s[counter]; counter++); // s[counter] return false when it will get to \0
    //option 3
    for (; *s; counter++, s++);// s is pointer when transfer to the function
    return counter;
}