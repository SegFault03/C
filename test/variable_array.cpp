#include <iostream>
using namespace std;

int main()
{
    int n,q,i,k,j,q_i,q_j;

    cin>>n>>q;
    int *a[n];
    for(i=0;i<n;i++)
    {
        cin>>k;
        a[i]=new int(k);
        for(j=0;j<k;j++)
        cin>>a[i][j];
    }
    while(q--)
    {
        cin>>q_i>>q_j;
        cout<<a[q_i][q_j]<<endl;
    }
}