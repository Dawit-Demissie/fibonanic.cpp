# include<iostream>
using namespace std;
#define MAX 20
int main(){
    int arr[MAX],n,temp;
    cout<<"Enter the array you want:";
    cin>>n;
    for(int i =0;i<n;i++){
        cout<<"Enter the elements"<<(i+1);
        cin>>arr[i];
    }
    cout<<"unsorted list is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int j=1;j<n;j++){
        temp=arr[j];
        for(int i=j-1;i>=0 && temp<arr[i];i--){
        arr[i+1]=arr[i];
        arr[i]=temp;
    } 
        cout<<"pass"<<j<<"Element inserted proper place";
        for(int i=0;i<n;i++)
        cout<<arr[i]<<",";
        cout<<"\n";
    cout<<"sorted list is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    
}
    return 0;
}