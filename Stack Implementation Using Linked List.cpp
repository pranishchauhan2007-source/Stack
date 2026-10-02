#include<iostream>
using namespace std;
//Implement it with array 
class Node
{
  public:
  int data;
  Node *next;
  
  Node(int value)
  {
    data=value;
    next=NULL;
  }
};
class MyStack
{
  Node *top;
  int size;
  public:
  //constructor
  MyStack ()
  {
    top=NULL;
    size=0;
  }
  //push
  void push (int value)
  {
     Node *temp= new Node(value);
     if(temp==NULL)//heap full
     {
       cout<<"Stack Overflow\n";
     }
     else
     {
      temp->next=top;
      top=temp;
      size++;
      cout<<"pushed "<<value<<" into the stack\n";
     }
  }
  //pop
  void pop()
  {
    if(top==NULL)
    {
      cout<<"stack underflow";
    }
    else
    {
     Node *temp=top;
     cout<<"popped "<<temp->data<<" from the stack\n";
     top=top->next;
     delete temp;
     size--;
    }
  }
  //peek
  int peek()
  {
   if(top==NULL)
   {
     cout<<"stack is empty\n";
     return -1;
   }
   else
   return top->data;
  }
  //IsEmpty
  bool IsEmpty()
  {
   return top==NULL;
  }
  //Is size
  int IsSize()
  {
    return size;
  }
  
};
int main()
{
  MyStack s;
  s.push(9);
  s.push(39);
  s.push(29);
  s.push(79);
}