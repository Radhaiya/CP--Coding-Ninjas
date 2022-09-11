int minSubarraySum(int arr[], int n, int k) 
{
      int minimumSum = 1000000000;
    
     for(int i=0;i<=n-k;i++){
        int cursum=0;
        for(int j=i;j<i+k;j++){
            cursum=cursum+arr[j];
        }
           minimumSum = min(minimumSum, cursum);
     }
    return minimumSum;
}