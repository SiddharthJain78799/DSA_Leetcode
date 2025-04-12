class Solution {
public:
    int strStr(string heystack, string needle) {
        if(heystack.find(needle) != string :: npos) return heystack.find(needle);
        else return -1;
    }
};
/*
class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
            if (haystack.substr(i, needle.length()) == needle) {
                return i;
            }
        }
        return -1;
    }
};
class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.size();i++)
        {
            if(needle==haystack.substr(i,needle.size()))
            {
                return i;
            }
        }
        return -1;
    }
};
*/
