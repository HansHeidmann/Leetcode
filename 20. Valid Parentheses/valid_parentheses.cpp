#include <stack>
#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 1) {
            return false;
        }
        if (s[0] == ')' || s[0] == '}' || s[0] == ']') {
            return false;
        }
        stack<char> stack;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            } else {
                if (s[i] == ')') {
                    if (!stack.empty() && stack.top() == '(') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
                if (s[i] == '}') {
                    if (!stack.empty() && stack.top() == '{') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
                if (s[i] == ']') {
                    if (!stack.empty() && stack.top() == '[') {
                        stack.pop();
                    } else {
                        return false;
                    }
                }
            }
            
        }
        if (stack.empty()) {
            return true;
        } else {
            return false;
        }
        
    }
};