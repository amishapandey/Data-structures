#include <stdio.h>

struct node{
        int data;
        struct node *link;
    };
    
struct node* start=NULL;

//creating nodes
struct node* createNode(){
    struct node *n;
   n=(struct node*)malloc(sizeof(struct node));
   return n;
}
//inserting nodes
void insertNode(){
    struct node *temp,*t;
    temp=createNode();
    printf("enter a number");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(start==NULL)
    start=temp;
    else
    {
        t=start;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=temp;
}
}
//delete first node
void deleteNode(){
    struct node *r;
    if(start==NULL)
    printf("List is empty");
    else{
        r=start;
        start=start->link;
    free(r);
    }
}
//traversing and printing values;
void printVal(){
    struct node *t;
    t=start;
    if(start==NULL)
    printf("list is empty");
    else{
    while(t!=NULL){
    printf("\n%d",t->data);
    t=t->link;
    }
    }
}
int menu(){
    int a;
    printf("\n1.add element");
    printf("\n2.delete first element");
    printf("\n3.view list");
    printf("\n4.exit");
    printf("enter your choice");
    scanf("%d",&a);
    return a;
}
int main()
{
    while(1){
        switch(menu()){
            case 1:
                insertNode();
                break;
            case 2: 
                 deleteNode();
                 break;
            case 3:
                  printVal();
                 break;
            case 4:
             exit(0);
            default :
            printf("wrong choice");
            
            
        }
    }
    return 0;
}
