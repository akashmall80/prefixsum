#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    //Make a prefix array
    int ps[n]={0}; //first initialize all the elements to 0
    // for(int i=0; i<n; i++)
    // {
    //     cout<<ps[i]<<" ";
    // }
    ps[0]=arr[0]; //make the first element of ps[0]=arr[0]
    for(int i=1; i<n; i++)
    {
        ps[i]=ps[i-1]+arr[i];
    }
    // for(int i=0; i<n; i++)
    // {
    //     cout<<ps[i]<<" ";
    // }
    
    //make subarray
    int largest=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(i==0)
            {
                int sum=ps[j];
                cout<<sum<<endl;
            }
            else if(i>0)
            {
               int sum=ps[j]-ps[i-1];
                cout<<sum<<endl;
            }
        }
    }
   
    return 0;
}