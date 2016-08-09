#include <stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node *next;
}*head;
void add(struct node **head, int value) {
  /* code */

  if(*head==NULL){
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next=NULL;
    *head = temp;
  }else{
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp->data=value;
    temp->next= *head;
    *head=temp;
  }
}
void print(struct node **head1) {
  /* code */
  struct node *temp;//= (struct node*)malloc(sizeof(struct node));
  temp=*head1;
  while(temp!=NULL){
    printf(" %d-",temp->data );
    temp=temp->next;
  }
}
void reverse(struct node *head){
  struct node *temp= head;
  if(temp==NULL)
    return;
  //temp=temp->next;
  reverse(temp->next);
    //temp->next=NULL;
    printf("%d  ",temp->data );

//  printf("%d  ",temp->data );
  //temp->next=NULL;

}
int main(int argc, char const *argv[]) {
  add(&head,5);
  add(&head,6);
  add(&head,7);
  add(&head,8);
  add(&head,9);
  reverse(head);
//print(&head);
  return 0;
}
