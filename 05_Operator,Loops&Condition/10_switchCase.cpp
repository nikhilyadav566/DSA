//  Switch Case:->
//      its uses while multiple conditions and multiple cases  .

// Syntax
 
//     switch(expr)
    //    {
    //     case 1: ____
    //             break;
    //     case 2: ____
    //             break; 
    //     default: _____
    //              _____       
    //    }


    #include<iostream>
    using namespace std;

    int main(){

        int value;
        cout<<"Enter the value"<<endl;
        cin>>value;

        switch(value){
            case 1: cout<<"Nikhil"<<endl;
            break;
            case 2: cout<<"Satyam"<<endl;
            break;
            case 3: cout<<"Rudra"<<endl;
            break;
            case 4: cout<<"Sandeep"<<endl;
            break;
            default: cout<<"Please enter value between 1 to 4"<<endl;
        }
    }

    //   Enter the value
    //     3
    //     Rudra