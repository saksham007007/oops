#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of array : ";
    for(int i=0;i<n;i++) cin>>A[i];
    int maxSum = -100000;
    for(int i=0;i<n;i++){
        int sum=0;
        int idx = i;
        int len = 1;
        while((len+idx)<=n){
            for(int j=idx ;j<(len+idx);j++){
                sum = sum + A[j];
            }
            idx = idx +len;
            len++;
        }
        maxSum = max(maxSum,sum);
    }
    cout<<"The best index is : "<<maxSum<<endl;

    return 0;
}
