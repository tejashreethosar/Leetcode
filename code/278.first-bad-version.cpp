// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long int i=1;
        long int j=n;
        long int k= (i+j)/2;
        while(i<j){
            if(isBadVersion(k)){
                j=k-1;
            }
            else
                i=k+1;
            k= (i+j)/2;
        }
        return isBadVersion(i)?i:i+1;
    }
};