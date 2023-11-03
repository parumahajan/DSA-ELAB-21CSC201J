#include <bits/stdc++.h> 
using namespace std; 
struct node 
{ 
int data; 
node *next; 
}; 
void push(node** start, int new_data){ 
node* p1 = new node(); 
p1->data = new_data; 
 p1->next = *start; 
*start = p1; 
} 
void printList(node *node){ 
while (node != NULL) 
{ 
cout<<"->"<<node->data; 
node = node->next; 
} 
} 
int main(){ 
node *start = NULL; 
int n,t; 
cin>>n; 
while(n--){ 
cin>>t; 
push(&start,t); 
}
cout<<"Linked List:"; 
printList(start); 
return 0; 
cout<<"p1->next=start; void display()"; 
}