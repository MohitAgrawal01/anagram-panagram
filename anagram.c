#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str2[100];
    puts("Enter Your Arranged String: ");
    gets(str);

    puts("Enter Your Unarranged String: ");
    gets(str2);
   int str_len = strlen(str);
    int str2_len = strlen(str2);
   
    int i,j,flag=1;
    
    if(str_len==str2_len){
    
    for(i=0; i<str_len; i++){
    
    if(flag){
    
    for(j=0; j<str2_len; j++){
    
    if(str[i]==str2[j]){
              flag=1;
               break;
    }
      else{
             flag=0;
                   }}}}}else{
    flag=0;
    }
    
    if(flag==1){
    
    printf("Both Strings have same Char");
    
    }else{
    
    printf("Both Strings have not same Char");
    
    }
    
}
