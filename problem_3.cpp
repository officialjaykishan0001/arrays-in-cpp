// problem : reverse the given array.
#include<iostream>
using namespace std;

int main()
{
    //taking the size of the array.
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    //creating an array of the user wanted size.
    int arr[n];

    //taking the element of the array from the user.
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 

    //creating a new array of the same size for reversed array.
    int array[n];

    //reversing the array using loop.
    int j=(n-1);
    for(int i=0;i<n;i++)
    {
        array[i]=arr[j];
        j--;
    }

    //now printing the reversed array.
    cout<<"the reversed array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<(array[i])<<" ";
    }

    return 0;
}