#include <iostream>
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

        bool carry = false;
        int counter = 0;
        string output = "";

        for (int i=0; i<longerString.length(); i++) {
            string c;
            if (counter < shorterString.length()) {  
                int total = shorterString[i]-'0' + longerString[i]-'0';
                if (total == 2) {
                    carry = true;
                    c = '0';
                }
                else {
                    carry = false;
                    c = to_string(shorterString[i]-'0' + longerString[i]-'0');
                }
                
            }

            output = c + output;
            counter++;
        
        }
        return output;
    }
};