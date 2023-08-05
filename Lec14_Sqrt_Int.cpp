int sqrtInt(int n)
{
  int s=0,e=n;
  long long int mid=s+(e-s)/2;
  int ans=-1;
  while(s <= e)
    {
      long long int square = mid*mid;
      if(square == n) return mid;
      else if (square<n) // we need to store it in case not a perfect sqaure
      {
        ans=mid;
        s=mid+1;
      }
      else e=mid-1;

      mid=s+(e-s)/2;
    }
  return ans;
}
