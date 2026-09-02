#include<stdio.h>
int main(){
    char name[]= "heLlo WoRlD";
    for(int i= 0 ;name[i]!='\0';i++){
        if(name[i]>'a'&& name[i]<'z')
        {
        name[i]-=32;
        printf("%c",name[i]);
        }else if(name[i]>'A'&& name[i]<'Z'){
            name[i]+=32;
            printf("%c",name[i]);
        }
    }
    return 0;
}