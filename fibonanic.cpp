# include<iostream>
using namespace std;
int main(){
         double first=0;
        double second=1;
        double next;
        double y;
        cout<<"Enter the number you wan the fibonanic sequence?";
        cin>>y;
        if(y<0){
          cout<<"the enter number is invalid play try again!";
        }
        for(int i=0;i<=y;i++){
            if(i<=1)
            next=i;
            else{
                next=first+ second;
                first=second;
                second=next;
            }
            cout<<next<<" ";
           }
           
}