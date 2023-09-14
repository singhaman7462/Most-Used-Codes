void sortedinsert(stack<int> &s, int num){
    if(s.empty()||s.top()<=num){
    s.push(num);
    return;
}

int x=s.top();
s.pop();
sortedinsert(s,num);
s.push(x);
}
