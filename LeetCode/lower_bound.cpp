#include <iostream>
#include <vector>
#include <algorithm>

// Function to find the lower bound of an element in a sorted vector
int lowerBound(const std::vector<int>& vec, int target) {
    auto it = std::lower_bound(vec.begin(), vec.end(), target);
    return std::distance(vec.begin(), it);
}

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9, 11, 13};

    int target = 6;

    int index = lowerBound(numbers, target);

    if (index < numbers.size()) {
        std::cout << "Lower bound of " << target << " is at index " << index << std::endl;
        std::cout << "Element at lower bound index: " << numbers[index] << std::endl;
    } else {
        std::cout << "Element not found. Lower bound would be at index " << numbers.size() << std::endl;
    }

    return 0;
}