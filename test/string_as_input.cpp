#include <bits/stdc++.h>
using namespace std;
//Demonstrating how to take string as an input
//and convert it to an array of integers
//Also demonstrating the use of strtok()

int main()
{
    string s,temp="";int j;
    cout<<"Enter a string: "<<endl;
    getline(cin,s);
    s+=" ";//adding a space at the end of the string
    vector<int>list;
    int l=s.length();
    j=0;
    //Extracting the string tokens
    for(int i=0;i<l;i++)
    {
        if(s.at(i)!=' ')
        temp+=s.at(i);
        else
        {
            list.push_back(stoi(temp));//converting string to integers
            temp="";
        }
    }
    cout<<"The integers are: "<<endl;
    for(int i: list)
    cout<<i<<endl;
}