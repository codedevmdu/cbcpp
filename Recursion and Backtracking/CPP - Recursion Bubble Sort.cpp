#include<iostream>
using namespace std;

void bubbleSort(int a[],int n)
{
    //Base Case
    if(n==1)
    {
        return;
    }
    // Sort 1 element ,and call for remaining n-1 elements

    for(int j=0;j<=n-2;j++)
    {
        if(a[j]>a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    bubbleSort(a,n-1);
}

void bubbleSort2(int a[],int j,int n)
{
    if(n==1)
    {
        return;
    }
    if(j==n-1)
    {
        bubbleSort2(a,0,n-1);
    }
    // Recursive case
    if(a[j]>a[j+1])
    {
        swap(a[j],a[j+1]);
    }
    bubbleSort2(a,j+1,n);
    return;

}
int main()
{
    int a[]={5,4,3,2,1};
    int n=5;
    bubbleSort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

