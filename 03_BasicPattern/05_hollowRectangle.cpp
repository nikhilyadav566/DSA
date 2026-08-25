// create  hollow Rectangle
 
#include<iostream>
using namespace std;

int main(){

    for(int row=1; row<=3; row++){
        if(row==1 || row==3){        // first row or last row -> print 5 *
            for(int col=1; col<=5; col++){
                cout<<"*";
            }
        }
        else{                // remaining middle rows
          cout<<"*";           // print first star
          for(int i=1; i<=3; i++){        // apply another loop to print space 
          cout<<" ";                // here print space
      }
      cout<<"*";        // Now print star at the end
    }
      cout<<endl;       // break the line
    }
        
}


//          Output

            //    *****
            //    *   *
            //    *****