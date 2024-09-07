long long int binary2dec(vector<int> &bin){
    long long int num=0;
    int n=bin.size();
    for(int i=0;i<n;i++){
        if(bin[n-1-i])
        num+=pow(2,i);
    }
    return num;
}