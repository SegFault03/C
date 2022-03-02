#include <iostream>
#include <string.h>

using namespace std;

int cal(int *a, int n, int k)
{
    int i,c=1,s=0;
    if(n<k)
    {
        for(i=0;i<n;i++)
        s+=a[i];
    }
    else
    {
        for(i=1;i<=k;i++)
        s+=a[n-i];
        for(i=n-k-1;i>=0;i--)
        s+=a[i]*(1+c);
    }
    return s;
}
 
int main()
{
    int n,i,k;;
    cin>>n>>k;
    string s;int a[n]={0};
    ws(cin);
    getline(cin,s);
    for(i=0;i<s.length();i+=2)
    {if(s.at(i)!=' ')
    a[i/2]=s.at(i)-'0';}
    cout<<cal(a,n,k);
}
