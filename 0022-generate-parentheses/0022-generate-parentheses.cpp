#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        dfs(n, 0, 0, "", res);
        return res;
    }

private:
    void dfs(int n, int openP, int closeP, string current, vector<string>& res) {
        // If the current string is valid (openP == n and closeP == n), add to result
        if (openP == n && closeP == n) {
            res.push_back(current);
            return;
        }

        // Add '(' if we can still add an opening bracket
        if (openP < n) {
            dfs(n, openP + 1, closeP, current + "(", res);
        }

        // Add ')' if we can close an opening bracket
        if (closeP < openP) {
            dfs(n, openP, closeP + 1, current + ")", res);
        }
    }
};
