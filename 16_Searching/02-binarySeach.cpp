// Binary Search  :-> It is an algorithm which is used to search an element in array.

//  If i want to apply binary search on an array then there would be follow some condition.
//         Element of Array should be in monotonic order.

//     Monotonic  means
//  element would be in increasing or decreasing order in another word we can say should be sorted.

//  then we can apply binary search on array .


//    WHAT DOES BINARY SEARCH 

        

//          ┌───┬───┬───┬───┬───┬───┬───┬───┬───┐
// Array →  │ 1 │ 3 │ 4 │ 9 │11 │13 │15 │19 │21 │
//          └───┴───┴───┴───┴───┴───┴───┴───┴───┘
// Index ->   0   1   2   3   4   5   6   7   8 

//  Step:1  ->   first binary search initialise two variables,
//     i.e  ->   int start = 0 
//               int end = n-1 ( 9-1=8 which means 8th index)

//  Step:2  ->    find mid (start+end)/2
//   i.e    ->    (0+8)/2 => 8/2 = 4
//           ->    so mid will be 4rd index.
//          ->      And at 3rd index 11 is available.

//     NOW HOW DOES IT WORK

//    Suppose , target = 15

//  step:1->   first it check that at mid = target(15).
//  step:2->   if equal then print found .
//  step:3->   if not equal then compare mid index value(i.e -> 11) is greater or less than target value(15)
//  step:4->   if greater then , next index will be equal to int start (mid + 1), And end will be equal last index(remain same)
//               now,
//                     int start = 5 ; 
//                     int end = 7 ;   it would be same
//                   mid = (5+7)/2; 
//                       = 6 (6th index) -> 15
//             And now mid index(value) is equal to target value
//                     mid = target value
//               then print found.

// step:5->    if target value will be less than mid index(value) ,
// step:6->     then start will be remain same but end will be change
//       ->           int start = 0;
//       ->           int end = mid index-1   (previous mid index)
//       ->                   = 4-1  = 3 
// step:7->      agan find mid  = (start+end)/2
//       ->                          (0+3)/2  -> 1

//    if here mid will equal to target then print found otherwise do same process
