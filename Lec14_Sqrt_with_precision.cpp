double morePrecision (int n, int prec_count, int temp)
{
  double factor = 1;
  double ans=temp;
  for(int i=0;i<prec_count;i++)
    {
      factor=factor/10; //0.1--> 0.01 --> 0.001
      for(double j=ans;j*j < n;j=j+factor) ans=j;
    }
  return ans;
}

int main()
{
  int n=101;
  int tempSolInt = sqrtInt(n);
  cout<<" Answer with 3 digit precision is "<<morePrecision(n,3,tempSolInt)<<endl;
}
