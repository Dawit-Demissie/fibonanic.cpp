# include <iostream>
using namespace std;
#define MAX 20
int main(){
    int arr[MAX],smallest,n,temp;
    cout<<"Enter the you want array size?";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter the elements"<<(i+1)<<",";
        cin>>arr[i];
    }
    cout<<"unsorted list:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    cout<<"\n";
    for(int i=0;i<n;i++){
        smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[smallest]>arr[j])
            smallest=j;
        }
        if(i!=smallest){
            temp=arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=temp;
        }
        cout<<"After the pass"<<(i+1)<<"elements are:";
        for(int k=0;k<n;k++)
        cout<<arr[k]<<",";
        cout<<"\n";
    }
    cout<<"sorted list is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}