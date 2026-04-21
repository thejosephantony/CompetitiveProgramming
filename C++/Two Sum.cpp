// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]
 
// Constraints:

// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
 

// Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout;
using std::cin;
using std::vector;
using std::endl;
using std::unordered_map;

class Solução {
    public:
    vector<int> twoSum(vector<long long>& nums, long long target) {
        unordered_map<long long, int> m;
        for (int i = 0; i < nums.size(); i++) {
            long long complemento = target - nums[i];
            if (m.find(complemento) != m.end()) {
                return {m[complemento], i};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};

int main() {
    Solução s;
    int n;
    long long target;

    cout << "Tamanho do array: ";
    cin >> n;

    vector<long long> nums(n);
    cout << "Elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "Target: ";
    cin >> target;

    auto r = s.twoSum(nums, target);

    if (!r.empty()) {
        cout << "[" << r[0] << ", " << r[1] << "]" << endl;
    } else {
        cout << "Nenhuma solução encontrada." << endl;
    }

    return 0;
}
