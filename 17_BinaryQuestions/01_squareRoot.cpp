// Find SquareRoot of a number by using Binary Search.

//  To find the squareRoot of a number we should keep in mind one thing

// i.e suppose to find the √12 -> one thing in mind  that the number will be lies between  0 to 12
//           √12 ->  (0_ _ _ _ _ _12)-> the number will be lies between (0 to 12).
                            ↓
//                 it's called search space 
//                          ↓
//      It output will be lies between 0 to 12. 


//    There are three condition should follow 

// 1.   if(mid*mid>target)
        // -> search in left side

// 2.   if(mid*mid<target)
        //       ans sotre
        //   And search in right side

// 3.   if(mid*mid==target)
            //   return mid