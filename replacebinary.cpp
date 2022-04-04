#include <iostream>
#include <string>
using namespace std;

int countflips(string s){
int flips=0;


for (int i = 0; i < s.length(); i++)
{
    if (s[i]=='0')
    {  

        for (int j=i; j < s.length(); j++)
        {
            if (s[j]=='0')
            {
                s[j]='1';
            }
            else{
                break;
            }
            
        }
      flips++;
    }
  
}

return flips;


}

int main(){

string s;
int flips;
cin>>s;
cout<<countflips(s);
return 0;
}