int firstOccurence(int arr[], int size, int key){

    int start=0, end=size-1;
    int mid=start+((end-start)/2), answer=-1;
    while(start<=end){
        if(arr[mid]==key){
            answer=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            end=mid-1;
        }
        else if(arr[mid]>key){
            start=mid+1;
        }
        mid=start+((end-start)/2);
    }    
    return answer;
}