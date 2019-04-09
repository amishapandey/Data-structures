#include <stdio.h>

int main()
{
    struct node{
       int data;
       struct node *link;
    };
    struct node *START=NULL;
   
    struct node *createNode(){
        struct node *n;
        n=malloc(sizeof(struct node));
        return n;
         }
    void insertNode(){
         struct node *temp,t;
         temp=createNode();
        printf("enter the value of new node");
        int a;
        scanf("%d",&a)
        temp->data=a;
        temp->link=NULL;
        if(START==NULL)
        {
            START=temp;
        }
        else{
        t=START;
        while(t->link!==NULL){
        t=t->link;
        }
        t->link=temp;
        }
    }
    return 0;
}
