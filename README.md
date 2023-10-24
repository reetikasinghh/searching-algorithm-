# searching-algorithm-
Aim
The aim of this experiment is to implement and compare two popular searching algorithms, Linear Search and Binary Search. It allows us to search for a specific element within an array of integers and determine whether the element exists in the array. These algorithms provide insights into how searching can be performed in programming.

Theory
Linear Search: Linear search is a basic searching algorithm that examines each element of the array one by one until a match is found or the entire array is traversed. It's simple but not very efficient for large arrays, as it has a time complexity of O(n).

Binary Search: Binary search is a more efficient algorithm for searching in a sorted array. It works by repeatedly dividing the search interval in half. It has a time complexity of O(log n), making it faster for larger datasets.

Algorithm
Linear Search
Take user input for the size of the array and the array elements.
Take input for the target element you want to search.
Start a loop to traverse the array.
For each element in the array, check if it matches the target element.
If a match is found, return the index where it was found.
If no match is found after traversing the entire array, return -1 to indicate the element was not found.
Binary Search
Similar to Linear Search, take user input for the size of the array and the array elements.
Take input for the target element you want to search.
Initialize variables for low and high indices for the binary search.
Start a loop while the low index is less than or equal to the high index.
Calculate the mid-point index.
Check if the element at the mid-point matches the target.
If it does, return the mid-point index.
If the target is less than the mid-point element, adjust the high index to search the left subarray.
If the target is greater, adjust the low index to search the right subarray.
Continue the loop until the element is found or the search interval is empty.
If no match is found, return -1.
Conclusion
This experiment demonstrates the two searching algorithms, Linear Search and Binary Search. Linear Search is a simple but less efficient method, while Binary Search is more efficient but requires a sorted array. By comparing these algorithms, we gain insights into the importance of selecting the right search algorithm for specific scenarios.

