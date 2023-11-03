#include <iostream>
using namespace std;
struct n
{
int data;
struct n *next;
}*odd,*even,*h = NULL,*tt;
void insert(int data)
{
n *p = new n;
p -> data = data;
p -> next = NULL;
tt -> next = p;
tt = p;
}
void oodd()
{
cout<<"Odd:\n";
odd = h;
int i =1;
cout<<"[h]";
while(odd != NULL)
{
if((i%2))
{
cout<<"=>"<<odd -> data;
}
i++;
odd = odd -> next;
}
cout<<"=>[h]";
}
void eeven()
{
cout<<"Even:\n";
even = h;
int i =1;
cout<<"[h]";
while(even != NULL)
{
if(!(i%2))
{
cout<<"=>"<<even -> data;
}
i++;
even = even -> next;
}
cout<<"=>[h]";
}
void display(struct n *h)
{
cout<<"Complete linked_list:\n[h]";
while(h != NULL)
{
cout<<"=>"<<h -> data;
h = h -> next;
}
cout<<"=>[h]";
}
int main()
{
int a;
cin>>a;
tt = new n;
tt -> data = 1;
tt -> next = NULL;
h = tt;
for(int i =2; i<= a; i++)
{
insert(i);
}
n *y = h;
display(y);
cout<<"\n";
oodd();
cout<<"\n";
eeven();
return 0;
}