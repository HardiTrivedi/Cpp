#include <iostream>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5},*p,i,*q;
    p=arr;
    q=&arr[3];
    cout<<"Address of q = "<<q<<endl;
    cout<<"Pointer at q = "<<*q<<endl;
    cout<<"Difference between positions of q and p = "<<q-p<<endl;
    cout<<"Difference between positions of p and q = "<<p-q<<endl;
    cout<<"Pointer at p = "<<*p<<endl;
    p++;
    cout<<"Pointer at p++ = "<<*p<<endl;
    p--;
    cout<<"Pointer at p-- = "<<*p<<endl;
    cout<<"Address of p = "<<p<<endl;
    cout<<"Address of p+2 = "<<p+2<<endl;
    cout<<"Address of p-2 = "<<p-2<<endl;
    cout<<"Pointer at (p+2) = "<<*(p+2)<<endl;
    cout<<"Pointer at (p-2) = "<<*(p-2)<<endl;
    cout<<"Array is "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Array is "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<p[i]<<endl; //gives the same result
    }
    cout<<"Array is "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<i[arr]<<endl; //gives the same result
    }
    cout<<"Array is "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(arr+i)<<endl; //gives the same result
    }
    cout<<"Addresses of array elements are "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<(arr+i)<<endl;
    }
    cout<<"Addresses of array elements are "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<(p+i)<<endl; //gives the same result
    }
    cout<<"Array is "<<endl;
    for(i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
    }

    cout<<"Address of p = "<<p<<endl;

    for(i=0;i<5;i++)
    {
        cout<<*p<<endl;
        p++;
    }
    cout<<"Address of p = "<<p<<endl; //pointer has moved to a location outside the array as it got incremented inside the loop
    return 0;
}
