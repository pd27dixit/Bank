void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.

    for(int i=0;i<n-1;i++) // we need rounds n-1
    {
        bool swapped = false;
        for(int j=0;j<(n-1-i);j++)
        {
            if(arr[j+1] < arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped = true;
            }

        }
        if (!swapped) break;
    }
}
