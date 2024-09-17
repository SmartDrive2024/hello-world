#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) {

  for (int i = 0; i < size -1; ++i) {
      
     for (int j = 0; j < size - i - 1; ++j) {
  
       if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
  int arr[] = {-5, 15, 0, 20, -19};
  
  int size = sizeof(arr) / sizeof(arr[0]);
  
  bubbleSort(arr, size);
  
  cout << "Sorted Array in Ascending Order:";  
  printArray(arr, size);
}