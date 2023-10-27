#include<bits/stdc++.h>
using namespace std;
int main() {
    long long int n, d;
    scanf("%lld%lld", &n, &d);
    long long int a[n], ind = 0;
    for(int i = 0; i < n; i++) {
        scanf("%lld", &a[i]);
        if(i) a[i] += a[i-1];
    }
    int i= n-1;
    while(a[i]==a[n-1]) {
        i--;
    }
    n = i+1;
    for(int i = 0; i < n; i++) {
        while(ind <= i && a[i] < (i-ind+1)*d) {
            ind++;
            }
        }
        printf("%lld", ind+1);
}