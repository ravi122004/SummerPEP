#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=-1;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1] &&){
            idx=i;
        }
    }
    cout<<"This is the first breaking point :"<<idx;
}
