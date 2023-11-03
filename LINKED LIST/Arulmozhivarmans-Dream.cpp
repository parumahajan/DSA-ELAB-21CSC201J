#include <iostream>
using namespace std;
int n;
struct node
{
  int val;
  node *next=NULL;
};
struct node* func(int n)
{
    int a=1;
    node *head =new node;
    head->val=a;
    node *temp=head;
    while(a<=n)
    {
        a+=2;
        if(a>n)
        break;
        node *nxt=new node;
        nxt->val=a;
        temp->next=nxt;
        temp=nxt;
    }
    return head;
    
}
void insert_Data(struct node **head) 
{
 cin>>n;   
 *head=func(n);
}
void delete_Alt(struct node **head){
    node *temp=*head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            cout<<temp->val;
            break;
        }
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head;
    insert_Data(&head);
    delete_Alt(&head);
 
    return 0;
}