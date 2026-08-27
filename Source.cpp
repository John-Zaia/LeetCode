#include <vector>
#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <utility>
#include <print>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>

class Solution {
public:
    std::unordered_map<std::string, int> inventory;
    bool isAnagram(std::string s, std::string t) {
        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        if (s == t)
        {
            return true;
        }

        return false;
    }
};

int main() {
    Solution solution;
}