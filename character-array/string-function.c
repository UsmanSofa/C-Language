#include<stdio.h>
#include<string.h>
int main(){
    char name[34];
    char s1[] = "Hello";
    char s2[] = "World";
    char s3[15];
    printf("The Lenght of s1 is: %d\n",strlen(s1));
    // puts(strcat(s1,s2));
    printf("Reverse String of s1 is: ");
    puts(strrev(s1));
    // gets(name);
    // printf("Using puts: \n");
    // puts(name);
    strcpy(s3,strcat(s1,s2));
    puts(s3);
     return 0;
}