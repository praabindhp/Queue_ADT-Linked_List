#include<stdio.h> 
#include<stdlib.h> 
struct node 
{ 
int data; 
struct node *link; 
};struct node *cur,*first,*last; 
void create(); 
void enqueue(); 
void dequeue(); 
void display(); 
void create() 
{ 
printf("\nENTER THE FIRST ELEMENT: "); 
cur=(struct node *)malloc(sizeof(struct node)); 
scanf("%d",&cur->data); 
cur->link=NULL; 
first=cur; 
last=cur;} 
void enqueue() 
{printf("\nENTER THE NEXT ELEMENT: "); 
cur=(struct node *)malloc(sizeof(struct node)); 
scanf("%d",&cur->data); 
cur->link=NULL; 
last->link=cur; 
last=cur;} 
void dequeue() 
{if(first==NULL) 
{printf("\t\nQUEUE IS EMPTY\n"); 
} 
else 
{cur=first; 
first=first->link; 
cur->link=NULL; 
printf("\n DELETED ELEMENT IS %d\n",cur->data); 
free(cur); 
}} 
void display() 
{cur=first; 
printf("\n"); 
while(cur!=NULL) 
{ 
printf("\t%d",cur->data); 
cur=cur->link; 
}} 
void main() 
{ 
int ch; 

while(1) 
{ 
printf("\n\n 1.CREATE \n 2.ENQUEUE \n 3.DEQUEUE \n 4.EXIT \n"); 
printf("\nENTER YOUR CHOICE : "); 
scanf("%d",&ch); 
switch(ch) 
{ 
case 1: 
			create(); 
			display(); 
			break; 
case 2: 
			enqueue(); 
			display(); 
			break; 
case 3: 
			dequeue(); 
			display(); 
			break; 
case 4: 
			exit(0);
        }
    }
}