
//Method 1
int sumOfMaxMin(int arr[], int n){
    int max,min;
    
    
	if(n==1){
        max = arr[0];
        min = arr[0];
    }
    else{
        if(arr[0]>arr[1]){
            max = arr[0];
            min = arr[1];
        }
        else{
            max = arr[1];
            min = arr[0];
        }
    }
    for(int i=2;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if (arr[i]<min){
            min = arr[i];
        }
        }
    
    return max + min;
    
}





//Method 2
// Sort the array.
int sumOfMaxMin(int arr[], int n){
    sort(arr, arr + n);

    return arr[0] + arr[n - 1];
}