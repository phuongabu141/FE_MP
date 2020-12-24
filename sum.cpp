#include<iostream>
using namespace std;
int sumTwo(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"..."<<a<<"..."<<b<<"...."<<sumTwo(a,b);
    return 0;
}