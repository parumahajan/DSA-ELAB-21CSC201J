#include <bits/stdc++.h>
using namespace std;
struct Node {
int data;
struct Node *next; 
}*head = NULL;
void sortedInsert(struct Node** head_ref, struct Node* new_node)
{
Node* current;
if (*head_ref == NULL || (*head_ref)->data
>= new_node->data) {
new_node->next = *head_ref;
*head_ref = new_node;
}
else {
current = *head_ref;
while (current->next != NULL && current->next->data< new_node->data)
{
current = current->next;
}
new_node->next = current->next;
current->next = new_node;
}
}
Node* newNode(int new_data)
{
Node* new_node = new Node();
new_node->data = new_data;
new_node->next = NULL;
return new_node;
}
void display()
{
Node* temp = head;
while (temp != NULL) {
if(temp-> next != NULL)
cout<<temp->data<<" ";
else
cout<<temp -> data;
temp = temp->next;
}
}
int main()
{
int j;
cin>>j;
int first;
cin>>first;
Node* new_node = newNode(first);
sortedInsert(&head, new_node);
for (int i = 0; i < j - 1 ; ++i)
{
int m;
cin>>m;
new_node = newNode(m);
sortedInsert(&head, new_node);
}
display();
return 0;
}