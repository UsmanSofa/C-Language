#include<stdio.h>
#include<string.h>
int main(){

    char pass[35];
    int alphabet = 0, number=0, special=0;
    printf("Enter Password: ");
    gets(pass);
    if(strlen(pass) > 5){
        for(int i = 0; pass[i]!='\0';i++)
        {
        if((pass[i] >= 'A' && pass[i] <= 'Z') || (pass[i] >= 'a' && pass[i] <=  'z')){
            alphabet = 1;            
        }
        if(pass[i] >='0' && pass[i]<='9'){
            number = 1;
        }
        if((pass[i]>='!'&& pass[i]<='/') || (pass[i]>=':'&& pass[i]>='@') || (pass[i]>='['&& pass[i]>='`')|| (pass[i]>='{'&&pass[i]<='~') ){
            special = 1;
        }
        }
    }else{
            printf("Minimum Password length should be above 6\n");
        }
    if(alphabet > 0 && number > 0 && special > 0){
        printf("password is Strong");
    }else{
        printf("Password is Not Strong");
    }
    return 0;
}