string pangrams(string s) {
    
    bool arr[26] = {false};
    int n = s.length();
    int count = 0;
    for(int i = 0; i<n; i++)
    {
        if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
        {
            if(s[i] <= 'Z')
            {
                s[i] += 32;
            }
            int alpindex = s[i] - 'a';
            if(!arr[alpindex])
            {
                arr[alpindex] = true;
                count++;
            }
        }
    }
    string res;
    if(count == 26)
    {
        res = "pangram";
    }else res = "not pangram";
    
    return res;
}