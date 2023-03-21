#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int a[],int x, int left, int right){
	if(left > right) 
		return -1; // חרגנו האיבר לא נמצא
	int middle = (left + right) / 2; // שווה לאמצע
	if(a[middle] == x) // מצאנו את המספר
	     return middle; // נחזיר את המספר
	else if(x < a[middle]) // if x smaller than middle we do the search for the left part
	     return BinarySearch(a, x, left, middle-1); 
	else // x > a[middle]
           return BinarySearch(a, x, middle + 1, right); // if x is bigger than middle we do the sercj for the right part
}

int main(){
    /*
    סיבוכיות מקום ((logn))
    סיבוכיות זמן ((logn))
    
    */
    return 0;
}