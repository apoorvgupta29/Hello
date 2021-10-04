#include<iostream>
using namespace std;

int GCD(int a, int b)
{
     if(b==0)
     return a;
     else if(a==0)
     return b;
     else 
     return GCD(b,a%b);

}

int lcm(int a, int b)
{
    return (a / GCD(a, b)) * b;
}

int main()
{
    int a,b;
    cout<<"ENTER 2 NUMBERS FOR LCM FINDING";
    cin>>a>>b;
    cout<<"LCM="<< lcm(a,b);
    return 0;
}
