//problem : print the count of even and odd number present in the array.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"entet the size of the array : ";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"your entered array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int countOdd = 0,countEven = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            countEven ++;
        }
        else{
            countOdd ++;
        }
    }

    //printing the countOdd and countEven.
    cout<<"the number of odd element in the array  : "<<countOdd<<endl;
    cout<<"the number of even element in the arrray : "<<countEven<<endl;

    return 0;
}