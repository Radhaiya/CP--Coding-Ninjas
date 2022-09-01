long long int sumOrProduct(long long int n, long long int q)
{
	if(q==1){
        return n*(n+1)/2;
    }
    if(q==2){
        long mod =(long)1e9+7;
        long ans=1;
        for(int i=2;i<=n;i++){
            i=i%mod;
            ans=ans%mod;
            ans= (((ans*i)%mod)+mod)%mod;
        }
        return ans;
    }
}