#include<iostream>
using namespace std;
int main(){

    int i,j,n,temp;
    cout<<"Enter number of elements to be sorted:";
    cin>>n;
    int arr[n];
    cout<<"Enter Numbers to be sorted\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }

    }
    cout<<"Sorted numbers are:\n";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    
}