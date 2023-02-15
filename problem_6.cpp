#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int max();
int min_mum();

//did't understand please make a video on this problem.
int main()
{
    int arr[8] = {1,3,6,5,7,10,8,9};
    int n = 8;

    int min[n];

    min[0] = 1;

    for(int i=1;i<=n;i++)
    {
        int x = min[i-1];
        min[i] = min_mum(arr[i-1],x);
    }
}

int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else if(b>a)
    {
        return b;
    }
    else{
        return a;
    }

}

int min_mum(int a,int b)
{
    if(a<b){
        return a;
    }
    else if(b<a)
    {
        return b;
    }
    else {
        return a;
    }

}

