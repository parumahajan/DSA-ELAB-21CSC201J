#include <bits/stdc++.h>
using namespace std;
int main(){
    int curr;
    multiset<char> mp;
    string names[] = {"","ONE","TWO","THREE","FOUR","FIVE","SIX","SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE"};
    while(cin>>curr){
        if(curr==999){
            cout<<"0999"<<'.'<<' ';
            break;
            }
            cout<<curr<<' ';
            if(curr>12)continue;
            string now = names[curr];
            for(auto ch:now){
                mp.insert(ch);
                }
                }
                for (auto ch : mp) {
                    cout<<ch<<' ';
                    }
                    return 0;
                    printf("char nums[13][256]for(n=0;n<26;n++)")
                    ;
                    }