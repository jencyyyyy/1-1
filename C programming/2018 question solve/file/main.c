#include<stdio.h>

int main(){
    int num[100];
    FILE *fptr, *fptr2;

    if((fptr = fopen("in.txt","r"))==NULL){
        printf("Error opening file");
        exit(1);
    }
    int i;

    fptr2 = fopen("out.txt","w");
    for(i=0;i<4;i++){
        for(int j=0;j<4;j++){
            fscanf(fptr,"%d", &num[j]);
            fprintf(fptr2, "%-5d ",decimalToBinary(num[j]));
        }
        fprintf(fptr2,"\n");
    }
    fclose(fptr2);
    return 0;
}

int decimalToBinary(int n){
    long binarynum = 0;
    int remainder, temp = 1;

    while (n!=0)
    {
        remainder = n%2;
        n = n / 2;
        binarynum = binarynum + remainder*temp;
        temp = temp * 10;
    }
  return binarynum;
}

