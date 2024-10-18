# CompareSortsStart
C++ program to compare many types of sorts

In this lab you are going to implement various sorting algorithms we discussed. You will also compare their performances.
Create an integer array of size S. Fill in the array with random numbers n where 1,000,000≥n≥0. Apply each of the following sorting algorithms to sort the array

  - Bubble Sort
  - Selection Sort
  - Insertion Sort
  - Shell Sort
  - Merge Sort
  - Quick Sort with pivot as the middle element
  - Quick Sort with pivot as the median of the first, last and middle elements of the array
  - Quick Sort with pivot as a random element of the array (use the rand function to choose a random arrray index)

Before applying each algorithm, initialize the array to the original state (randomly filled values) by saving a copy of the original array. After applying each sort function print out the first 20 elements of the array to make sure that it is really sorted (your sort algorithm is working correctly).
Also measure and report the (CPU) time each algorithm takes. You can see how to time code in this code.  For each run output a table of results showing the sort type, first 20 elements, the number of comparisons done, and the number of seconds taken.

Create a loop that repeats this test process for arrays of size S where S =  i* 10,000 for i =1, 2, 4, 6, 8.

I have included a function measureTime that you can call and pass a sort and data to, it will run the sort and time it.

Create a list of sorting functions, and iterate over the list.  I have started it for you.
