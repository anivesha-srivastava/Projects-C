# include<stdio.h>

int main(){
    char alphabets[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *p=alphabets;
    while(*p!='\0'){
        printf("%c\t",*p);
        p++;
    }
    return 0;
}
