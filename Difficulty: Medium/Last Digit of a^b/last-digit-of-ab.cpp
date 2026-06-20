class Solution {
  public:
    int getLastDigit(string& a, string& b) {
        if(b.size() == 1 && b.back() =='0')return 1;
        if(a.size() == 1 && a.back() == '1')return 1;
        int mod = modulo(4,b);
        if(mod == 0) mod = 4;
        int last_digit = a.back()-'0';
        int multiply = pow(last_digit,mod);
        return multiply%10;
        
    }
    int modulo(int mod,string &b){
        int rem = 0;
        for(int i=0;i<b.size();i++){
            rem = (rem*10+(b[i]-'0'))%mod;
        }
        return rem;
    }
};