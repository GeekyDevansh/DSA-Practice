class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i=0;
        int ansIndex = 0;
        
        while(i<chars.size())
        {
            int j=i+1;
                while(j<chars.size() && chars[j]==chars[i])
                {
                    j++;
                }
            
            chars[ansIndex] = chars[i];
            ansIndex++;
            
            int count = j-i;
            
            if(count>1)
            {
                
            
            
            string cnt = to_string(count);
            for(int i=0;i<cnt.length();i++)
            {
                chars[ansIndex]=cnt[i];
                ansIndex++;
            }
                }
            i=j;
            
            
        }

        return ansIndex;
    }
};