#include<stdio.h>
void main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        
            printf("%d",i);
       
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }

        if(i!=n)printf("%d",i);
         printf("\n");

    }
   for(int i=n-1;i>=1;i--){
        for(int j=1;j<i;j++){
            printf(" ");
        }
        
            printf("%d",i);
       
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }

        if(i!=n)printf("%d",i);
         printf("\n");

    }
    
}