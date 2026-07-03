# include<stdio.h>
# include<stdlib.h>
// Functions of stdlib.
// void pointer in return and can be typecasted like (int*)or(float*)
// malloc() memory allocation function and no guarantee of initialization with 0 ,it can be or not be.
// calloc() continous allocation amd gets initialize with 0.
// free() use free the memory allocated by malloc and calloc as compile not gonna do it.And can use the ointer again and again.It frees all memory.
// realloc() increase or decrease memory space accordingly.Not all space removal.

int main(){
    int *ptr;
    int n;

    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("\n");
    ptr=(int*)malloc(n*sizeof(int));
    printf("Using Malloc():\n\n");

    for(int i=0; i<n; i++){
        printf("The %d value is %d.\n",i+1,ptr[i]);
    }
    printf("\n");

    printf("The allocation is freed usinf free().\n\n");
    free(ptr);

    ptr=(int*)calloc(n,sizeof(int));
    printf("Using Calloc():\n\n");
    for(int i=0; i<n; i++){
        printf("The %d value is %d.\n",i+1,ptr[i]);
    }
    printf("\n");

    
    printf("Enter an integer for reallocation either increased or decreased: ");
    scanf("%d",&n);
    printf("\n");
    ptr=(int*)realloc(ptr,n);

    printf("Using realloc():\n\n");
    for(int i=0; i<n; i++){
        printf("The %d value is %d.\n",i+1,ptr[i]);
    }
    printf("\n");
    printf("Using once more free().\n\n");
    free(ptr);
    
    return 0;
}