#include <climits>

class Solution {
public:
    bool isPalindrome(int x) {
        //
        if (x == 0) {
            return true;
        }
        // no negative palindromes
        if (x < 0) {
            return false;
        }
        // can't end with "0" if != 0
        if (x % 10 == 0) {
            return false;
        }
        // reverse the number
        int y = x;
        int n = 0;
        while (y > 0) {
            // Check for potential overflow
            if (n > (INT_MAX / 10)) { // INT_MAX = 2,147,483,647
                return false; // Overflow would occur
            }

            n *= 10;
            n += y % 10;
            y /= 10;
        }
        return x==n;

    }
};