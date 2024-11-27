#include<stdio.h>
int main()
{int k,i,j,n;
k=0;
scanf("%d",&n);
char ch[n],t;
for(i=0;i<n;i++)
scanf("%c",&ch[i]);
if(n%2==0)
for(k=0;k<n/2;k++)
{t=ch[k];
ch[k]=ch[n-k-1];
ch[n-k-1]=t;
}
else
for(k=0;k<n/2+1;k++)
{t=ch[k];
ch[k]=ch[n-k-1];
ch[n-k-1]=t;
}
for(j=0;j<n;j++)
printf("%c",ch[j]);
return 0;
}
