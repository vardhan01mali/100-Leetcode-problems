#include <iostream>
#include <vector>
#include <algorithm> // for max()
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int mi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (mi >= nums.size() - 1) {
                return true;
            }
            if (i > mi) {
                return false;
            }
            mi = max(mi, i + nums[i]);
        }
        return true;
    }
};

int main() {
    Solution obj;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    bool result = obj.canJump(nums);
    if (result)
        cout << "You can reach the last index." << endl;
    else
        cout << "You cannot reach the last index." << endl;

    return 0;
}
