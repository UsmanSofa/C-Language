#include<stdio.h>
#include<string.h>
int main(){

    char word[35];

    printf("Enter Your Word: ");
    gets(word);
    for(int i = 0; word[i]!='\0';i++){
        int alphabet = 0;
        int counter = 0;
        for(int j = 0; j < i;j++){
            if(word[i]==word[j]){
                alphabet = 1;
            }
        }
        for(int j=0; word[j]!='\0';j++){
            if(word[i]==word[j]){
                counter++;
            }
        }
        if(alphabet == 0 ){
        printf("%c->%d\n",word[i],counter);
    }

    }
    return 0;
}