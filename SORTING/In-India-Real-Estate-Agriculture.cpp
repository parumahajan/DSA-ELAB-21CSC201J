#include<bits/stdc++.h>
using namespace std;
int b,c=0;
void heapsort(int x[],int n)
{
    sort(x,x+n);
}
void makeheap(int x[],int n)
{
    c=0;
    int i=0,sum=0;
    while(i<n && sum<=b)
    {
        sum += x[i];
        if(sum>b)
        break;
        c++;
        i++;
    }
    
}
int main()
{
  int t,n;
  cin>>t;
  while(t--)
  {
      cin>>n>>b;
      int a[n];
      for(int i=0;i<n;i++)
      cin>>a[i];
      heapsort(a,n); 
      makeheap(a,n);
      cout<<c<<endl;
  }
    return 0;
}