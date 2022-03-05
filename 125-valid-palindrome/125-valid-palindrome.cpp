class Solution {
private:
    
    bool valid(char ch)
    {
        if(ch>='a' && ch<='z' || ch>='0' && ch<='9' || ch>='A' && ch<='Z')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    
    char toLowerCase(char ch)
    {
        if(ch>='a' && ch<='z' || ch>='0' && ch<='9')
        {
            return ch;
        }
        else
        {
            return ch - 'A' + 'a';
        }
    }
    
    bool checkPalindrome(string s)
    {
        int st = 0;
        int e = s.length()-1;
        
        while(st<=e)
        {
            if(s[st]!=s[e])
            {
                return 0;
            }
            else
            {
                st++;
                e--;
            }
        }
        return 1;
    }
    
    
public:
    bool isPalindrome(string s) {
        
        string temp = "";
        
        for(int i=0;i<s.length();i++)
        {
            if(valid(s[i]))
            {
                temp.push_back(s[i]);
            }
        }
        
        for(int i=0;i<temp.length();i++)
        {
            temp[i]=toLowerCase(temp[i]);
        }
        
        return checkPalindrome(temp);
            
        
        
        
    }
};