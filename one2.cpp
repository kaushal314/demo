// #include<iostream>
// using namespace std;
// // bool isprime(int n){
// //     if(n==1){
// //         return false;
// //     }
// //     for(int i=2;i*i<=n;i++){
// //         if(n%i==0){
// //             return false;
// //         }
// //     }
// //     return true;
// // }
// // int allp(int n){
// //     for(int i=1;i<=n;i++){
// //         if(isprime(i)){
// //             cout<<i<<" ";
// //         }
// //     }
// //     cout<<endl;
// // }
// int rev(int n){
// int re=0;
// while(n>0){
//     int a=n%10;
//     re=re*10+a;
//     n=n/10;
// }
// return re;
// }
// int main(){
//     // int n=15;
//     // allp(n);
//     int n=121;
//     int r=rev(n);
//     if(n==r){
//         cout<<"palindrome\n";
//     }
//     else{
//         cout<<"not a palindrome\n";
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int rev(int n){
int re=0;
while(n>0){
    int a=n%10;
    re=re*10+a;
    n=n/10;
}
return re;
}
int main(){
    // int n=15;
    // allp(n);
    int n=121;
    int r=rev(n);
    if(n==r){
        cout<<"palindrome\n";
    }
    else{
        cout<<"not a palindrome\n";
    }
    return 0;
}