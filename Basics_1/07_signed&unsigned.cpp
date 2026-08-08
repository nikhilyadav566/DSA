// ============================================================
//                INTEGER AND MEMORY
// ============================================================


// int → usually 4 bytes → 32 bits
//
// 1 byte = 8 bits
// 4 bytes = 4 × 8 = 32 bits
//
// Each bit has 2 possible values:
//
// 0 or 1
//
// Therefore:
//
// Total combinations = 2^32
//
// 2^32 = 4,294,967,296
//
// So, a 32-bit integer has
// 4,294,967,296 different possible combinations.


// ============================================================
//                  TWO TYPES OF INTEGER
// ============================================================


// 1. SIGNED INTEGER
// -----------------

// Signed means the variable can store:
//
// a. Positive numbers
// b. Negative numbers
// c. Zero


// 2. UNSIGNED INTEGER
// -------------------

// Unsigned means the variable can store:
//
// a. Positive numbers
// b. Zero
//
// It cannot store negative numbers.


// ============================================================
//                  UNSIGNED INTEGER
// ============================================================

// 2^32 possible combinations
//        ↓
// All combinations are used to represent
// zero and positive numbers
//        ↓
// Start counting from 0
//        ↓
// Last value = 2^32 - 1
//
// Therefore:
//
// Range = 0 → 2^32 - 1
//
// In numbers:
//
// 0 → 4,294,967,295


// ============================================================
//                   SIGNED INTEGER
// ============================================================

// 2^32 possible combinations       ↓
//    Combinations are divided between
// negative and non-negative numbers
//        ↓
// 2^32 / 2 = 2^31                    firstly 2^32 is divided into two parts negative and positive and zero will be between them that's why 2^32 is divided by 2.
// Therefore:
//      Negative range:
//        -2^31 → -1
//
// Non-negative range:
// 0 → 2^31 - 1
//
// Final signed range:
//
// -2^31 → 2^31 - 1
//
// In numbers:
//
// -2,147,483,648 → 2,147,483,647


// ============================================================
//                WHY DO WE USE -1?
// ============================================================

// Simple answer:
//
// -1 is used because counting starts from 0,
// not from 1.


// ------------------------------------------------------------
// Example:
// ------------------------------------------------------------

// Suppose there are 4 possible values.
//
// 4 possible values
//        ↓
// Start counting from 0
//        ↓
// 0, 1, 2, 3
//        ↓
// Last value = 3
//
// Therefore:
//
// 4 - 1 = 3
//
// So:
//
// 4 possible values → 0 to 3


// ------------------------------------------------------------
// MAIN CONCEPT
// ------------------------------------------------------------

// 2^32 possible values
//        ↓
// Start counting from 0
//        ↓
// Last value = 2^32 - 1
//
// Therefore:
//
// Range = 0 → 2^32 - 1


// ============================================================
//                    EASY TO REMEMBER
// ============================================================

// N possible values
//        ↓
// Start counting from 0
//        ↓
// Last value = N - 1
//
// Examples:
//
// 4 values  → 0 to 3
// 8 values  → 0 to 7
// 10 values → 0 to 9
//
// 2^32 values
//        ↓
// Start from 0
//        ↓
// Last value = 2^32 - 1

// Note:- > By the using of same method we can find the range of all datatypes
// like as char , short etc.

// char -> 1byte -> 8bits

//  total combination -> 2^8

//  for unsigned :-> the ranges will be 0->2^8-1
//  for signed :-> the reange will be -2^7->2^7-1

//  short -> 2bytes -> 16 bits

// total combination -> 2^16 

// for unsigned :-> the range will be 0->2^16-1
// for signed :-> the range will be -2^15->2^15-1

So If n no. of bits given 

then unsigned -> 0->2^n-1
     signed -> -2^n-1->(2^n-1)-1

     these are the formula by which we can get the range of datatypes
