// What is Array?
//
// An array is a data structure which stores a set of similar items.
//
// Data structure:
// It is an entity/data structure used to store and organize data.
//
// How does an array work in memory?
//
// Let's say we have an array which stores 5 integers.
//
// int arr[5];
//
// As we know, one int generally takes 4 bytes.
// Therefore:
// 5 int -> 5 × 4 = 20 bytes.
//
// Note:
// Arrays store their elements in contiguous (continuous) memory locations.
//
// So, in memory, 20 bytes will be reserved for the 5 integers
// (assuming sizeof(int) is 4 bytes).
//
// For example:
//
// Address    Element
// 1000       arr[0]
// 1004       arr[1]
// 1008       arr[2]
// 1012       arr[3]
// 1016       arr[4]
//
// Each integer takes 4 bytes, so the next integer starts
// 4 bytes after the previous integer.
//
// Therefore, the array occupies a total of 20 bytes
// of contiguous memory.
//
// Important:
// 20 bytes does NOT mean 20 integers.
// It means 5 integers × 4 bytes = 20 bytes.