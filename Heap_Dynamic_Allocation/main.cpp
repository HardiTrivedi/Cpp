#include <iostream>

using namespace std;

int main()
{
    int Size,Size_Heap;
    cout<<"Enter the size of the array in stack ";
    cin>>Size;
    int arr[Size]; //array of size Size is created inside stack
    int *p=new int[Size];
    cout<<"Size of array in stack is "<<Size<<endl;
    cout<<"Size of array in heap is "<<Size<<endl;
    cout<<"Enter new size for array in heap "; //to create an array of different size inside heap
    cin>>Size_Heap;
    delete []p;
    p=new int[Size_Heap];
    //p[0]=1; // storing elements
    cout<<"Size of array in heap after changing the size is "<<Size_Heap<<endl;
    delete []p;
    p=nullptr;
    return 0;
}


/* or shorter code - without creating array in stack
int main()
{
    int *p=new int[20];
    delete []p; //delete previous elements of the array of size 20 before changing the size to 40
    p=new int[40];
    return 0;
}
*/
