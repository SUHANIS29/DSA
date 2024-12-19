#include<stdio.h>
#include <stdlib.h>
#define null 0
struct node{
  int data;
  struct node *right;
  struct node *left;
    
};

struct node* create(){
  struct node* newnode;
  newnode=(struct node*)malloc(sizeof(struct node));
  int x;
  printf("enter value to insert (-1 for null)\n");
  scanf("%d",&x);
  if(x==-1){
      return null;
  }
  newnode->data=x;
  
  printf("enter left child of %d \n",x);
  
  newnode->left=create();
  
   printf("enter right child of %d \n",x);
  
  newnode->right=create();
  
  
    
};


int main(){
    struct node* root;
    root=create();
    return 0;
}