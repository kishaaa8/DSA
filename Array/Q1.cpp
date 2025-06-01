#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool has_duplicate(vector<int>& arr){
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++){
        if (arr[i] == arr[i + 1]){
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);
    
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    if (has_duplicate(arr)){
        cout<<"array has dupliacte"<<endl;
    }
    else{
        cout<<"array has no dupliacte"<<endl;
    }
}