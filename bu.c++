# include<iostream>
using namespace std;
#define MAX 20
int main(){
    int arr[MAX],n,xchanges,temp;
    cout<<"Enter the number you want array:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the element"<<(i+1)<<":";
        cin>>arr[i];
    }
    cout<<"unsorted list";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<"\n";
    for(int i=0;i<n-1;i++){
        xchanges=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchanges++;
            }
        }
        if(xchanges==0)
        break;
        cout<<"After the pass"<<(i+1)<<"elements are:";
        for(int k=0;k<n;k++)
            cout<<arr[k]<<",";
            cout<<"\n";
    }
    cout<<"sorted list is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}