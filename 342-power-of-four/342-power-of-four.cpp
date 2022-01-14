class Solution {
public:
    bool isPowerOfFour(int n) {
        //Base Case
        
        if(n<=0)
        {
            return false;
        }
        if(n==1)
        {
            return true;
        }
        
        if(n%4==0)
        {
            n=n/4;
            return isPowerOfFour(n);
        }
        else
        {
            return false;
        }
    }
};