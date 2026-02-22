// 9. palindrome number
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int n=x;
        double rev=0, r;
        while(x>0)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if
            (rev == n)
            {
        return true;
    }
    else 
    {
        return false;
    }
    }
};