class Solution {
    Boolean[][] memo;
    public boolean isMatch(String s, String p) {
        memo=new Boolean[s.length()+  1 ][p.length()+1];
        return match(0,0,s,p);
    }
    public boolean match(int i,int j,String s,String p){
        if(j==p.length()) return  i==s.length();
        // return memoisation array contains the result for these two indices
        if(memo[i][j]!=null) return memo[i][j];
            boolean firstMatch= i<s.length() && (s.charAt(i)==p.charAt(j)||p.charAt(j)=='.');
        boolean ans=false;
        if(j+1<p.length()&&p.charAt(j+1)=='*'){
            //aaaaaaa
            //a*b
            ans= (firstMatch && match(i+1,j,s,p))|| match(i,j+2,s,p);
        }
        else{
            //aa
            //ab
           ans= firstMatch && match(i+1,j+1,s,p);
        }
        //store the result
        memo[i][j]=ans;
        return ans;
    }
}






class Solution {
    public boolean isMatch(String s, String p) {
        return match(0,0,s,p);
    }
    public boolean match(int i,int j,String s,String p){
        if(j==p.length()) return  i==s.length();
            boolean firstMatch= i<s.length() && (s.charAt(i)==p.charAt(j)||p.charAt(j)=='.');
        boolean ans=false;
        if(j+1<p.length()&&p.charAt(j+1)=='*'){
            //aaaaaaa
            //a*b
            ans= (firstMatch && match(i+1,j,s,p))|| match(i,j+2,s,p);
        }
        else{
            //aa
            //ab
           ans= firstMatch && match(i+1,j+1,s,p);
        }
        return ans;
    }
}
















class Solution {
    public boolean isMatch(String s, String p) {
        return match(0,0,s,p);
    }
    public boolean match(int i,int j,String s,String p){
        if(j==p.length()) return  i==s.length();
            boolean firstMatch= i<s.length() && (s.charAt(i)==p.charAt(j)||p.charAt(j)=='.');
        boolean ans=false;
        if(j+1<p.length()&&p.charAt(j+1)=='*'){
            //aaaaaaa
            //a*b
            ans= (firstMatch && match(i+1,j,s,p))|| match(i,j+2,s,p);
        }
        else{
            //aa
            //ab
           ans= firstMatch && match(i+1,j+1,s,p);
        }
        return ans;
    }
}


