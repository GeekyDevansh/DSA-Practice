class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        int s=0;
        int e=letters.size()-1;
        
        while(s<=e)
        {
            int m = s + (e-s)/2;
            
            if(target<letters[m])
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
           
        }
        if(s==letters.size())
        {
            return letters[0];
        }
        else
        {
            return letters[s];    
        }
        
    }
};