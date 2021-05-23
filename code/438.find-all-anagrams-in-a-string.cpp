class Solution {
  public:
    bool compare(char arr1[], char arr2[]) 
{ 
    for (int i=0; i<256; i++) 
        if (arr1[i] != arr2[i]) 
            return false; 
    return true; 
} 
 
public:
    vector<int> findAnagrams(string s, string p) {
          int M = p.size(), N = s.size(); 
  vector<int>result;
        
         if (s.size() == 0) {
            return result;
        }
        if (p.length() > s.length()) {
        return result;
        }
  
    char countP[256] = {0}, countTW[256] = {0}; 
    for (int i = 0; i < M; i++) 
    { 
        (countP[p[i]])++; 
        (countTW[s[i]])++; 
    } 
  
    for (int i = M; i < N; i++) 
    { 
       
        if (compare(countP, countTW)) {
            //cout << "Found at Index " << (i - M) << endl;
            result.push_back(i - M);
        }
             
  
        (countTW[s[i]])++; 
 
        countTW[s[i-M]]--; 
    } 
  
    // Check for the last window in text 
    if (compare(countP, countTW)) 
    {
        //cout << "Found at Index " << (N - M) << endl;
        result.push_back(N - M);
    }   
         
     return result;   
    }
};