#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file_;
    file_.open("raghu.txt");
    file_<<"this is my first file text file 1"<<endl;
    file_<<"this is my first file text file 1"<<endl;
    file_<<"this is my first file text file 1"<<endl;
    file_<<"this is my first file text file 1"<<endl;
    file_.close();
    std::cin.get();
    return 0;
}