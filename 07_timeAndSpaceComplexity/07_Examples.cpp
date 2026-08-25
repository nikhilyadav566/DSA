//  Examples

// Ex:1 
int main(){
    int a=0,b=0,n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cout<<"Hi\n";
    }
    for(int i=0;i<m;i++){
        cout<<"Hi2\n";
    }
    return 0;
}

//  In it takes 'nth'and 'mth' intput which run inside for loops which both are sepreately use (n&m) not both are nested that's why its BigO complexity will be 
//         O(n)+O(m) => O(n+m) complexity


// Example:2
int main(){
    int a=0,b=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int i=0;i<n;i++){
            cout<<"Hi1\n";
        }
    }
    for(int i=0;i<n;i++){
        cout<<"Hi2\n";
    }
    return 0;
}   

//   There is given nested loop above so its complexity will be O(N^2)
//   And below there is a single loop and its complexity will be O(N)

//  So now will be O(N^2)+O(N)
//  But as we know we check upper bound like this expression
//  so will be choose O(N^2)  
//  O(N^2) will be complexity  


// Example:3
int main(){
    int a=0,b=0,n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=n;j>i;j--){
            cout<<"Hi1\n";
        }
    }
    return 0;
}

//  O(N^2)