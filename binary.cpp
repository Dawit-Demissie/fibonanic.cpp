#include <iostream>
using namespace std;
int binary(int list[],int key){
int l=0;
int r=4;
int mid;
while(l<=r){
    mid =(l+r)/2;
    if(key==list[mid])
    return mid;
    else if(key<list[mid])
    r =mid-1;
    else
    l=mid+1;
}
return -1;
}
int main(){
    int arr[5]={32,55,44,21,12};
    int b;
    cout<<"Enter the number you find:";
    cin>>b;
   cout<< binary(arr,b);
}