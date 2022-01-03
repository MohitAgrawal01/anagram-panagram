#include<stdio.h>
#include<string.h>
int main()
{
    char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
    char str[1000];
    puts("Enter Your String: ");
    gets(str);
    strlwr(str);
    int i,j,flag=1;
    if(strlen(str)<26){
    
    printf(" Its not panagram string");
    }else{
    
    for(i=0; i<26; i++){
    if(flag){
    for(j=0; j<strlen(str); j++){
    
    if(alpha[i]==str[j]){
           flag = 1;
           break;
               }else{
                      flag=0;
                               }
                                  } } }      
    
    if(flag){
    printf("Its a Panagram string");
    }else{
           printf("Not an Panagram String");}
                   }}
