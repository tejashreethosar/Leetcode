class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        string str;
        for(int i=1; i<=n; i++){
            str="";
            if(i%3==0 && i%5==0)
                str = "FizzBuzz";
            else if(i%3==0)
                str = "Fizz";
            else if(i%5==0)
                str="Buzz";
            
            else
                str = to_string(i);
            v.push_back(str);
        }
        return v;
    }
};