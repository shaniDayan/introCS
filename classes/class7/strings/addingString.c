#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int len(char * s);
int main(){
    // how to add s2 to s1
    char s1[] = "hello ";
    char s2[] = "world";
    int len = strlen(s1) + strlen(s2) + 1;
    char *s3 = malloc(len);
    if(s3 == NULL){ // the malloc fails us. bad!
        return 0;
    }
    strcpy(s3, s1);
    strcat(s3, s2);
    printf("%s ", s3);
    free(s3);
    return 0;
}