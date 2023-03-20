#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
int data;
struct node *left,*right;
};
struct node * insert(int, struct node *);
void search(int, struct node *);
void display(struct node *);
void main()
{
int ch;
int a;
struct node * root=NULL,*temp;
while(1)
{
printf("\n1. Insert\n 2. Find \n 3. Display\n 4. Exit\n Enter Your Choice : ");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the Data : ");
scanf("%d", &a);
root = insert(a, root);
break;
case 2:
printf("\nEnter the data to be searched : ");
scanf("%d",&a);
search(a, root);
break;
case 3:
if(root==NULL)
printf("\nEmpty tree");
else
display(root);
break;
case 4:
exit(0);
default:printf("Invalid Choice");
}
}
}
struct node * insert(int x,struct node * t)
{
if(t==NULL)
{
t = (struct node *)malloc(sizeof(struct node *));
t->data = x;
t->left = t->right = NULL;
}
else
{
if(x < t->data)
t->left = insert(x, t->left);
else if(x > t->data)
t->right = insert(x, t->right);
}
return t;
}
void search(int x, struct node * t)
{
if(t==NULL)
printf("Data is not found");
else if(x<t->data)
search(x,t->left);
else if(x>t->data)
search(x,t->right);
else
printf("Data is Found");
}
void display(struct node * t)
{
if(t)
{
display(t->left);
printf("%d\t",t->data);
display(t->right);
}
}
