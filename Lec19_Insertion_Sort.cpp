void insertionSort(int n, vector<int> &arr)
{
  for(int i=1;i<n;i++)// rounds as well as indices
    {
        int temp = arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(temp < arr[j])
            {
                arr[j+1]=arr[j]; // right shift to make space
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}
