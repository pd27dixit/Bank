bool isPossible(vector<int> &arr, int k, int mid)
{
  int painterCount=1;
  int time=0;
  for(int i=0;i<arr.size();i++)
  {
    if(arr[i] + time > mid)
    {
      painterCount++;
      if(painterCount > k || arr[i] > mid) return false;
      time=arr[i];
        
    }
    else time+=arr[i];
  }
  return true;
}
int findMinTime(vector<int> &arr,int k) // k painters ,arr[i] = units of board to be painted. 1 unit of board = 1 unit of time
{
  int s=0;
  int e=0;
  for(int i=0;i<arr.size();i++) e+=arr[i];
  int mid = s+(e-s)/2;
  int ans=-1;

  while(s<=e)
    {
      if(isPossible(arr,k,mid))
        {
          ans=mid;
          e=mid-1;
        }
      else s=mid+1;

      mid=s+(e-s)/2;
    }
  return ans;
}
