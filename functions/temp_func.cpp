//Demonstrating template functions
#include <bits/stdc++.h>
using namespace std;
//Demonstrating the use of namespace
//max() is an inbuilt function, so I have to declare another namespace if I want to use the max function that
//I have created.
namespace my_funcs
{
    //Template parameter declaration; Notice how unlike other declarations (like map or vectors), the parameter name 'T' of 
    //'template' is included within < > unlike, say, vector <int> a or map <int, int>b

    template <typename T>
    T max(T a, T b)      //Defining a function using template. It can take and return values of any type 
    {
        return a>b?a:b;
    }
}

//Note: Auto inferencing does not work in this case since auto inferencing, or the 'auto' keyword cannot be used during declarations, it 
//..has to be followed with some expression or assignment.
//E.g.: auto a= 5, auto b=a+b/2 is legal. 
//auto a;auto max(auto a, auto b) is illegal as the compiler has no idea of what types a, b or the return type of max is, so 
//...it cannot deduce their types.

int main()
{
    int a=5,b=6;
    double c=4.97,d=8.12;
    char e='a',f='b';

    //Types will have to specified when using a template function or class. With the help of that info, compiler will be 
    //able to automatically create multiple versions of the same function (defined using template parameter) and implement
    //function overloading.

    cout<<"Printing int: "<<my_funcs::max<int>(a,b)<<endl; //using scope operator :: with my_functs to specify namespace to which max() belongs.
    cout<<"Printing double: "<<my_funcs::max<double>(c,d)<<endl; 
    cout<<"Printing char: "<<my_funcs::max<char>(e,f)<<endl; 
    using number=int;                                   //demonstrating the use of 'using' keyword
    cout<<"Test:"<<my_funcs::max<number>('a','b')<<endl; //since 'int' is specified, T=int is assigned, and 'a' and 'b' is implicitly converted into int.
    //This means T can only be of one type at any given instance. It cannot be both double, int at the same time
    //In such cases, the dissimilar type will be implicitly converted into the specified type.
    //In the above three cases, compiler will create a int, double and char version of max() and implement function overloading.
}
