#include <iostream>  
using namespace std;  

int main()
{
    int arr[]={2,3,3,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
        arr[i]=arr[i]-1;

    for(int i=0;i<n;i++)
    {
        arr[arr[i]%n]=arr[arr[i]%n]+n;
    }

    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" occuring "<<arr[i]/n<<" times "<<endl;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i]%n+1;
    }
}

