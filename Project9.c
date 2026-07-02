# include<stdio.h>
# include<string.h>
#include <ctype.h>

void vowelsUpperCase( char str[]);
void highFrequencyChar(char str[]);
void clearBlankSpaces(char str[]);
void caseChange(char str[]);

int main(){
    char str[50];
    printf("Enter a string: ");
    fgets(str, sizeof(str),stdin); //adds \n after entering and then \0.
    vowelsUpperCase(str);
    highFrequencyChar(str);
    clearBlankSpaces(str);
    caseChange(str);
    return 0;
}

void vowelsUpperCase( char str[]){
    int i=0;
    while(str[i] != '\0'){
        if(str[i] =='a' || str[i] =='e' || str[i] =='o' || str[i] =='i' || str[i] =='u'){
            str[i] = toupper(str[i]);
        }
        i++;
    }
    printf("The new String is ");
    puts(str);
    printf(".");
}
void highFrequencyChar(char str[]){
    int freq[256] = {0};
    for(int i=0; str[i] !='\n';i++){
        freq[str[i]]++;
    }
    int max = 0;
    for(int i=0;str[i] != '\n'; i++){
        if(freq[str[i]]>max){
            max=freq[str[i]];
        }
    }
    for(int i=0; i<256;i++){
        if(freq[i] == max){
            printf("The character ' %c ' has %d times maximum appearence.\n",i,max);
        }
    }
}
void clearBlankSpaces(char str[]){
    int i=0,j=0;
    while(str[i] != '\0'){
        if(str[i] != ' ' && str[i] != '\n' ){
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("The new String is ");
    puts(str);
    printf(".");
}
void caseChange(char str[]){
    for(int i=0;str[i] != '\n'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        else{
           str[i]=str[i]+32; 
        }
    }
    printf("The new String is ");
    puts(str);
    printf(".");
}
