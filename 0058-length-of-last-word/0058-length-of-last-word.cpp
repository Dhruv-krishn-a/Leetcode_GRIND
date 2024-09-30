class Solution {
public:
    int lengthOfLastWord(string &s) {
        int pointer = s.length() - 1;
        while (pointer >= 0 && s[pointer] == ' ') {
            pointer--;
        }
        int count = 0;
        while (pointer >= 0 && s[pointer] != ' ') {
            count++;
            pointer--;
        }

        return count;
    }
};
