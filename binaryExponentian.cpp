#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;
long long int binexp(long long int a,long long int b){
    if(b==1)
    return a;
    long long res=binexp(a,b/2);
    if(b%2==0)
    return (res*res)%mod;
    else{  
    return (a*((res*res)%mod)%mod);
    }
}
int main(){
    int a=18;
    int b=6;
cout<<binexp(34,43)<<endl;
return 0;
}