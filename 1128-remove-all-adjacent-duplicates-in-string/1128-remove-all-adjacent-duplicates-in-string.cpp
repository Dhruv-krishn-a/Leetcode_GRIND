class Solution {

public:

    string removeDuplicates(string s) {

//empty string, which will be modified into ans 

        string ans="";

//index for loop

        int index = 0;

        while(index<s.length()){

/*For pop -> ans.length should be greater than 0 and rightMost element of ans 
should not be equal to s[index] */

            if(ans.length()>0 && ans[ans.length()-1] == s[index]){
                ans.pop_back();
            }
            else {

//If the element is not equal push it into ans . 

                ans.push_back(s[index]);
            }
            index++;
        }
//return ans .
        return ans;
    }
};