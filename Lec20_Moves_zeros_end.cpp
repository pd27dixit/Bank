void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	// shift all nonzero elements shift to left
	int nonzero=0;
	for(int j=0;j<arr.size();j++)
	{
		if(arr[j]!=0)
		{
			swap(arr[nonzero],arr[j]);
			nonzero++;
		}
	}
}
