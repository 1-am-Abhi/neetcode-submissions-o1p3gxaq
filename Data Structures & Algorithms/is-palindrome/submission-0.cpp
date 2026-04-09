class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        str.reserve(s.size());
        for (char c : s) {
            if (isalnum(static_cast<unsigned char>(c))) {
                str.push_back(static_cast<char>(tolower(static_cast<unsigned char>(c))));
            }
        }
        int i=0, j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
};
