#include <bits/stdc++.h>
using namespace std;
int sum(int a)
{  int s=0; while(a!=0)   {    s += a%16;    a=a/16;  }    return s; }
int search(int a, int b)
{
    int c=0;
    for(int i=a;i<=b;i++)
    {
        int p=sum(i);
        if(__gcd(i,p)>1)
        c++;
    }  return c;
}
int main()
{
    int t,l,r;
cin>>t;
while(t--)
{
    cin>>l>>r;
    cout<<search(l,r)<<endl;
}    return 0;
}