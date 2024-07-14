class Solution {
public:
void removesub(string &s , string part){
    int found = s.find(part);
    if(found!=string::npos){
        //Part of string has been located.
        //please remove it.
        string left_part = s.substr(0, found);
        string right_part = s.substr(found+part.size(),s.size());
        s=left_part + right_part;

        removesub(s,part);
    }
}
    string removeOccurrences(string s, string part) {
        removesub(s,part);
        return s; 
    }
};