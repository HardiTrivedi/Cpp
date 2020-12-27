#include <iostream>

using namespace std;

int main()
{
    int arr[10],i,key;
    cout<<"Enter elements of the array ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search ";
    cin>>key;
    for(i=0;i<10;i++)
    {
        if(key==arr[i])
        {
            cout<<"The element "<<key<<" is found at the location "<<i<<endl;
            return 0; //once key is found, the function should be stopped - return 0
        }
    }
    cout<<"The element "<<key<<" is not present in the array"<<endl; //after completely checking the array, if the element is not present, only then you can say not found. so after completion of checking (iterating the array) you should come out of for loop
    //return 0;
}
