class Solution {
    public String convert(String s, int numRows) {
        StringBuffer[] sb= new StringBuffer[numRows];
        for(int i=0;i<sb.length;i++)
            sb[i]=new StringBuffer();
        
        int len=s.length();
        int i=0;
        while(i<len)
        {
            for(int j=0;j<numRows && i<len ;j++)
                sb[j].append(s.charAt(i++));
            
            for(int j=numRows-2;j>0 && i<len;j--)
                sb[j].append(s.charAt(i++));
        }
        
        for(int k=1;k<numRows;k++)
            sb[0].append(sb[k]);
        
        return sb[0].toString();
    }
    
}