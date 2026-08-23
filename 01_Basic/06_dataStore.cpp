// ============================================================
//              DATA STORED IN MEMORY
// ============================================================


// 1. POSITIVE NUMBERS
// -------------------

// Example:
// int a = 5;

// int usually takes 4 bytes.
// 1 byte = 8 bits
// 4 bytes = 4 × 8 = 32 bits

// Binary of 5:
// 101

// In 32 bits:
// 00000000 00000000 00000000 00000101

// The zeros before the actual number (101) are called
// "leading zeros".

// For a positive number:
// MSB (Most Significant Bit) = 0         means first bit no will be 0

// If the first (leftmost) bit is 0,
// the number is positive / non-negative.


// 2. NEGATIVE NUMBERS
// -------------------

// Example:
// int a = -5;

// Negative numbers are stored using 2's complement.

// Steps to store -5:
//
// Step 1: Ignore the negative (-) sign
//         Find binary of 5.
//
//         5 = 00000000 00000000 00000000 00000101
//
//
// Step 2: Find 1's complement
//
//         Change:
//         0 → 1
//         1 → 0
//
//         00000000 00000000 00000000 00000101
//         ↓
//         11111111 11111111 11111111 11111010
//
//
// Step 3: Add 1
//
//         11111111 11111111 11111111 11111010
//                                      + 1
//         -----------------------------------
//         11111111 11111111 11111111 11111011
//
//
// Therefore:
//
//         -5 = 11111111 11111111 11111111 11111011
//
// For a negative number:
// MSB = 1       firs bit no. will be 1

// If the first (leftmost) bit in memory is 1,
// the number is negative.


// ============================================================
//              1's COMPLEMENT
// ============================================================

// 1's complement means:
// Change every 0 to 1
// Change every 1 to 0

// Example:
//
// Original:
// 00101011
//
// 1's complement:
// 11010100


// ============================================================
//              2's COMPLEMENT
// ============================================================

// 2's complement means:
// 1's complement + 1

// Example:
//
// 1's complement:
// 11010100
//
// Add 1:
// 11010100
//        +1
// ---------
// 11010101
//
// 11010101 = 2's complement


