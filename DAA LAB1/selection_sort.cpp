#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    int a[n];
    cout<<"enter the elements: \n";
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        if(min_index!=i)
        {
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}