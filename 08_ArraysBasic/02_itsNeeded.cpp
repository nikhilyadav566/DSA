// Why is an Array needed?
//
// Suppose you want to create a single variable to store an int value:
//
// int a;
//
// Similarly, if you want to create 2 variables:
//
// int a;
// int b;
//
// If you want to create 10 variables, you could write:
//
// int a;
// int b;
// int c;
// ...
// int j;
//
// But if you need 10,000 integer values, creating 10,000
// separate variables manually would be difficult and inefficient.
//
// Therefore, we use an array.
//
// int arr[10000];
//
// This creates an array that can store 10,000 integer elements.
//
// If one int takes 4 bytes, then:
//
// 10000 × 4 = 40000 bytes
//
// So, the array requires 40,000 bytes (approximately 39.06 KiB)
// of contiguous memory for its elements.
//
// The main advantage is that we can access all 10,000 elements
// using one array name and an index:
//
// arr[0]
// arr[1]
// arr[2]
// ...
// arr[9999]