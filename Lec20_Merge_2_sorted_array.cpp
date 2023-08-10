vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n)
{
  //arr1 has size m+n total where end elements are filled with zeroes

  int i=m-1;
  int j=n-1;
  int lastInd=(m+n-1);

  while(i>=0 && j>=0)
    {
      if(arr1[i] < arr2[j])
      {
        arr1[lastInd--] = arr2[j--];
      }
      else
      {
        arr1[lastInd--] = arr1[i--];
      }
    }
  while(i>=0)
    {
      arr1[lastInd--] = arr1[i--];
    }
  while(j>=0)
    {
      arr1[lastInd--] = arr2[j--];
    }
  return arr1;
}
