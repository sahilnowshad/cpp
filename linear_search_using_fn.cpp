#include<iostream>
using namespace std;
int search(int a[],int n, int key){
    for(int i=0;i<n;i++){
        if(key==a[i]){
            return i;
        }

    }
    return -1;
}
  int main(){
    int a[]={2,4,5,7,10,9,11};
    int k;
    cout<<"enter an element to be searched";
    cin>>k;
    int index=search(a,7,k);// yaha call dhe iss sai int a[]=a,n=7,key=k
    cout<<"element found at index:"<<index<<endl;
  }