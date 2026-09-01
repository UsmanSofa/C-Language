#include<stdio.h>
int main(){
    char name[12]= "HELLO WORLD";
    for(int i= 0 ;name[i]!='\0';i++){
        if(name[i]>'A'&& name[i]<'Z')
        {
        name[i]+=32;
        printf("%c",name[i]);
        }
    }
    return 0;
}