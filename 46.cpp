#include <iostream>
#include <vector>

using namespace std;

// Function to generate Boundary Value Analysis test cases for three numbers
vector<vector<int>> generateBVATestCases(int lowerBound, int upperBound) {
    vector<vector<int>> testCases;
    int bounds[] = {lowerBound, lowerBound + 1, upperBound - 1, upperBound};

    // Generate combinations of boundary values
    for (int i : bounds) {
        for (int j : bounds) {
            for (int k : bounds) {
                testCases.push_back({i, j, k});
            }
        }
    }
    return testCases;
}

// Function to generate Robustness Test Cases for three numbers
vector<vector<int>> generateRobustTestCases(int lowerBound, int upperBound) {
    vector<vector<int>> testCases;
    int bounds[] = {lowerBound - 1, lowerBound, lowerBound + 1, upperBound - 1, upperBound, upperBound + 1};

    // Generate combinations of boundary and out-of-bound values
    for (int i : bounds) {
        for (int j : bounds) {
            for (int k : bounds) {
                testCases.push_back({i, j, k});
            }
        }
    }
    return testCases;
}

// Function to generate Worst-Case Robustness Test Cases for three numbers
vector<vector<int>> generateWorstRobustTestCases(int lowerBound, int upperBound) {
    vector<vector<int>> testCases;
    int worstBounds[] = {lowerBound - 1, upperBound + 1};

    // Generate combinations for the worst-case scenarios (outside bounds)
    for (int i : worstBounds) {
        for (int j : worstBounds) {
            for (int k : worstBounds) {
                testCases.push_back({i, j, k});
            }
        }
    }
    return testCases;
}

// Utility function to print test cases
void printTestCases(const vector<vector<int>>& testCases) {
    for (const vector<int>& testCase : testCases) {
        printf("[%d, %d, %d]\n", testCase[0], testCase[1], testCase[2]);
    }
}

int main() {
    int lowerBound = 1;  // Replace with your lower bound
    int upperBound = 10; // Replace with your upper bound

    vector<vector<int>> bvaTestCases = generateBVATestCases(lowerBound, upperBound);
    vector<vector<int>> robustTestCases = generateRobustTestCases(lowerBound, upperBound);
    vector<vector<int>> worstRobustTestCases = generateWorstRobustTestCases(lowerBound, upperBound);

    cout << "Boundary Value Analysis Test Cases:" << endl;
    printTestCases(bvaTestCases);

    cout << "\nRobustness Test Cases:" << endl;
    printTestCases(robustTestCases);

    cout << "\nWorst-Case Robustness Test Cases:" << endl;
    printTestCases(worstRobustTestCases);

    return 0;
}