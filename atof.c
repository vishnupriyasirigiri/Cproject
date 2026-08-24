#include<stdio.h>
int main()
{
    char s[100];
    float num=0,frac=0,div=1;
    int  i=0, sign=1;
    printf("Enter string:");
    scanf("%s",s);
    if(s[0]=='+'){
        sign=1;
        i=1;
    }
    else if(s[0]=='-'){
        sign=-1;
        i=1;
    }
    for(;s[i]>='0' && s[i]=='9'; i++){
        num=num*10+(s[i]-'0');
    }
    if(s[i]=='.'){
        i++;
    for(; s[i]>='0'&&s[i]<='9'; i++){
            frac=frac*10+(s[i]-'0');
            div=div*10;
        }
    }
    num=num+frac/div;
    num=num*sign;
    printf("num=%f\n",num);
    return 0;
}
