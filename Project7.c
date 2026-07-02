# include<stdio.h>

void times(int arr[],int length,int n);
void largest(int arr[],int length);
void insertAtTheEnd(int arr[],int length,int num);

int main(){
    int n,num;
    int arr[]={1,2,3,4,5,6,7,8,9,0,5,6,7,3,9,2,9,4,7,9,2,7,0,0,1,2,5,6};
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the number to insert it: ");
    scanf("%d",&num);
    int length = sizeof(arr) / sizeof(arr[0]);
    times(arr, length, n);
    largest(arr, length);
    insertAtTheEnd(arr,length,num);
    return 0;
}
void times(int arr[],int length,int n){
    int count=0;
    for(int i=0;i<length;i++){
        if(arr[i]==n){
            count++;
        }
    }
    printf("The number %d appears %d times in the array.\n", n, count);
}
void largest(int arr[],int length){
    int *max = arr;
    for(int i=0;i<length;i++){
        if(arr[i]>*max){
            max=&arr[i];
        }
    }
    printf("The largest value in the array is %d\n.",*max);
}
void insertAtTheEnd(int arr[],int length,int num){
    arr[length]=num;
    printf("The new array after insertion is:\n");
    printf("{");
    for(int i=0;i<length+1;i++){
        printf("%d,",arr[i]);
    }
    printf("'\\0'}");
    printf("\n");
}