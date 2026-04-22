#include <bits/stdc++.h>
using namespace std;
int k;
int main()
{
  cin>>k;
  if (k==2 || k==0){
    cout << "NO";
  }
  else if (k%2 == 0){
    cout << "YES";
  }
  else{
    cout<< "NO";
  }
  return 0;
}