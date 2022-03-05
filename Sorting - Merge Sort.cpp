/* 
Merge Sort
- Divide and Conquer
- Merge by taking two pointers and comparing them to get minimum
- Pick the minimum and that side's pointer moves
*/
#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;
    
    int a[n1], b[n2]; //temp arrays
    
    //Saving the parts to be merged in two arrays
    for(int i=0;i<n1;i++)
        a[i]=arr[l+i];
    for(int i=0;i<n2;i++)
        b[i]=arr[mid+1+i];
        
    /*
    - i and j being two pointers, compare to get MIN
    - MIN gets picked and put in merged array incrementing MIN side pointer(i or j)
    */
    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++; i++;
        }
        else
        {
            arr[k] = b[j];
            k++; j++;
        }
    }
    
    while(i<n1){
        arr[k] = a[i];
            k++; i++;
    }
    while(j<n2){
        arr[k] = b[j];
            k++; j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main()
{
    int n;
    cout<<"Enter how many elements you want to sort and enter those numbers"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    mergeSort(arr,0,n-1);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}