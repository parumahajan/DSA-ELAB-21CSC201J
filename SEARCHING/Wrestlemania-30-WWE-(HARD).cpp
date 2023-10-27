#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;
    cin>>t;
    for(i=0; i<t; i++){
        char s[10];
        cin>>s;
        int z=strlen(s);
        int cnt=0;
        for(int i=0;i<=z;i++){
            if(s[i]=='2'){
                for(int j=i;j<z;j++)
                if(s[j]=='1')
                cnt++;
                }
                }
                if(cnt>0)
                cout<<"The streak is broken!"<<endl;
                else
                cout<<"The streak lives still in our heart!"<<endl;
                }
                return 0;
                cout<<"if(n%21==0)";
                }