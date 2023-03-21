
#define N 1101
#define HISTRO 101

void histrogrma();

int main() {
   histrogrma();
    return 0;
}
void histrogrma(){
    int num = 23233;
    int hist [10] = {0};
    while (num > 0){
        hist[num%10]++;
        num /= 10;
    }
    for (int i=0; i<10; i++){
        if(hist[i] != i && hist[i] != 0){
            printf("false\n");
            break;
        }
        else{
             printf("true\n");
             break;
        }
           
    }
    for (int i = 0; i< 10; i++){
        printf("%d\n", hist[i]);
    }
}

void sorted(int grades[N], int sorted[N]){
    int hist[HISTRO]= {0};
    for (int i = 0; i< N; i++){
        hist[grades[i]]++;
    }
    int index = 0;
    for(int i = 0; i< HISTRO; i++){
        for (int j = 0; j< hist[i]; j++){
            sorted[index] = i;
            index++;
        }
    }
    
}
// בשביל חציון
int medain(int sorted[], int lenght){
    if(lenght%2 == 1){
        return sorted[lenght / 2];
    }
    int num1 = sorted[lenght / 2 -1];
    int num2 = sorted[lenght / 2];
    return ((num1+num2) / 2.0);
}
