bool isPossible(vector<int> &a, int k, int mid)
{
  
  int cowsCount=1;
  int lastPlaced=a[0]; //1st cow placed in 1st location
  sort(a.begin(),a.end());  // distance coordinte-wise

  for(int i=0;i<a.size();i++)
    {
      if(abs(lastPlaced - a[i])>=mid) // mid is the min distance 2 cows can be placed without fighting. So we can place cow if dist>=mid
      {
        cowsCount++;
        if(cowsCount == k) return true;
        lastPlaced=a[i];
      }
    }
  return false;
}
int aggressiveCows(vector<int> &a,int k) // we want max distance b/w cows
{
  int s=0;
  int max=*max_element(a.begin(),a.end());
  int min=*min_element(a.begin(),a.end());
  int e= max-min;

  int mid = s+(e-s)/2;
  int ans=-1;

  while(s<=e)
    {
      if(isPossible(a,k,mid))
      {
        ans=mid;
        s=mid+1;
        
      }
      else e=mid-1;
      mid=s+(e-s)/2;
    }
  return ans;
}
