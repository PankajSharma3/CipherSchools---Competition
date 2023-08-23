
#include <iostream>
#include <algorithm>
using namespace std;
bool Triplet(int a[], int n){
    for (int i = 0; i < n - 2; ++i) {
        int start=i+1;
        int end=n-1;
    while(start<end){
        int sum=a[i]+a[start]+a[end];
        if(sum==0){
            return true;
        }
        else if(sum>0){
            end--;
        }
        else{
            start++;
        }
    }
    }
    return false; 
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a, a + n);
    cout<<Triplet(a , n)<<endl;
    return 0;
}
