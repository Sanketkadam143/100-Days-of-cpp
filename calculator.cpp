//Simple Calculator


#include<iostream>
using namespace std;

int add(int a,int b)
{
    return a+b;
}
int subtract(int a,int b)
{
  return a-b;
}
int multiply(int a,int b)
{
   return a*b;
}
float divide(float a,float b)
{
 return a/b;
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
      cout<<"Addition is "<< add(a,b);
       break;
    
    case 2:
       cout<<"Subtraction is "<<subtract(a,b);
       break;
    case 3:
       cout<<"Multiplication is "<<multiply(a,b);
       break;
    case 4:
      cout<<"Division is "<< divide(a,b);
       break;
   default :
       break;
   }

  return 0;

}
