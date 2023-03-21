char *people [4] = {"shani",
                  "keran",
                  "gili",
                  "bat-al" };
/*
מה זה אומר בעצם-
יש לנו מערך של מחרוזות שיש בהן 4 מצביעים למחרוזות שונות
 char* כל מקום במערך שלנו מצביע לטיפוס 
 אלה הם מחרוזות קבועות אז מותר לנו לשנות את הכתובת שמאוחסנת בכל אחד מן המצביעים 
 על מנת שיצביע למחרוזת אחרת
*/

/*
מקבלים מערך עם שלוש מחרוזות אחת אחרי השנייה ואנחנו רוצים להחליף בין המחרוזת הראשונה לשלישית דוגמא 
hello\0my\0world!\0
to- 
world!\0my\0hello\0
*/
void swap(char *s1, char *s2){
    char *temp = *s1;
    *s1 = *s2;
    *s2 =temp;
    
   

}
void reverse (char *s, int len){
    for(int i = 0; i < len/2; i++){
        swap(&s[i], &s[len -1 -i]);
    }
}
void swap_first_last(char arr[]){
    int str_len[3] , arr_len = 0;
    int i =0, str_count, len_count;
    for(str_count = 0; str_count < 3; str_count++){
        str_len[str_count] = len_count + 1;
        len_count = 0;
    }
    reverse(arr,arr_len); // reverse the whole string
    reverse(arr, str_len[2]);
    reverse(arr + str_len[2], str_len[1]);
    reverse(arr + str_len[2] + str_len[2], str_len[0]);
}