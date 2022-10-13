class Solution {
public:
    int atmost(string s, int k)
    {
        int len = s.length();
        map<char,int>m;
        int cnt = 0;
        int j = 0;
        for(int i = 0 ; i<len ; i++)
        {
            if(s[i]!='a' && s[i]!= 'e' && s[i] != 'i' && s[i] !='o' && s[i]!='u')
            {
                j = i+1;
                m.clear();
                continue;
            }
            else
            {
                m[s[i]]++;
                while(m.size()>k)
                {
                    m[s[j]]--;
                    if(m[s[j]]==0)
                    {
                        m.erase(s[j]);
                    }
                    j++;
                }
             cnt+=(i-j+1);
             
            }
        }
        return cnt;
    }
    int countVowelSubstrings(string word) {
        int res = atmost(word,5)-atmost(word,4);
        return res;
    }
};