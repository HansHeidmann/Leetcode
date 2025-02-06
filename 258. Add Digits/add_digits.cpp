class Solution {
public:
    int addDigits(int num) {
        int newNum = 0;
        while (num > 0) {
            newNum = newNum + num % 10;
            num = num/10;
        }

        if (newNum > 9) {
            return addDigits(newNum);
        } else {
            return newNum;
        }
    }
};