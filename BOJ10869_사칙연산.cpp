#include <iostream>
#include <cstdio>

using namespace std;


int one(int a, int b){
    
    return a+b;
  
}
int two(int a, int b){
    
    return a-b;
  
}
int three(int a, int b){
    
    return a*b;
  
}
int four(int a, int b){
    
    return a/b;
  
}
int five(int a, int b){
    
    return a%b;
  
}



int main(){
    
    int a,b;
    cin>>a>>b;
    cout<<one(a,b)<<endl;
    cout<<two(a,b)<<endl;
    cout<<three(a,b)<<endl;
    cout<<four(a,b)<<endl;
    cout<<five(a,b)<<endl;
    
}
