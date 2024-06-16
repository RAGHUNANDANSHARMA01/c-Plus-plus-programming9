#include<iostream>
using namespace std;
int main()
{
    int x=1;
    int number=0;
    int sum=0;
    while(x<=3)
    {
        cout<<"input any value:";
        cin>>number;
        sum=sum+number;
        x++;
    }
    cout<<"the sum number is :"<<sum<<endl;
    return 0;
}