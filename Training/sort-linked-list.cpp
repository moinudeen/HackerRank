#include<iostream>
#include<stack>
using namespace std;
struct node{
	char data;
	node *next;
	node *prev;
	// node(){
	// 	next=NULL;
	// 	prev=NULL;
	// }
}*head=NULL;
void push( char d){
	if(head==NULL){
		node* temp =new node;
		temp->data=d;
		temp->next=NULL;
		head=temp;
		// head->next=NULL;
	}else{
		node* temp =new node;
		temp->data=d;	
		temp->next=head;
		head=temp;
	}
}
// stack <node> s;
void print(){
	node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void sort(){
	node *temp1=head;
	while(temp1!=NULL){
		if((head->data) > (head->next->data)){
			node *temp =head;
			head=head->next;
			head->next=temp;
		}
		temp1=temp1->next;
	}

}
int main(int argc, char const *argv[])
{
	push('a');
	push('b');
	push('x');
	//sort();
	print();
	return 0;
}