#include <bits/stdc++.h>
using namespace std;

int main()
{
    //USING A DICTIONARY OR A HASH MAP
    int key=0,c=1;
    string value="";
    map<int,string>test_map1;
    map<string,int>test_map2;
    test_map1[34]="Hi!";
    test_map1[43]="Nope I aint doing it!";
    cout<<"Enter values for test map\n";
    do
    {
        cout<<"Enter key followed by value in space-separated format:\n";
        cin>>key;
        ws(cin);
        getline(cin,value);
        test_map1[key]=value;
        cin>>c;
    }
    while (c);
    cout<<"Current number of keys in dictionary:"<<test_map1.size()<<endl<<"Test map 1: \n";
    for(map<int,string>::iterator i=test_map1.begin();i!=test_map1.end();++i)  //DECLARING AN ITERATOR USING SCOPE '::' OPERATOR
    cout<<i->first<<" "<<i->second<<endl;
}