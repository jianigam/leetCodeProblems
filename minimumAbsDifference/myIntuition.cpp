class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> result;

        int min=100000001;
      //finding minimum n2
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((abs(arr[i]-arr[j])<min) && arr[i]!=arr[j]){
                    min=abs(arr[i]-arr[j]);
                }
            }
        }

      // if for all elements there +min and -min exist then add the pair in result vector
        for(int i=0;i<n;i++){
            if(std::find(arr.begin(), arr.end(), arr[i+min]) != arr.end()){ result.push_back({arr[i], arr[i + min]});}
            if(std::find(arr.begin(), arr.end(), arr[i-min]) != arr.end()){ result.push_back({arr[i],arr[i-min]});}

        }

    return result;
    }
};
