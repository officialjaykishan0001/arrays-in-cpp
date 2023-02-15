#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    //fetching the size of array from user.
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;

    //creating  an array of user wanted size.
    int array [n];

    //taking the element of the array .
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    //now we have to find the missing element of the array.
    //so for solve it we shall firstly find sum of n natural numbers and sum of all the element of the array.
    //and subtract them with together as done below.
    
    //we created two verieble to store the sum of them .

    int naturalSum = 0,elementSum = 0;
    
    //we get sum of them by traversing a for loop .

    for(int i=1;i<=n;i++)
    {
        naturalSum +=  i;
    }

    for(int i=0;i<n;i++)
    {
        
        elementSum += array[i];
    }

    //now we have our answer here.

    cout<<"the missing element is : "<<(naturalSum-elementSum)<<endl;
    return 0;
}