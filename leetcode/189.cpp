#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums{1, 2, 3, 4, 5, 6};
    vector<int> temp;
    int k = 3;
    int n = nums.size();
    k = k % n;

    reverse(nums.end() - k, nums.end());
    reverse(nums.begin(), nums.end() - k);
    reverse(nums.begin(), nums.end());

    for (auto i : nums)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}