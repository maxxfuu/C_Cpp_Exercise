class Solution {
public:
    bool isPalindrome(string s) {
        const char* left = s.c_str();
        const char* right = left + s.size() - 1;
        
        while (left < right) {
            while (!isalnum(*left) && left < right) {
                left++;
            }
            while (!isalnum(*right) && left < right) {
                right--;
            }
            if (tolower(*left) != tolower(*right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}; 



