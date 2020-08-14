class Solution {
public:
    int longestPalindrome(string s)
    {
        int a[52]={0},c=0,sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>=65 && s[i]<97)
              a[s[i]-65]++;
            else
              a[s[i]-71]++;
        }
        sort(a,a+52,greater<int>());
        for(int i=0;i<52;i++)
        {
            if(a[i]%2==0)
                sum += a[i];
            else
            if(a[i]%2!=0 && c==0)
            {
                sum += a[i];
                c=1;
            }
            else
                if(a[i]>0)
                    sum += a[i]-1;

        }
        return sum;
    }
};
