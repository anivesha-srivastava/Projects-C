# include<stdio.h>
# include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    printf("Enter your password: ");
    scanf("%s", &password[0]);

    salting(password);

    return 0;
}
void salting(char password[]){
    char backsalt[]="@#$&*";
    char newPassword[200];
    char frontsalt[]="^(783636363";
    strcpy(newPassword,frontsalt);
    strcat(newPassword,password);
    strcat(newPassword,backsalt);

    printf("The salted password: %s\n",newPassword);
}