int beg=0;
    int end=n-1;
    int mid=beg+(end-beg/2);
   
    while(beg<=end){
        if(arr[mid]==x){
        result=mid;
        break;
        }
        else if(arr[mid]<x)
        beg=mid+1;
        else 
        end=mid-1;
       mid=beg+(end-beg/2);
    }
