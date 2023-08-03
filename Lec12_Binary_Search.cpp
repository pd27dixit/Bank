#include <iostream>
using namespace std;

int binarysearch (int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;

   

    /* int -> 2^31 - 1 is the max value
    if  start = 2^31 - 1
        end = 2^31 -1 
    so mid = (start+end)/2 , value will be out of range for int

    so we can use 
    mid = start + (end - start)/2
    */

    // int mid = (start + end)/2;

    int mid = start + (end-start)/2;

    while(start <= end)
    {
        if (arr[mid] == key) return mid;
        else if (key > arr[mid]) start = mid+1; // goto right part
        else end = mid-1;

        // mid = (start+end)/2;
        mid = start + (end-start)/2;
    }
    return -1;

}
int main()
{
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int index =  binarysearch(even,6,6);
    cout<<"Index of 6 is "<<index<<endl;

    index = binarysearch(odd,5,14);
    cout<<"Index of 14 is "<<index<<endl;
    return 0;
}
