#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s; int i;
    cout<<"Enter the word"<<endl;
    getline(cin,s);
    cout << "The line is:"<< s<<endl;
    string a[5];
    cout<<"Enter the string array:"<<endl;
    for(i=0;i<5;i++)    
    getline(cin,a[i]);
    for(i=0;i<5;i++)
    cout<<"word no."<<i<<"is= "<<a[i]<<endl;
    for(i=0;i<5;i++)
    {   cout<<"The reversed word no.: "<<i<<"is :";
        for(int j=a[i].length()-1;j>=0;j--)
        cout<<a[i].at(j);
        cout<<endl;
    }

}