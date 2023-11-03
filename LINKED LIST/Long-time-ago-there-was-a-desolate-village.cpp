#include <iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*head = NULL;
int i = 0,n;
int GetNth(struct node* head,int index)
{
while(n-i != index)
{
head = head -> next;
i++;
if(i == index) break;
}
return head -> data;
}
void display(node *u)
{
if(u == NULL) return;
display(u -> next);
cout<<"-->"<<u -> data;
}
int main()
{
int first;
cin>>n>>first;
node *t = new node;
t -> data = first;
t -> next = NULL;
head = t;
for(int i = 0; i< n-1 ; i++)
{
cin>>first;
node *u = new node;
u -> data = first;
u -> next = NULL;
t -> next = u;
t = u;
}
int index;
cin>>index;
node *hh = head;
cout<<"Linked list:";
display(head);
cout<<"\nNode at index="<<index<<":"<<GetNth(hh,index);
return 0;
}