class Solution
{
public:
    int search(string pat, string txt)
    {
        int n = txt.size();
        int k = pat.size();
        vector<int> freqtxt(26, 0);
        vector<int> freqpat(26, 0);
        for (int i = 0; i < k; i++)
        {
            freqtxt[txt[i] - 'a']++;
            freqpat[pat[i] - 'a']++;
        }
        int ans = 0;

        if (freqtxt == freqpat)
            ans++;

        for (int i = k; i < n; i++)
        {
            freqtxt[txt[i] - 'a']++;
            freqtxt[txt[i - k] - 'a']--;
            if (freqtxt == freqpat)
                ans++;
        }
        return ans;
    }
};