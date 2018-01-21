#include<iostream>
using namespace std;
int main()
{
const int size=100;
char str[size];
int smallletter=0,largeletter=0,digit=0;
int i=0;
while(str[i]!='\0')
{
    if(str[i]>='A' && str[i]<='Z')
    {
        largeletter++;
    }
    else if(str[i]>='a' && str[i]<='z')
    {
        smallletter++;
    }
    else
    {
        digit++;
    }
    i++:
}
cout<<"Number of large letters in the string is:"<<" "<<largeletter<<endl;
cout<<"Number of small letters in the string is:"<<" "<<smallletter<<endl;
cout<<"Number of digits in the string is:"<<" "<<digit<<endl;
}
