class ProductOfNumbers {
public:
    vector<int> arr;
    ProductOfNumbers() {
        arr.clear();
        arr.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            arr.clear();
        arr.push_back(1);
        }
        else
            arr.push_back(arr.back()*num);
    }
    
    int getProduct(int k) {
        int n=arr.size();
        int product=1;
        if(n-k-1<0)return 0; 
        
        return arr.back()/arr[n-k-1];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
