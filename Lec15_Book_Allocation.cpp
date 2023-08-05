bool isPossible(int arr[],int n,int m,int mid)
{
  int studentCount=1;
  int pageSum=0;

  for(int i=0;i<n;i++)
    {
      if(arr[i] + pageSum > mid)
      {
        studentCount++;
        if(studentCount > m || arr[i] > mid) return false;
        pageSum=arr[i];
      }
      else pageSum+=arr[i];
    }
  return true;
}
int findPages(int arr[],int n,int m) // m is the number of students
{
  int s=0;
  int sum=0;
  for(int i=0;i<n;i++) sum+=arr[i];
  int e=sum;
  int mid=s+(e-s)/2;
  int ans=-1;

  while(s<=e)
    {
      if(isPossible(arr,n,m,mid))
      {
          ans=mid;
          e=mid-1;
      }
      else s=mid+1;

      mid=s+(e-s)/2;
    }
  return ans;
}
