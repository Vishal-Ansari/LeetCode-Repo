long  ans = 0, sum = 0;
        for(int i = 0; i < N; i++){
            if(i < K) 
                sum += Arr[i];
            else{
                ans = max(ans,sum);
                sum += Arr[i];
                sum -= Arr[i-K];
            }
        }
        ans = max(ans,sum);
        return ans;
