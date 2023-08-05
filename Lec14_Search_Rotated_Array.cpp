int BinarySearch(int arr[],int n,int i,int j)
{
  int s=i,e=j;
  int mid=s+(e-s)/2;
  while(s<=e)
    {
      if(arr[mid] == key) return mid;
      else if(arr[mid] < key) s=mid+1;
      else e=mid-1;

      mid=s+(e-s)/2;
    }
  return -1;
}
int search(int arr[],int n,int key)
{
  int pivotIndex= getPivot(arr,n); // getPivot() from Lec14_Pivot_Min.....
  if(arr[pivotIndex] <= key && key <= arr[n-1]) return BinarySearch(arr,key,pivotIndex,n-1);
  else BinarySearch(arr,key,0,pivotIndex-1);
}
