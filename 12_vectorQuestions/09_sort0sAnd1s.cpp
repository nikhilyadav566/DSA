 //  Sort 0's & 1's

 #include<iostream>
 #include<vector>

 using namespace std;


 int main(){

    vector<int> arr{0,1,0,0,1,0,1,1,0,1};

    int start=0;
    int end = arr.size()-1;
    int i = 0;

    while(i != end){

        if(arr[i]==0){
            swap(arr[start], arr[i]);
            start++;
            i++;
        }

        else{
            swap(arr[end],arr[i]);
            end--;
        }

        // Also solve like this instead of else
        // if(arr[i]==1){
        //     swap(arr[end],arr[i]);
        //     end--;
        // }

    }

    //  print 
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
 }


 //  OUTPUT
 //    0 0 0 0 0 1 1 1 1 1