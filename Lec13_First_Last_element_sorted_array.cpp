#include <iostream>
using namespace std;


int firstOccur(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid= s+ (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            e=mid-1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOccur(int arr[],int n,int key)
{
    int s=0,e=n-1;
    int mid= s+ (e-s)/2;
    int ans = -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans = mid;
            s=mid+1;
        }
        else if(arr[mid]<key)
        {
            s=mid+1;
        }
        else e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int even[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout<<"First Occurence of 3 is at index "<<firstOccur(even,11,3)<<endl;
    cout<<"Last Occurence of 3 is at index "<<lastOccur(even,11,3)<<endl;
    cout<<"Total number of occurence of 3 are "<<(lastOccur(even,11,3) - firstOccur(even,11,3)+1)<<endl;  //O(logn)
    return 0;
}
