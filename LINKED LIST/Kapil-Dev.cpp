#include <iostream>
using namespace std;
struct node
{
int data;
struct node *next;
}*head = NULL;
void display(node *ss)
{
if(ss == NULL) return;
display(ss -> next);
cout<<"-->"<<ss -> data;
}
void swapNodes(struct node **head_ref, int x, int y){
if (x == y)
return;
node *prevX = NULL, *currX = *head_ref;
while (currX && currX->data != x) {
prevX = currX;
currX = currX->next;
}
node *prevY = NULL, *currY = *head_ref;
while (currY && currY->data != y) {
prevY = currY;
currY = currY->next;
}
if (currX == NULL || currY == NULL)
return;
if (prevX != NULL)
prevX->next = currY;
else
*head_ref = currY;
if (prevY != NULL)
prevY->next = currX;
else
*head_ref = currX;
node* temp = currY->next;
currY->next = currX->next;
currX->next = temp;
}
void create()
{
int n;cin>>n;
int rr;cin>>rr;
node *tt = new node;tt -> data = rr;
tt -> next = NULL;head = tt;
int i;
for(i=0;i<n-1;i++)
{
int a;
cin>>a;
node *q = new node;
q -> data = a;
q -> next = NULL;
tt -> next = q;
tt = q;
}
}
int main()
{create();
cout<<"before Swapping:";
display(head);
int x,y;
cin>>x>>y;
swapNodes(&head,x,y);
cout<<"\nafter Swapping:";
display(head);
return 0;
}