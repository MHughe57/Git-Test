

#include <iostream>

using namespace std;

int sum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += 1;
  }
  return sum;
}


int main(){
  int n;
  cout << "Please input a number: " ;
  cin >> n;
  cout << "The Sum of numbers from 1 to " << n << " is " << sum(n) << "." << endl; 
  return 0;
}

