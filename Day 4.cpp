#include <iostream>
#include <vector>
#include <algorithm>
int kSum(int arr[], int n, int k) {
    std::vector<int> s;
    int subsets = 1 << n;
    for (int i = 0; i < subsets; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                sum += arr[j];
            }
        }
        s.push_back(sum);
    }
    std::sort(s.rbegin(), s.rend());
    if (k <= s.size()) {
        return s[k - 1];
    }
    return -1;
}
int main() {
    int n, k;
    std::cout << "Enter the size of the array = ";
    std::cin >> n;
    std::vector<int> nums(n);
    std::cout << "nums = ";
    for (int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    std::cout << "k = ";
    std::cin >> k;
    int result = kSum(nums.data(), n, k);
    if (result != -1) {
        std::cout << "The " << k << "-th largest sum is: " << result << std::endl;
    } else {
        std::cout << "Invalid value of k." << std::endl;
    }
    return 0;
}
