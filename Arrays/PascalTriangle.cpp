#include <iostream>
#include <vector>

using namespace std;

vector<int> generateRow(int row) {
    long long ans = 1;
    vector<int> ansRow;
    ansRow.push_back(1);
    for(int col = 1; col < row; col++) {
        ans = ans * (row - col);
        ans = ans / col;
        ansRow.push_back(ans);
    }
    return ansRow;
}

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};

int main() {
    int numRows = 5; // Example input
    Solution solution;
    vector<vector<int>> result = solution.generate(numRows);

    cout << "Pascal's Triangle with " << numRows << " rows:" << endl;
    for(const auto& row : result) {
        for(int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
