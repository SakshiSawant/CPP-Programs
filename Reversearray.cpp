#include<bits/stdc++.h>
using namespace std;

void reversearray(int arr[], int start, int end)
{
    int n = end;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n+1;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number of array elements";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    reversearray(arr,0,n-1);
    return 0;
}
