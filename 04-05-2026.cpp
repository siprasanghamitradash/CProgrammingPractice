#include <iostream>
using namespace std;

// 1/ selection qsort
// linear bsearch
// find sum of array lement using func
// print lis of vowel frm name
// check prime or not
// structures

void Sum(int arr[],int n){
  int sum =0;
  for(int i=0;i<n;i++){
    sum+=arr[i];
  }
  cout<<"Sum: "<<sum;
}

int Prime(int n){
  for(int i=2;i<n/2;i++){
    if(n%i==0){
      return 0;
    }
  }
  return 1;
}

int main() 
{
    // SELECTION SORT
    int arr[] ={89,67,17,90,87,25,35,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
    // LINEAR SEARCH
    int target = 67;
    cout<<"Target: "<<target<<"\n";
    int temp = 0;
    for(int i=0;i<n;i++){
        if(target==arr[i]){
            cout<<"Location: "<<i;
            temp=1;
            break;
        }
    }
    if (temp==0){
      cout<<"Location: "<<-1;
    };
    cout<<"\n";
    
    Sum(arr,n);
    cout<<"\n";
    cout<<"Prime: ";
    for(int i=0;i<n;i++){
      if(Prime(arr[i])){
        cout<<arr[i]<<" ";
      }
    }
    
    
}