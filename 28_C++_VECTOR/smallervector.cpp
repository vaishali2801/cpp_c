#include <iostream>
#include <vector>
using namespace std;

// Function to return elements smaller than their adjacent neighbors
vector<int> Smaller(const vector<int>& vec) {
    vector<int> result;

    // Loop from 1 to vec.size() - 2 to avoid boundary elements
    for (int i = 1; i < vec.size() - 1; i++) {
        if (vec[i] < vec[i - 1] && vec[i] < vec[i + 1]) {
            result.push_back(vec[i]);
        }
    }

    return result;
}

int main() {
    // Sample input vector
    vector<int> numbers = {9, 2, 6, 3, 4, 5, 8};

    // Get result
    vector<int> smallerElements = Smaller(numbers);

    // Print result
    cout << "Elements smaller than their neighbors: ";
    for (int num : smallerElements) {
        cout << num << " ";
    }

    return 0;
}