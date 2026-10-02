#include<iostream>
#include<stack>
using namespace std;

int main()
{
  stack<int>s;
  s.push(3);
  s.push(66);
  s.push(73);
  cout<<s.size()<<endl;
  //top
  s.pop();
  cout<<s.top()<<endl;
  
}