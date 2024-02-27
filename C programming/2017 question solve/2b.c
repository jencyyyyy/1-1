#include<stdio.h>
#define N 100
int main(){

    int n,freq=0;
    char queue[N], search;
    printf("Enter one integer N (100>N>0): ");
    scanf("%d",&n);
    fflush(stdin);
    for(int i=0;i<n;i++){
        scanf("%c",&queue[i]);
    }
    fflush(stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c", &search);

    for(int i=0;i<n;i++){
       if(search == queue[i]){
        freq++;
       }
    }
    printf("Frequency: %d", freq);

    return 0;
}
