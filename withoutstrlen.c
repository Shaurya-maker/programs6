#include<stdio.h>
int main()
{int k,i,j,n;
k=0;
printf("enter the size of string\n");
scanf("%d",&n);
char ch[n];
printf("enter string characters\n");
for(i=0;i<n;i++)
scanf("%c",&ch[i]);
for(i=0;ch[i]!=0;i++)
k++;
printf("%d is length",k);
return 0;
}
