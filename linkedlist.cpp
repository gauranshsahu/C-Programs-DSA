//singly linked list 
/*#include<iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;
void insert(int new_data) {
   struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
   new_node->data = new_data;
   new_node->next = head;
   head = new_node;
}
void display() {
   struct Node* ptr;
   ptr = head;
   while (ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The linked list is: "<<endl;
   display();
   return 0;
}*/

//doubly linked list
#include <stdio.h>
#include <stdlib.h>
struct node
    {
        int data;
        struct node *link;
    };
struct node *head=NULL;
struct node *cur;
struct node *ptr;
void insertatfirst()
{
    cur->link=head;
    head=cur;
}
void append()
{
    ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=cur;
}
void inserafternode()
{
    int val;
    printf("\nenter value: ");
    scanf("%d",&val);  
    ptr=head;
    while(ptr->data!=val)
    {
        ptr=ptr->link;
    }
    cur->link=ptr->link;
    ptr->link=cur;
}
void insertion()
    {   
        int ele;
        cur=(struct node *)malloc(sizeof(struct node *));
        printf("\nenter data");
        scanf("%d",&ele);
        cur->data=ele;
        cur->link=NULL;
        if (head==NULL)
        {
            head=cur;
        }
        else
        {
            int choice;
            printf("\nWhere you want to insert:\n1.At Begining 2.Append 3.At after a specific node"); 
            printf("\nPls enter the position to insert:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:insertatfirst(); break;
                case 2: append(); break;
                case 3:inserafternode(); break;
            }
        }
    } 
void deleteatfirst()
    {
        ptr=head;
        head=head->link;
        free(ptr);
    }
void deletelast()
    {
        struct node *ptr1;
        ptr=head;
        ptr1=ptr->link;
        while(ptr1->link!=NULL)
        {
            ptr=ptr1;
            ptr1=ptr1->link;
        }
        ptr->link=NULL;
        free(ptr1);
    }
void deletespecificnode()
    {
        struct node *ptr1;
        ptr=head;
        ptr1=ptr->link;
        int ele;
        printf("\nWhich element you want to delete");
        scanf("%d",&ele);
        if(ele==head->data)
        {
            deleteatfirst();
        }
        else
        {
            while(ptr1->data!=ele)
            {
                ptr=ptr1;
                ptr1=ptr1->link;  
            }
            ptr->link=ptr1->link;
            free(ptr1);
        }
    }
void remove()
{
    if(head==NULL)
    {
        printf("Link List is Empty\n");
    }
    else
    {
        if(head->link==NULL)
        {
            ptr=head;
            head=head->link;
            free(ptr);
        }
        else
        {
            int choice;
            printf("\nWhich node you want to delete: \n 1. First Node 2.Last Node 3.Specific Node");
            printf("\nPls enter the position to delete:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:deleteatfirst(); break;
                case 2: deletelast(); break;
                case 3:deletespecificnode(); break;
            }
        }
    }
}
void display()
{
    if(head==NULL)
    {
        printf("Link List is Empty\n");
    }
    else
    {
        ptr=head;
        while(ptr!=NULL)
        {
            printf("%d  ",ptr->data);
            ptr=ptr->link;
        }
    }
}
int main() {
    int choice;
    printf("1. Insertion\n");
    printf("2. Deletion\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    do
        {
            printf("\n\nEnter your choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:insertion(); break;
                case 2: remove(); break;
                case 3:display(); break;
                case 4: exit(0);
            }
        }while(choice<=4);
    return 0;
}