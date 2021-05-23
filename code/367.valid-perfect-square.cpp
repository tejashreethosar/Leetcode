class Solution {
public:
    bool isPerfectSquare(int num) {
        long x=0;
        for( x=0;x*x<=num;x++);   
        return (x-1)*(x-1)==num;
    }
};