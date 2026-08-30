// Find a fourth that upon additon gives value equal to sum

#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr{10,20,30,40,50,60,70,80,90,100};
    int sum = 200;

    for(int i=0; i<arr.size(); i++){
        int element1 = arr[i];
        for(int j=1; j<arr.size(); j++){
            int element2 = arr[j];
            for(int k=2; k<arr.size(); k++){
                int element3 = arr[k];
                for(int l=3; l<arr.size(); l++){
                    if(element1+element2+element3+arr[l] == sum){
                        cout<<"Fourth Sum = "<<"{"<<element1<<","<<element2<<","<<element3<<","<<arr[l]<<"}"<<endl;

                    }
                }
            }

            return 0 ;
        }
    }
}


// Output 
// Fourth Sum = {10,20,70,100}
// Fourth Sum = {10,20,80,90}
// Fourth Sum = {10,20,90,80}
// Fourth Sum = {10,20,100,70}