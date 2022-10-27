
#include"bits/stdc++.h"
using namespace std;
int partition(int start, int end, vector<int>&v){
   int pivot = v[end];  
    int x = (start - 1); 
    for(int i = start;i < end;i++){
        if(v[i] < pivot){
            x++; 
            swap(v[x], v[i]);
        }
    }
    swap(v[x+1], v[end]);
    return (x+1);
 
}
void quick_sort(int start , int end, vector<int>&v){
  if(start < end){
    int pivot = partition(start, end, v);
    quick_sort(start, pivot-1, v);
    quick_sort(pivot +1, end,v);
  }
}
int32_t main(){
      int n;
      cin>>n;
      vector<int>arr(n);
      for(int i=0;i<n;i++){
        cin>>arr[i];
      }
      quick_sort(0,n-1,arr);
       
    return 0;
}
