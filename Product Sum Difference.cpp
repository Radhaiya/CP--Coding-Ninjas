
int findProductSumDifference(int n)
{
    int temp = n;
    int product = 1;
    int sum = 0;
    
   
    while(temp){
        int digit = temp%10;
        product *= digit;
        sum += digit;
        temp /= 10;
    }
    

    return product - sum;
}