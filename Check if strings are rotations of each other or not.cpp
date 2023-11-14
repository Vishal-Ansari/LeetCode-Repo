class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        string ans=s1;
        int n1=s1.length();
        int n2=s2.length();
        if(n1!=n2) return false;
        if(s1==s2) return true;
        if(s1==s2) return true;
        
        
        for(int i=0;i<n1;i++){
            char end=ans.back();
            ans.pop_back();
            ans.insert(ans.begin(),end);
            
            if(ans==s2) return true;
        }
        return false;

      // or 
      //string ans=s1+s1;
        //return ans.substr(s2)!=-1;
    }
};
 
