using namespace std 

   // here std meand want to use standard namespace .

   // Why does need it ?

   // Suppose there are three sudents whose names are Rahul kumar in a same class 
   // If i want to call one of them but how did they understand to whom i called then there would be confusion.
   // means there would be collision(confusion) ,
   // So solve their collision we have to add additional information may be each college id , roll no etc it may be anything its just an example to understand.

   That why To solve the collison namespace use.
   
  // Suppose there are two folders .
  // The name of 1st folder is n1 and 2nd is n2. 
  // And in each folder there is same name function available like as:-> solve()
  // If i want to call solve() of n1
  // then compiler will be confuse means there would be collision occure it needs additional information
  // that why we type 
      n1::solve()
  // by the using of it there would not be collision and we can call function.   
  
  
//   There are some predefined namespaces  and also we can also create custom namespace