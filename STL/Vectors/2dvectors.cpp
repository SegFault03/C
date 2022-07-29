#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input="";
    vector<vector<int>>array;       //each row is a vector
    cout<<"Enter each row of numbers in space separated format, enter 'END' to terminate:"<<endl;
    getline(cin>>ws,input);
    while(input!="END")
    {    
        vector<int>row;             //creating a new row
        string temp="";
        input+=" ";
        for(auto i:input)
        {
            if(i==' ')
            {
                row.push_back(stoi(temp));          //pushing the number to the row
                temp="";
            }
            else
            temp+=i;
        }
        array.push_back(row);                       //pushing the row to the array
        getline(cin>>ws,input);
    }
    cout<<"The array:"<<endl;
    for(int col=0;col<array.size();col++)           //array can be printed like a normal 2d array
    {
        for(int row=0;row<array[col].size();row++)
        cout<<array[col][row]<<" ";
        cout<<endl;
    }
}