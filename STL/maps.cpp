#include <bits/stdc++.h>
using namespace std;

void insertKeys()
{}

int main()
{
    //USING A DICTIONARY OR A HASH MAP
    int key=0,c=1;
    string value="";
    
    //Declaring a map requires specifying the datatype of the key and the associated value
    //Declaration is similar to a vector. Format: map<<key-type>,<value-type>><name>

    map<int,string>test_map1;
    map<string,int>test_map2;
    
    //Inserting a new key is done normally like a vector or an array
    //Keys will be sorted automatically (like an integer array, so key '2' will be printed before key '3')
    
    test_map1[34]="Hi!";
    test_map1[43]="Nope I aint doing it!";
    cout<<"Enter values for test map\n";
    do
    {
        cout<<"Enter key followed by value in space-separated format:\n";
        cin>>key;
        
        //std::cin>>std::ws -> ws tells cin to ignore any leading whitespaces (\n char) when taking input. Best practice to...
        //...include cin>>ws when taking string input using std::getline

        getline(cin>>ws,value);
        test_map1[key]=value;
        cin>>c;
    }
    while (c);
    
    //Size() as usual, returns the current number of elements in the container

    cout<<"Current number of keys in dictionary:"<<test_map1.size()<<endl<<"Test map 1: \n";
     
     //DECLARING AN ITERATOR USING SCOPE '::' OPERATOR
     //ITERATORS are declared using <object-type>::iterator <name>
     //Start from <object-name>.begin() until .end(), where end is the theoretical element after the last element, begin...
     //...is the theoretical element before the first element, thus i is incremented first, rather than later
     //In reality an iterator is nothing but a pointer, where the methods end() and begin() actually return the starting and ending addresses
     //They can be used for traversing STL containers such as maps,vectors,sets.

    for(map<int,string>::iterator i=test_map1.begin();i!=test_map1.end();++i) 
    cout<<i->first<<" "<<i->second<<endl;
    //'first' refers to the key, 'second' the value
}