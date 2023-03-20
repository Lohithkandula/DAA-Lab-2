#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],size,i,j,c,p,temp;
printf("Enter the Size of an Array : \n");
scanf("%d",&size);
printf("Enter the Numbers into Array: \n");
for(i=1;i<=size;i++)
scanf("%d",&a[i]);
for(i=2;i<=size;i++)
{
c=i;
do
{
p=(c)/2;
if(a[p]<a[c])
{
temp=a[p];
a[p]=a[c];
a[c]=temp;
}
c=p;
}while(c!=1);
}
for(j=size;j>=1;j--)
{
temp=a[1];
a[1]=a[j];
a[j]=temp;
p=1;
do{
c=2*p;
if((a[c]<a[c+1]) && c<j-1)
c++;
if(a[p]<a[c] && c<j)
{
temp=a[p];
a[p]=a[c];
a[c]=temp;
}
p=c;
}while(c<j);
}
printf("The Sorted Array is: \n ");
for(i=1;i<=size;i++)
printf("%d ",a[i]);
getch();
}
