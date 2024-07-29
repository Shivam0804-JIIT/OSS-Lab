#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    int *arr= new int[n];
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    float sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    cout<<"Average of Array: "<<sum/n;
    return 0;
}
