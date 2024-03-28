int longestKSubstr(string s, int k)
    {
        int n = s.size();
        map<char,int> mp;
        int l = 0, r=0, ans = 0, totalchar = 0;
        while (r < n) 
        {
            if(mp[s[r]]==0) totalchar++;
            mp[s[r]]++;
            while (totalchar > k)
            {
                mp[s[l]]--;
                if (mp[s[l]] == 0) totalchar--;
                   
                l++;
            }
    
            ans = max(ans, r - l + 1);
            r++;
        }
        if(totalchar == k) return ans;
        else return -1;
    }