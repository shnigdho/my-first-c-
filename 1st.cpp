


// #include<iostream>
// using namespace std;
//  int main(){
//  int amount1;
//  cin>>amount1;

//  int amount2;
//  cin>>amount2;

//  int sum = amount1+amount2;
//  cout<<sum;

//     return 0;
//  }

#include<iostream>

using namespace std;
int max(int a,int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    // int mx = max(a,max(b,c));
    // cout<<mx<<endl;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
    }else if(b>a){
        if(b>c){
            cout<<b<<endl;
        }
    }else{
        cout<<c<<endl;
    }


    return 0;
}