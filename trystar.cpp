#include<iostream>
using namespace std;
int main()
{
    int i,j,k=0,rows;
    cout<<"enter the number of rows:";
    cin>>rows;
    for(i=0;i<=rows;++i)    
    {
        for(j=0;j<=i;++j)
        cout<<++k<<" ";
        cout<<"\n";
    }
return 0;
}