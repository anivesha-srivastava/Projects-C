# include<stdio.h>
# include<string.h>
# include<ctype.h>

typedef struct student{
    int rollNo;
    char name[50];
    char course[20];
}stu;
typedef struct teacher{
    int teachNo;
    char name[50];
    int courseNo;
}teach;
typedef struct admin{
    int adminNo;
    char name[50];
    int departNo;
}adm;

int studentInfo(stu studs[]);
int teacherInfo(teach teach[]);
int adminInfo(adm adm[]);
void printAll(stu studs[],teach teach[],adm adm[],char role ,int n);

int main(){
    stu students[20]={0};
    teach teachers[20]={0};
    adm admins[20]={0};
    char ch;
    printf("Enter your role ('Student->S','Teacher->T','Admin->A'): ");
    scanf("%c",&ch);

    if(tolower(ch)=='s'){
        int i=studentInfo(students);
        char role='s';
        char ch;
        printf("Want to print all the details ('y'/'n'): ");
        scanf(" %c",&ch);
        printf("\n");
        if(tolower(ch)=='y'){
            printAll(students,teachers,admins,role,i );
        }
        else if(tolower(ch)=='n'){
            printf("Thank you , have a good day.");
        }
        else{
            printf("You have entered an invaild operator.");
        }
    }
    else if(tolower(ch)=='t'){
        int i=teacherInfo(teachers);
        char role='t';
        printf("Want to print all the details ('y'/'n'): ");
        scanf(" %c",&ch);
        printf("\n");
        if(tolower(ch)=='y'){
            printAll(students,teachers,admins,role,i );
        }
        else if(tolower(ch)=='n'){
            printf("Thank you , have a good day.");
        }
        else{
            printf("You have entered an invaild operator.");
        }
    }
    else if(tolower(ch)=='a'){
        int i=adminInfo(admins);
        char role='a';
        printf("Want to print all the details ('y'/'n'): ");
        scanf(" %c",&ch);
        printf("\n");
        if(tolower(ch)=='y'){
            printAll(students,teachers,admins,role,i );
        }
        else if(tolower(ch)=='n'){
            printf("Thank you , have a good day.");
        }
        else{
            printf("You have entered an invaild operator.");
        }
    }
    else{
        printf("You have entered an invalid character.");
    }
    return 0;
}
int studentInfo(stu studs[]){
    char result='y';
    int i=0;
    while(result=='y'){
        printf("Enter your roll number: ");
        scanf("%d",&studs[i].rollNo);
        getchar();
        printf("Enter your name: ");
        fgets(studs[i].name,sizeof(studs[i].name),stdin);
        printf("Enter your course ('B.Tech'or'B.Sc'): ");
        fgets(studs[i].course,sizeof(studs[i].course),stdin);
        printf("Want to enter more students details ('y'/'n'): ");
        scanf("%c",&result);
        if(tolower(result)=='y'){
            i++;
        }
        else{
            result='n';
        }
    }
    return i;
}
int teacherInfo(teach teach[]){
    char result='y';
    int i=0;
    while(result=='y'){
        printf("Enter your teacher number: ");
        scanf("%d",&teach[i].teachNo);
        getchar();
        printf("Enter your name: ");
        fgets(teach[i].name,sizeof(teach[i].name),stdin);
        printf("Enter your course number: ");
        scanf("%d",&teach[i].courseNo);
        getchar();
        printf("Want to enter more teachers details ('y'/'n'): ");
        scanf("%c",&result);
        if(tolower(result)=='y'){
            i++;
        }
        else{
            result='n';
        }
    }
    return i;
}
int adminInfo(adm adm[]){
    char result='y';
    int i=0;
    while(result=='y'){
        printf("Enter your admin number: ");
        scanf("%d",&adm[i].adminNo);
        getchar();
        printf("Enter your name: ");
        fgets(adm[i].name,sizeof(adm[i].name),stdin);
        printf("Enter your department number: ");
        scanf("%d",&adm[i].departNo);
        getchar();
        printf("Want to enter more admin details ('y'/'n'): ");
        scanf("%c",&result);
        if(tolower(result)=='y'){
            i++;
        }
        else{
            result='n';
        }
    }
    return i;
}
void printAll(stu stu[],teach teach[],adm adm[],char role,int n ){
    if(tolower(role)=='s'){
        for(int i=0;i<=n;i++){
            printf("Roll No: %d\n",stu[i].rollNo);
            printf("Name: %s",stu[i].name);
            printf("Course: "); puts(stu[i].course);
        }

    }
    else if(tolower(role)=='t'){
        for(int i=0;i<=n;i++){
            printf("Teacher No: %d\n",teach[i].teachNo);
            printf("Name: %s",teach[i].name); 
            printf("Course Number: %d\n ",teach[i].courseNo); 
            printf("\n");
        }
        
    }
    else if(tolower(role)=='a'){
        for(int i=0;i<=n;i++){
            printf("Admin No: %d\n",adm[i].adminNo);
            printf("Name: %s",adm[i].name);
            printf("Department Number: %d\n",adm[i].departNo); 
            printf("\n");
        }
    }
    else{
        printf("Entered an invalid character!");
    }
}
