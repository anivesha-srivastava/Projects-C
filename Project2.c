# include<stdio.h>
# include<math.h>

int main (){
    int n;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>1){
        for(int i=2;i<n;i++){
            if(n%i==0){
                count++;
        }
        }
        if(count==0){
            printf("The number is a prime number.");
        }
        else{
            printf("The number is not a prime number.");
        }
    }
    else{
        printf("The number is not a prime number.");
    }
    
    return 0;
}