#include<stdio.h>
void main(){
    int n=4;
    char ch='A';
    for(int i=0;i<n;i++){
        
        for(int j=1;j<n;j++){
            printf("%c",ch);
        }
        printf("\n");
        ch++;
    }
}