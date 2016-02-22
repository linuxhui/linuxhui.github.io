#include <iostream>

using namespace std;

void print(int a[], int n, int i){
  cout  << i << ":";
  for(int j=0; j < 8; j++){
    cout << a[j] << " " ;
  }
  cout << endl;
}

int main()
{
  int a[8] = { 1, 3, 4, 10,20,11, 33, 21};
  print( a , 1, 1);
  return 0;
}

