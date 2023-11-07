#include <iostream>
#include<queue>
using namespace std;
int main() {
  //max_heap
  priority_queue<int> maxi;

  //min_heap
  priority_queue<int, vector<int>, greater<int> > mini;

  //operations for maxi

  maxi.push(1);
  maxi.push(1);
  maxi.push(7);
  maxi.push(3);

  cout<<"the size of maxi is -> "<<maxi.size()<<endl;
  int n=maxi.size();
  for(int i=0;i<n;i++){
    cout<<maxi.top();
    maxi.pop();
    
  }
  cout<<endl;

  //operations for mini

  mini.push(5);
  mini.push(4);
  mini.push(2);
  mini.push(6);

  cout<<"the size of mini is -> "<<mini.size()<<endl;
  int m=mini.size();
  for(int i=0;i<m;i++){
    cout<<mini.top();
    mini.pop();

  }


  return 0;

  
  
  
}