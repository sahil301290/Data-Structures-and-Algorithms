#include <iostream>
using namespace std;
#define SIZE 5
void insertionSort(int arr[SIZE]){
    int i,j;
    
    cout << "Array before insertion sort\n";
    for(i=0;i<SIZE;i++){
        cout << arr[i] << " ";
    }
    
    for(i=1;i<SIZE;i++){
        int current = arr[i];
        j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    
    cout << "\nArray after insertion sort\n";
    for(i=0;i<SIZE;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[SIZE];
    for(int i = 0; i<SIZE; i++)
        cin >> arr[i];
    insertionSort(arr);
    return 0;
}