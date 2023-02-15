// problem : print the sum of smallest and greatest present in the array.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    //declaration of array of the user wanted size
    int arr[n];

    //taking the element of the array.
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //now created two varieble to get smallest and greatest element of the array respectively.

    int smallest = arr[0],greatest = arr[0];

    for(int i=0;i<n;i++)
    {
        if(arr[i]<smallest)
        {
            smallest = arr[i]; //getting the smallest element
        }
        if(arr[i]>greatest)
        {
            greatest = arr[i];//getting the greatest element.
        }
    }

    //now the element 

    cout<<"the sum is : "<<greatest+smallest<<endl;
    return 0;

}