#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        std::vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            std::cin >> a[i];
        }

        std::vector<int> result(n);

        // Iterate over each index i
        for (int i = 1; i <= n; ++i) {
            int maxResult = 0; // Initialize maxResult for maximizing play
            int minResult = INT_MAX; // Initialize minResult for minimizing play

            // Iterate over each possible j
            for (int j = 1; j < i; ++j) {
                int currentResult = (a[i - 1] + a[j - 1]) / 2 * 2; // Calculate the result based on the rules

                // Update maxResult and minResult
                maxResult = std::max(maxResult, currentResult);
                minResult = std::min(minResult, currentResult);
            }

            // Store the final result for the current prefix
            if (i == 1) {
                result[i - 1] = a[i - 1]; // If the prefix has only one element, the result is the element itself
            } else {
                if ((i - 1) % 2 == 1) {
                    result[i - 1] = maxResult; // If the prefix has an odd number of elements, Masha maximizes the result
                } else {
                    result[i - 1] = minResult; // If the prefix has an even number of elements, Olya minimizes the result
                }
            }
        }

        // Output the results for the current test case
        for (int i = 0; i < n; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
