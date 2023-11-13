#include<iostream>
using namespace std;


template <size_t N>
void BubbleSort(int (&arr)[N]){
    for (int i = 0; i < N-1; i++)     
        for (int j = 0; j < N-i-1; j++) 
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

template <size_t N>
void PrintArray(int (&arr)[N]){
    for (int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    cout << "Sorting Array......\n";
    BubbleSort(arr);
    PrintArray(arr);
    return 0;
}