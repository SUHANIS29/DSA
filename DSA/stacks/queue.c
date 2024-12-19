//implememnt og queue
#include<stdio.h>
#define max 50
int a[max];
int front=-1,rear=-1;
int i,val;
void insert();
void del();
void display();
int main(){
    int op;
    while(op!=4){
    printf("menu");
printf("\n 1.insert\n 2.delete \n 3.dispaly \n4.exit\n");
scanf("%d",&op);
switch(op){
    case 1:
    printf("add element:\n");
    scanf("%d",&val);
    insert();
    break;
    case 2:
    del();
    break;
    case 3:
    printf("queue is:\n");
    display();
    break;
    case 4:
    printf("exiting");
    break;
}
        
        
        
    }}
    void insert(){
        if(front==max-1){
            printf("que full");
        }
        else{
            front=0;
        
           
            rear++;
             a[rear]=val;
        }  
        
    }
void del(){
    if(front==-1||front>rear){
        printf("empty");
    }
    else{
        printf("del is:%d \n",a[front]);
        front++;
    }
}
void display(){
    if(front==-1){
        printf("empty");
    }
    else{
        for(i=front;i<=rear;i++){
            printf("%d\n",a[i]);
        }
    }
}