// Creating an Array:
//
// Declaration:
//
// int arr[10];
//
// int  => data type
// arr  => array name
// [10] => size of the array
//
// What happens after declaration?
//
// Space for 10 integer elements is allocated in contiguous
// memory locations.
//
// If one int takes 4 bytes:
//
// 10 × 4 = 40 bytes
//
// Suppose the starting address of the first element is 104:
//
// arr[0] → 104
// arr[1] → 108
// arr[2] → 112
// arr[3] → 116
// arr[4] → 120
// ...
//
// The address of the first element is called the base address.
//
// Therefore:
//
// Base address = address of arr[0]
//
// We can get the address of the first element using:
//
// cout << arr << endl;
//
// We can also get it using:
//
// cout << &arr[0] << endl;
//
// Both represent the address of the first element.
//
// IMPORTANT:
//
// arr is the array name.
// In most expressions, arr converts to a pointer to the first
// element, i.e. the address of arr[0].
//
// &arr is different:
// &arr means "address of the entire array", not simply a normal
// pointer to the first element.
//
// So:
//
// arr      → address of first element (in most expressions)
// &arr[0]  → address of first element
// &arr     → address of the entire array