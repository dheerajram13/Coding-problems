#include <iostream>

using namespace std;
// Finding the missing number in an Array:
//Algorithm:
//Created a function called missing_number
// It sums the array values as sum1 and sums the numbers(n*(n+1)/2).
// Subtracting the sum2- sum1 and displaying the value.
void missing_number(int a[],int n){
    int x = n+1;
    int i,sum = 0;
    for(i=0;i<n;i++)
        sum += a[i];
    int sumarr = 0;
    sumarr = (x*(x+1))/2;
    cout<<(sumarr - sum);
}

int main() {
 int t;  // Number of test cases
    cin>>t;
    while (t--){
        int n,i;
        cin>>n;   // Array length
        int arr[n-1];
        for(i=0;i<n-1;i++)
            cin>>arr[i];
        missing_number(arr,n-1);  //call function
        cout<<endl;
    }
    return 0;
}
