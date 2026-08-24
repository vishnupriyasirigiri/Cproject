#include<stdio.h>
   int main(){
           char s[100];
           int num=0,res=0;
           printf("enter string:");
           scanf("%s",s);
          int i=0,sign=1;
           if(s[0]=='+'){ 
                   sign=1;
                  i=1;
          }else if(s[0]=='-'){
                  sign=-1;
                  i=1;
          }       
          for(;s[i];i++){
                  if(s[i]>='0' && s[i]<='9'){
                          s[i]=s[i]-'0';
                          res=res*10+s[i];
                  }
                  else break;
          }
          num=res*sign;
          printf("num=%d\n",num); 
          return 0;
    }