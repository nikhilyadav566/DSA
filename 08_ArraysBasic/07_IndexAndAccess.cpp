// Indexing and Accessing an Array
//
// int arr[5] = {10, 20, 30, 40, 50};
//
//             |   |   |   |   |
// Index No.   0   1   2   3   4
//
// Size of array = 5
// Index range = 0 to 4
//
// For an array of size n:
//
// Index range = 0 to (n - 1)
//
// This is called 0-based indexing.
//
// We can access elements using their index:
//
// arr[0] → 10
// arr[1] → 20
// arr[2] → 30
// arr[3] → 40
// arr[4] → 50
//
//
// How does arr[index] work?
//
// Suppose the base address of arr is 1000
// and sizeof(int) = 4 bytes.
//
// Address calculation:
//
// Address = Base Address + (Index × Size of Data Type)
//
// For arr[0]:
//
// = 1000 + (0 × 4)
// = 1000
//
// For arr[1]:
//
// = 1000 + (1 × 4)
// = 1004
//
// For arr[2]:
//
// = 1000 + (2 × 4)
// = 1008
//
// Therefore:
//
// arr[index]
// means accessing the element at that index.
//
// Conceptually:
//
// arr[index]
// = *(arr + index)
//
// Here:
//
// arr     → represents the address of the first element
//           in most expressions
//
// index   → the index number
//
// sizeof(int) → 4 bytes in this example
//
// Pointer arithmetic automatically accounts for the size
// of the data type, so:
//
// arr + 1
//
// means the address of the next int, not simply
// "one byte after arr".