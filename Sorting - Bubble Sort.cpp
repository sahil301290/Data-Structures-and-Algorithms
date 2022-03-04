/*
    ------------BUBBLE SORT--------------
    Repeatedly swap two adjacent elements if in wrong order
    SIZE-1 iterations needed to get the sorted array
    1st iteration - Check till SIZE-1
    2nd iteration - Check till SIZE-2
    ...
    ith iteration - Check till SIZE-i
*/
#include <iostream>
using namespace std;
#define SIZE 5
void bubbleSort(int arr[SIZE]){
    int i,j;
    
    cout << "Array before bubble sort\n";
    for(i=0;i<SIZE;i++){
        cout << arr[i] << " ";
    }
    
    int counter = 1;
    while(counter<SIZE){
        for(i=0;i<SIZE-counter;i++){
            if(arr[i]>arr[i+1]){
                arr[i]^=arr[i+1]^=arr[i]^=arr[i+1];
            }
        }
        counter++;
    }
    
    cout << "\nArray after bubble sort\n";
    for(i=0;i<SIZE;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[SIZE];
    for(int i = 0; i<SIZE; i++)
        cin >> arr[i];
    bubbleSort(arr);
    return 0;
}