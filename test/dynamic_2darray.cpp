#include <iostream>
#include <cstdlib>

using namespace std;

void reallocate(int **arr,int r,int c)
{
    int ch,posr,posc,i,j,*temp=NULL;
    cin>>ch;
    if(ch==1)
    {
        cin>>posr;
        temp=arr[posr-1];
        for(i=posr-1;i<r-1;i++)
        arr[i]=arr[i+1];
        free(temp);
        arr= (int**)realloc(arr,(r-1)*sizeof(int*));
        print(arr,r-1,c);
    }
    else
    {
        cin>>posr>>posc;
        
    }
}
int main()
{
    int r,c;
    cin>>r>>c;
    int **arr=(int**)malloc(r*sizeof(int*));
    for(int i=0;i<r;i++)
    {
        *(arr+i)=(int*)malloc(c*sizeof(int));
        for(int j=0;j<c;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        cout<<arr[i][j]<<",";
        cout<<endl;
    }
}