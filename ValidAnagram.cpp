/* Neetcode 150
Problem "242 Valid Anagram" 
we have one easy approach just sort the two strings and match it, return true or false.
if we sort the two strings should be same if not then they are not valid anagram.
if the two characters have same frequency then they cancel out and we get zero becuase at one case we are incrementing it and other case we are decrementing it.
ch - 'a' converts a lowercase character into an index from 0 to 25.
For example, 'a' - 'a' = 0, 'b' - 'a' = 1, 'c' - 'a' = 2.
So count[ch - 'a'] accesses the frequency of that character.
For example, if ch = 'c', then count[2] is updated.
This lets us store the frequency of all 26 lowercase letters in one vector.
*/
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        vector<int>count(26,0);
        int n = s.size();

        for(char &ch:s){
            count[ch-'a']++;
        }

        for(char &ch:t){
            count[ch-'a']--;
        }

        for(int i =0; i<26 ; i++){
            if(count[i]!=0){
                return false;
            }
        }
        return true;
    }
};