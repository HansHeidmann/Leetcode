#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string shorterString;
        string longerString;
        if (a.length() < b.length()) {
            shorterString = a;
            longerString = b;
        } 
        else {
            shorterString = b;
            longerString = a;
        }

        int carry = 0;
        int counter = 0;
        string output = "";

        for (int i=0; i<longerString.length(); i++) {
            string c;
            if (counter < shorterString.length()) {  
           
                int x = shorterString[shorterString.length()-(i+1)]-'0';
                int y = longerString[longerString.length()-(i+1)]-'0';
                int total = x + y + carry;
                if (total < 2) {
                    c = to_string(total);
                    carry = 0;
                }
                else if (total == 2) {
                    c = '0';
                    carry = 1;
                }
                else if (total == 3) {
                    c = '1';
                    carry = 1;
                }
            }
            else {
                int total = longerString[longerString.length()-(i+1)]-'0' + carry;
                if (total == 3) {
                    carry = 1;
                    c = '1';
                }
                if (total == 2) {
                    carry = 1;
                    c = '0';
                }
                else {
                    carry = 0;
                    c = to_string(total);
                }
            }
            
            output = c + output;
            counter++;
        
        }
        if (carry == 1) {
            output = '1' + output;
        }

        return output;
    }
};