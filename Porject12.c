# include<stdio.h>
# include<ctype.h>
int main(){
    FILE *fptr;
    fptr = fopen("./Projects-C/Text Files/Project12.txt","r");
    char ch;
        int count=0;
        int counts[20];
        int co=0;
    if(fptr!=NULL){
        while((fscanf(fptr,"%c",&ch)) != EOF){
            if(tolower(ch)=='a' || tolower(ch)=='e' || tolower(ch)=='u' || tolower(ch)=='o' || tolower(ch)=='i'){
                count++;
                
            }
            if(ch=='\n'){
                counts[co]=count;
                count=0;
                ++co;
            }
            
        }
        counts[co]=count;
        ++co;
        fclose(fptr);
    }
    fptr = fopen("./Projects-C/Text Files/Project12.txt","w");
    if(fptr!=NULL){
        for(int i=0;i<co;i++){
            fprintf(fptr,"%d\n",counts[i]);
        }
    }else{
        printf("failed");
    }

    fclose(fptr);
    return 0;
}