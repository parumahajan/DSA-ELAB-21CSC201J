#include<iostream>
using namespace std;
void printSums(int N){
  int initial = 1;
  while(initial < (N+1)/2){
    int sum=0;
    for(int i=initial; i<=(N+1)/2; i++){
      sum = sum + i;
      if(sum == N){
        for(int j=initial; j<=i; j++){
          cout << j << " ";
        }

        cout << endl;
        break;
      }
    }
    initial++;
    sum = 0;
  }
}

int main() {

  int n;
  cin >> n;

  printSums(n);
return 0;
}