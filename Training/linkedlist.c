  #include<stdio.h>
#include<stdlib.h>
// #include<malloc.h>
struct node{
  int data;
  struct node *next;
};
struct node *head;
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
void findMiddle(struct node **head){
  struct node *temp= *head,*temp1=*head;
  //practice!!
  while (temp!=NULL && temp1->next!=NULL) {
    /* code */
    temp=temp->next;
    temp1=temp1->next->next;
  }
  printf("%d\n", temp->data );
}
int main(int argc, char const *argv[]) {
  // = (struct node*)malloc(sizeof(struct node));
  // head=NULL;
  // printf("MOID");
  add(&head,5);
  add(&head,6);
  add(&head,7);
  add(&head,8);
  add(&head,9);
  add(&head,10);
  findMiddle(&head);
  print(&head);
  return 0;
}
