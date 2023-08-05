/*Also Max Element in array in O(logn) time, Sorted in 2 halfves*/
int PeakElementIndex(int arr[],int n)
{
  int s=0,e=n-1;
  int mid=s+(e-s)/2;

  while(s<e)
    {
      if(arr[mid] < arr[mid+1]) s=mid+1;
      else e=mid;

      mid=s+(e-s)/2;
    }
  return s;


  // while(s<=e)
  // {
  //   if(arr[mid] < arr[mid+1] ) s=mid+1;
  //   else if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]) return mid;
  //   else e=mid-1;
  // }
  // return -1;
}
