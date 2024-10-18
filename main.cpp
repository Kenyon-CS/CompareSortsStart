#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <algorithm>
#include <fstream>
#include <iomanip>

using namespace std;

// Function to generate random array
vector<int> generateRandomArray(int size) {

}

// Bubble Sort
void bubbleSort(vector<int> &arr) {

}

// Selection Sort
void selectionSort(vector<int> &arr) {

}

// Insertion Sort
void insertionSort(vector<int> &arr) {

}

// Shell Sort
void shellSort(vector<int> &arr) {

}

// Merge Sort (Recursive)
void merge(vector<int> &arr, int left, int mid, int right) {

}

void mergeSort(vector<int> &arr, int left, int right) {

}

// Quick Sort with middle element as pivot
void quickSortMiddle(vector<int> &arr, int low, int high) {

}

// Quick Sort with median of three (first, middle, last) as pivot
void quickSortMedian(vector<int> &arr, int low, int high) {

}

// Quick Sort with random element as pivot
void quickSortRandom(vector<int> &arr, int low, int high) {
}

// Timing helper function
template <typename Func>
double measureTime(Func sortFunction, vector<int> &arr) {
    auto start = chrono::high_resolution_clock::now();
    sortFunction(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> diff = end - start;
    return diff.count();
}

// Function to print first 20 elements
void printFirst20Elements(const vector<int> &arr) {

}

// Main function
int main() {
    const int ARRAY_SIZE = 100000;
    srand(time(0));  // Initialize random seed

    // Generate original random array
    vector<int> originalArray = generateRandomArray(ARRAY_SIZE);
    ofstream outfile("sorting_results.txt");
    
    outfile << "Sorting Algorithm Results (first 20 elements):\n\n";
    cout << "Sorting Algorithm Results (first 20 elements):\n\n";

    // List of sorting algorithms
    struct SortTest {
        string name;
        function<void(vector<int> &)> func;
    };

    vector<SortTest> sortTests = {
        {"Bubble Sort", bubbleSort},
          {"Selection Sort", selectionSort},
          // You do the rest
      };

    // For each sort, initialize the array, run the sort, and print time
    for (const auto &test : sortTests) {
      
    }

    return 0;
}
