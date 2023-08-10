void reverseArray(vector<int> &arr , int m)
{
  int start = m+1  ; // question asked to start after mth index, normally used start=0
  int end = arr.size() - 1;

  while(start <= end)
    {
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
}
