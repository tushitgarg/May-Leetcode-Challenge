class Solution {
public:
    int findComplement(int num) {
        unsigned int sum = 0,d,i;
        i = 1;
        while(num!=0)
        {
            d = num%2;
            d = d^1;
            sum = sum + d*i;
            i = i*2;
            num = num/2;
        }
        return sum;
        
    }
};
