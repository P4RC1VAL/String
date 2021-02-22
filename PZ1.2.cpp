#include <iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{//clrscr();
 char str[30];
 int sum=0, i, k;
 cout<<"Vvedite predlogenie"<<'\n';
 gets(str);
 k=strlen(str);
 for(i=0; i<k; i++)
    {if ((str[i]>='0')&&(str[i]<='9'))
     sum=sum+str[i]-'0';
    };
 cout<<sum<<'\n';
 return 0;
}
