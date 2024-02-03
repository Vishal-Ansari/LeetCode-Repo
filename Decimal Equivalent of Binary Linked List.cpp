class Solution
{
    public:
        // Should return decimal equivalent modulo 1000000007 of binary linked list 
        long long unsigned int decimalValue(Node *head)
        {
           int n=0;
           string str="";
           int mod=1e9+7;
           Node* temp=head;
           long long unsigned int power=1;
           long long unsigned int ans=0;
           while(temp){
               n++;
               str+=char(temp->data);
               temp=temp->next;
           }
           for(int i=n-1;i>=0;i--){
               int x=int(str[i]);
               ans= ans+x*power;
               ans=ans%mod;
               power= (power*2)%mod;
           }
           return ans%mod;
        }
};
