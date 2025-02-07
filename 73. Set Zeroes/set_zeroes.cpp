#include <string>
#include <unordered_set>
#include <vector>
using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // vector to save index of columns for zero-ing at end
        unordered_set<int> xs;

        for (unsigned y=0; y<matrix.size(); y++) {
            // bool to check if at least 1 zero is in the current row
            bool foundZero = false;
            // loop through the columns of the row
            for (unsigned x=0; x<matrix[0].size(); x++) {
                // if a zero is found:
                if (matrix[y][x] == 0) {
                    // keep track of that
                    foundZero = true;
                    // save the column index for later
                    xs.insert(x);
                }
            }
            if (foundZero == true) {
                // set whole row to an array of 0's with same length as row size
                matrix[y] = vector<int>(matrix[y].size());
            }
        }

        // loop through the rows once again
        for (unsigned y=0; y<matrix.size(); y++) {
            // loop through the saved column indexes that should be 0
            for (unsigned x : xs) {
                // change the int at {y,x} to 0
                matrix[y][x] = 0;   
            }
        }
    }
};