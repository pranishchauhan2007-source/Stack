#include<iostream>
using namespace std;
//Implement it with array 
class MyStack
{
  int *arr;
  int size;
  int top;
  public:
  //constructor
  MyStack (int s)
  {
    size=s;
    top=-1;
    arr= new int[s];
  }
  //push
  void push (int value)
  {
    if(top==size-1)
    {
      cout<<"Stack Overflow\n";
      return;
    }
    else
    {
      top++;
      arr[top]= value;
      cout<<"pushed "<<value<<" into the stack\n";
    }
  }
  //pop
  void pop()
  {
    if(top==-1)
    {
      cout<<"Stack Underflow\n";
    }
    else
    {
      top--;
      cout<<"popped "<<arr[top+1]<<" from the stack\n";
    }
  }
  //peek
  int peek()
  {
   if(top==-1)
   {
     cout<<"stack is empty\n";
     return -1;
   }
   else
   return arr[top];
  }
  //IsEmpty
  bool IsEmpty()
  {
   return top==-1;
  }
  //Is size
  int IsSize()
  {
    return top+1;
  }
  
};
int main()
{
  MyStack s(5);
  s.push(5);
  s.push(6);
  s.push(15);
  s.push(89);
  s.push(93);
  s.push(199);
  s.pop();
  
}