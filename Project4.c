# include<stdio.h>
// # include<math.h>

int fibo(int n);

int main(){
    int a;
    printf("Enter the term whose fibonacci sequence number you wanna see: ");
    scanf("%d",&a);
    printf("The number is %d.",fibo(a));
}

int fibo(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}