/* 
Selection Sort
Find the minimum element in unsorted array and swap it with the element at beginning
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many elements you want to sort and enter those numbers"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
                arr[j]^=arr[i]^=arr[j]^=arr[i];
        }
    }
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}