#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
    int* a=new int[10];
    for(int i=0;i<10;i++)
        cin>>a[i];
    cout<<a[1]<<endl;
    delete []a;
}