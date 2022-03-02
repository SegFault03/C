#include <iostream> //header file containing standard I/O functions; Notice how the ".h" extension is not used
#include <cstdlib>
int* insert(int *a, int);
int* del(int*, int);
void display(int *a, int);

using namespace std; //using the namespace called "std" or standard to avoid using the std:: prefix

/* NOTE: Namespace in C++ is used for differentiating common functions in different classes. The--
--scope (<namespace>::<function-name>) operator is used for specifying which "scope" or "class" the function--
--belongs to. Ignoring the "using namespace std" will force us to use the std:: prefix. E.g: std::cin--
--std::string or std::endl */

int main()
{
    int n, *a, c,size;
    cout<<"How many indexes?"<<endl; //<< called the insertion operator, used for op overloading, endl is the same as "\n"
    cin >>n;                         //>> called the extraction operator
    a = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Press 1 to insert, 2 to delete, 3 to display and 0 to exit"<<endl;
    cin>>c;
    while(c)
    {
        if(c==1)
        {
            a=insert(a,n);
            n++;
        }
        else if(c==2)
        {
            a=del(a,n);
            n--;
        }
        else
        display(a,n);
        cout<<"Press 1 to insert, 2 to delete, 3 to display and 0 to exit"<<endl;
        cin>>c;
    }
}

int* insert(int *a, int n)
{
    int p,e;
    cout<<"Enter position"<<endl;
    cin>>p;
    a=(int*)realloc(a,(n+1)*sizeof(int));
    for(int i=n;i>=p;i--)
    a[i]=a[i-1];
    cout<<"enter the element"<<endl;
    cin>>e;
    a[p-1]=e;
    return a;
}

int* del(int *a,int n)
{
    int p;
    cout<<"Enter position"<<endl;
    cin>>p;
    for(int i=p-1;i<n;i++)
    a[i]=a[i+1];
    a=(int*)realloc(a,(n-1)*sizeof(int));
    return a;
}

void display(int *a, int n)
{
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
}
