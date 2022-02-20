//Simple Calculator


#include<iostream>
using namespace std;

void add(int a,int b)
{
    int c=a+b;
    cout<<"Addition"<<c;
}
void subtract(int a,int b)
{
   int c=a-b;
    cout<<"Subtraction is"<<c;
}
void multiply(int a,int b)
{
   int c=a*b;
    cout<<"Multiplication is"<<c;
}
void divide(float a,float b)
{
   float c=a/b;
    cout<<"Division is "<<c;
}

int main()
{
   int a,b,op;
   cout<<"Enter two no";
   cin>>a>>b;
   cout<<"Which operation you would like to perform"<<endl;
   cout<<"1.Add 2.Subtract 3.Multiply 4.Divide"<<endl;
   cin>>op;
   switch (op)
   {
   case 1:
       add(a,b);
       break;
    
    case 2:
       subtract(a,b);
       break;
    case 3:
       multiply(a,b);
       break;
    case 4:
       divide(a,b);
       break;
   default :
       break;
   }
  return 0;
}
