void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    int n = arr.size();
    long long int min, max;
    min = max = 0;
    for(int i = 0; i < n-1; i++)
    {
        min += arr[i];
    }
    for(int i = 1; i < n; i++)
    {
        max += arr[i];
    }
    cout<<min<<" "<<max<<endl;

}