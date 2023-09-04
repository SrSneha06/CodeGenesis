Binary search:
CODE:
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"no of nos:";
    cin>>n;
    int arr[n];
    cout<<"enter the nos:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }    
        }
    }
    cout<<"Number to find";
    int a;
    cin>>a;
    int l=0,u=n-1;
    while(true){
        int m=(u+l)/2;
        if(arr[m]==a){
            cout<<"succesfully searched ";
            cout<<m+1;
            break;
        }
        else if(arr[m]>a){
            u=m-1;
        }
        else if(arr[m]<a){
            l=m+1;
        }
        if(u==l+1){
            cout<<"not found";
            break;
        }
    }
    

    return 0;
}
