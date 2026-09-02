#include<stdio.h>
#include<string.h>
int main(){
    char email[35], pass[35];
    char check_email[35],check_pass[35];
    int email_check=0;
    printf("Enter Your Email: ");
    gets(email);
    for(int i = 0; email[i]!='\0';i++){
        if(email[i] == '@'){
            email_check = 1;
        }
        if( email[i] =='.'){
            email_check = 1;
        }
    }
    if(email_check > 0){
        printf("\n Enter Your Password: ");
    gets(pass);
    if(strlen(pass) < 6){
        printf("Minimum Password Must be 6\n");
    }
    printf("\n Enter Login Email: ");
    gets(check_email);

    if(strcmp(email,check_email) == 0){
        printf("\nEnter Login Password: ");
        gets(check_pass);
        if(strcmp(pass,check_pass) == 0){
            printf("Login Successfull");
        }else{
            printf("Password Does not match");
        }
    }else{
        printf("Email Does not match\n");
    }
    }else{
        printf("Email Must have proper address followed by @");
    }
    
    return 0;
}