int rakshaBandhan(vector < int > arr, int n) {
    sort(arr.begin(),arr.end());
   long long sum=0;
    int counter=0, i=n-1;
    while(i>=0){
        sum+=arr[i];
        if(sum<=0){
            break;
        }
          i--;
         counter++;
    }
    return counter;
}