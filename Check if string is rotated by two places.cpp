int n=s1.length();
        if(n==2) return s1==s2;
        for(int i=0;i<n;i++){
            if( s1[(i+2)%n]==s2[i] || s1[(n+i-2)%n]==s2[i] ) continue;
            else return false;
        }
        return true;
