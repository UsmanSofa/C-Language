#include<stdio.h>
#include<string.h>

int main(){
    char name[35],rev_name[35];
    printf("Enter Your Name: ");
    gets(name);
    strcpy(rev_name, name);
    strrev(rev_name);
    printf("Reverse name is: %s\n",rev_name);
    if(strcmp(name,rev_name) == 0){
        printf("It is a Palidrome name");
    }else{
        printf("it is not a palidrome name");
    }
    return 0;
}