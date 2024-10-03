class Solution {
public:
    bool isPalindrome(string s) {
       int index  = 0;
       string Ans="";
       int newchar;
       while(s[index]!='\0'){
        // Checking for space 
        // 
        if((s[index] >='a' && s[index]<='z' )|| (s[index]>='0'  && s[index] <='9') ){
            // If lowercase , just push into ans ;
            Ans.push_back(s[index]);
        }else if(s[index]>='A' && s[index]<='Z'){
            // If uppercase , convert to lowercase ;
            newchar = s[index] + 32;
            Ans.push_back(newchar);
        }
            index++;
       } 
       int start = 0 ,end=Ans.length()-1;
       while(start<=end){
        if(Ans[start]!=Ans[end]){
            return false;
        }
        start++,end--;
       }

       return true; 
    }
};