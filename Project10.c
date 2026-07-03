# include<stdio.h>

typedef struct Vectors{
    int x;
    int y;
}vec;

void vecSum(vec v1, vec v2, vec *sum);

 int main(){
    vec v1={1,2};
    vec v2={3,4};
    vec sum={0};
    vecSum(v1, v2, &sum);
    printf("The sum of x: %d.\n",sum.x);
    printf("The sum of y: %d.",sum.y);
    return 0;
}
void vecSum(vec v1, vec v2, vec *sum){
    (*sum).x=v1.x+v2.x;
    sum->y=v1.y+v2.y;  
}