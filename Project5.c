# include<stdio.h>

int main(){
    int sum;
    int second=1;
    int first=0;
    int n;
    printf("Enter the term whose fibonacci sequence number you wanna see: ");
    scanf("%d",&n);

    if(n==0||n==1){
        if(n==0){
            printf("The number is %d.",0);
        }
        else{
            printf("The number is %d.",1);
        }
    }
    else{
        for(int i=n; i>=2;i--){
            sum=first+second;
            first=second;
            second=sum;
        }
        printf("The number is %d.",sum);
    }
    return 0;
}