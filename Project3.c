# include<stdio.h>
# include<math.h>

int main(){
    int n;
    int count=0;
    printf("Enter the range: ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==0){
            printf("%d",i);
            printf("\n");
        }
        count=0;
        
    }
    
}
