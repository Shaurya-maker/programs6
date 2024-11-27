#include<stdio.h>
int main()
{int k,i,j,n;
printf("enter the size of string\n");
scanf("%d",&n);
char ch[n],t;
printf("enter string characters\n");
for(i=0;i<n;i++)
scanf("%c",&ch[i]);
for(i=0;i<n;i++)
for(k=0;k<n;k++)
if(ch[k]>ch[k+1])
{t=ch[k];
ch[k]=ch[k+1];
ch[k+1]=t;
}
printf("the changed string");
for(j=0;j<n+1;j++)
printf("%c",ch[j]);
return 0;
}
