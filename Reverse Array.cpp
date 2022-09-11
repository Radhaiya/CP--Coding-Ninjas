
void reverseArray(vector<int> &arr , int m) {

    int n = arr.size();

    
    vector<int> temp(n , 0);
    int p = 0;
    for (int i = 0 ; i <= m ; i++) {
        temp[p++] = arr[i];
    }
    for (int j = n - 1 ; j > m ; j--) {
        temp[p++] = arr[j];
    }
    for (int i = 0 ; i < n  ; i++) {
        arr[i] = temp[i];
    }
}
