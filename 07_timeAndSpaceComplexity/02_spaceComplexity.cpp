// What is Space Coplexity?

==> Amount of space taken by an algorithm to run as a function of lenght of input.

// Ques:1  int a = 1;   // variable
//         int b[5];   // array

//         int n;
//         cin n;
//         for(){

//         }

//         if we here increase the value of n then there would be any change in 'a'&'b' value so it's called constant time -> O(1)

// Ques:2    int n;
//1ex        cin>>n;
//           int *b = new int [n];      // here *b means pointer declaration
        
//        Print array b            

//2ex      for(int i=0; i<n; i++){
//        cout<<b[i];
//        }

//  NOte :-> 1ex:  n = 2
//              -> b[2] 
            //  2ex:  n=2000
            //     -> b[2000]     

            //  So its space complexity will be O(n)