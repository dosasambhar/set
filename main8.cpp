#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a[3]={1,2,3};
  int n=3;
  int b[4]={4,5,6,7};
  int m=4;

  vector <int> ans;

  for(int i=0; i<n; i++){
    ans.push_back(a[i]);
  }

  for(int i =0; i<m; i++){
    ans.push_back(b[i]);
  }

  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
}