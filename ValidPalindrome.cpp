/*
125. Valid Palindrom
just check for isalpanum then tolower to each character and reverse
This not might be the optimal solution but this simple and easy to understand.
*/
class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(char ch : s) {
            if(isalnum(ch)) {
                temp += tolower(ch);
            }
        }

        string rev = temp;
        reverse(rev.begin(), rev.end());

        return temp == rev;
    }
};