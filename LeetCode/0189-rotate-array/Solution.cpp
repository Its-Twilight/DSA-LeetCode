class Solution {
public:
   void main(){
    int k;
    vector<int> nums;
    int n;
    cout<<"Enter the lenght of vector:";
    cin>>n;
    for(int j=0;j<n;j++){
        cout<<"Enter the number in vector at";
        cout<<j+1;
        cin>>nums[j];
    }
    cout<<"Enter the times u want to rotate vector";
    cin>>k;
    rotate(nums ,k);
   }


   void  rev(vector<int>& nums, int left, int right){
        while(left<right){
            int temp = nums[left];
            nums[left]=nums[right];
            nums[right]=temp;
            left++;
            right--;
        }
   }

    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if (k==0) return;
        rev(nums, 0, n-1);
        rev(nums, 0, k-1);
        rev(nums, k, n-1);
        cout<<"After rotating it by "<<k<<" it will become :";
        for(int i=0;i<n;i++){
            cout<<nums[i];
        }  
    }

};