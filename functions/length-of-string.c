#include<stdio.h>
int lengthofString(char name[]){
    int count=0;
    for(int i = 0; name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[35];
    printf("Enter your Name: ");
    gets(name);
    printf("The length of string is:%d",lengthofString(name));
    return 0;
}