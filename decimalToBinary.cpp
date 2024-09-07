vector<int> dec2binary(int n){
    vector<int> bin;
    while(n>0){
        bin.insert(bin.begin(),n%2);
        n=n/2;
    }
    return bin;
}