/*
    Time Complexity: O(N)
    Space Complexity: O(1),

    Where N is the number of elements in the array.
*/

int magicIndex(vector<int>& a, int n) 
{
	
    int ans = -1;
for (int i = 0; i < n; i++) 
    {
    	 if (a[i] == i) 
        {
            ans = i;
            break;
     }
 }
    
    return ans;
}
