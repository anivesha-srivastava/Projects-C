# include<stdio.h>
# include<math.h>
       
int main() {
    int num,a,c,b;
    printf("This program checks whether a number is an armstrong number or not.\n");
    printf("Enter a number of 3-digits: ");
    scanf("%d",&num);

    a=num/100;
    b=(num/10)%10;
    c=(num%10);

    int sum=pow(a,3)+pow(b,3)+pow(c,3);
    // printf("%d \n",sum);

    if(sum==num){
        printf("It is an armstrong number.");
    }
    else{
        printf("It is not an armstrong number.");
    }
    return 0;
}