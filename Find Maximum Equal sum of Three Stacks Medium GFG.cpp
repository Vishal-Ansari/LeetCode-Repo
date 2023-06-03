class Solution{
public:
    int maxEqualSum(int N1,int N2,int N3,vector<int> &S1,vector<int> &S2,vector<int> &S3){
        int sum1=0,sum2=0,sum3=0;
        for(int i=0;i<N1;i++) sum1+=S1[i];
        for(int i=0;i<N2;i++) sum2+=S2[i];
        for(int i=0;i<N3;i++) sum3+=S3[i];
        
    
        int i=0,j=0,k=0;
        while(i<N1 && j<N2 && k<N3){
            if(sum1==sum2 && sum2==sum3){
                return sum1;
            }
            else if(sum1>sum2 or sum1> sum3){
                sum1-=S1[i];
                i++;
            }
            else if(sum2>sum1 or sum2>sum3){
                sum2-=S2[j];
                j++;
            }
            else if(sum3>sum1 or sum3>sum2){
                sum3-=S3[k];
                k++;
            }
        }
        return 0;
    }
};
