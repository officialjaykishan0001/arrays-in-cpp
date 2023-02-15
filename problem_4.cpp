//problem: given two array a and b of same size . find smallest sum from both the array 
//i.e. a = 1 2 34 45 and b = 4 2 4 3 
//output : 1 + 2 = 3.
#include<iostream>
using namespace std;

int main()
{
    //taking the size as the user input.
    int n;
    cout<<"the size for both array : ";
    cin>>n;

    //creating two array as user wanted size.

    int a[n],b[n];

    //taking the element  of array a .
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    //taking the element of array b.
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }

    //creating the verieble for both arrays to find the smallest element from them.

    int aSmallest = a[0],bSmallest = b[0];

    //running a for loop to traverse the both array and find the smallest element of both .
    for(int i=0;i<n;i++)
    {
        if(a[i]<aSmallest)
        {
            aSmallest = a[i];
        }
        if(b[i]<bSmallest)
        {
            bSmallest = b[i];
        }

    }

    //now adding the smallest element of both array.

    cout<<"the sum is : "<<(aSmallest+bSmallest)<<endl;

    return 0;
    
}