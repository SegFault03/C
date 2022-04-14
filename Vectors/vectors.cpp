#include <iostream>
#include <vector>
using namespace std;

//NOTES:
//1. The vector class is a dynamic array.
//2. That means it can carry elements of any type, also it can change it's own's size.
//3. The vector class is a template class, also called a container, belongs to the STL.
//4. The vector class is a container, it can hold elements of any type.
//5. The 'auto' keyword is used for auto-inference of the type of the elements. It is useful when you don't know the type of the elements.

void print(vector<int> array)
{
    for(auto i:array)//Use of the 'auto' keyword is to avoid declaring the datatype of i, it will be automatically inferred at runtime
    {
        cout<<i<<" ";
    }
}

int main()
{
    int k, j,n;
    vector<int>array={1,2,3,4,5,6,7,8,9,10,11};
    //iterating through the vector array
    for(k=0;k<array.size();k++) //<vector>.size() gives us the number of elements in the vector
    {
        cout<<array[k]<<" ";
    }
    //Alternative way to traverse the vector:
    print(array);
    //updating the vector using auto
    for(auto &i:array)
    {
        i=i*2;
    }
    print(array);
    //inserting elements in the vector
    vector<int> array2;
    cout << "Enter the number of elements you want to insert in the vector: "<<endl;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        array2.push_back(x);//push_back() adds elements at the end of the vector
    }
    print(array2);
    //access elements at a given position
    cout << "Enter the position of the element you want to access: "<<endl;
    cin >> j;
    cout << "The element at position "<<j<<" is "<<array2.at(j)<<endl;//<vector-name>.at(<position>) gives the element at the given position...
    //works similar to the [] operator
    //erasing elements from the end of the vector
    array2.pop_back();//<vector-name>.pop_back() removes the last element of the vector
    cout <<"The new size is "<<array2.size()<<endl;
}