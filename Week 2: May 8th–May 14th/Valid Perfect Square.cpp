class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int i;
        for (i = 1; i*i <= num; i++) 
        { 
            if ((num % i == 0) && (num / i == i)) 
            { 
                return true; 
            } 
        } 
        return false; 
    }
};