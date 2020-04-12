#include<stdio.h>
#include<math.h>

int main(){


    int a;
    int b[5] = {'\0',};
    int i;

    scanf("%d",&a);

    for(i =0; i<5; i++){

       
        b[i] = a%10;
        a = a/10;
        
        
    }

    for(i = i-1; i>=0; i--){
        printf("[%d]\n",(int)(b[i]*pow(10,i)));
    }


    return 0;
}