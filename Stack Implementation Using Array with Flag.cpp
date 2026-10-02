#include<iostream>
using namespace std;
//Implement it with array 
class MyStack
{
  int *arr;
  int size;
  int top;
  
  public:
  int flag;
  //constructor
  MyStack (int s)
  {
    size=s;
    top=-1;
    arr= new int[s];
    flag =0;
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
      if(top==-1)
      flag=1;
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
  s.push(-1);
  int value=s.peek();
  if(s.flag==0)
  cout<<value<<endl;
  
}