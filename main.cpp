#include <iostream>
using namespace std;

// bubble sort algorithm
void bubble_sort(int arr[],int n){
     for(int i=0;i<n;i++){
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
             // performing swap
             int temp = arr[j];
             arr[j] = arr[j+1];
             arr[j+1] = temp;
           }
       }
     }
}
// main
int main(){
  int len;
  // ask the length of array
  cout << "Length of Array: ";
  cin >> len;
  int arr[len];
  int num;
  cout << endl;
  // enter the numbers in array;
  for(int i=0;i<len;i++){
    cout << "Enter Number: ";
    cin >> num ;
    arr[i]=num;
  }
  bubble_sort(arr,len); // bubble sort function call
//displaying the sorted array
  cout << endl;
  cout << "Sorted Array : " <<endl;
  for(int k=0;k<len;k++){
    cout << arr[k]<<endl;
  }
}