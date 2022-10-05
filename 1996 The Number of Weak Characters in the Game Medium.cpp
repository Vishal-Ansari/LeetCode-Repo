class Solution
{
public:
    int numberOfWeakCharacters(vector<vector<int>> &properties)
    {
        sort(properties.begin(), properties.end());
        int n = properties.size();
        int maxd = INT_MIN;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (properties[i][1] > maxd)
                ans++;
            maxd = max(maxd, properties[i][1]);
        }
        return ans;
    }
};







class Solution
{
public:
    static bool comp(vector<int> & a, vector<int> & b)
    {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>> & properties)
    {
        int n = properties.size();
          sort(properties.begin(), properties.end(), comp);
          int maxdef = INT_MIN;
          int count = 0;
          for (int i = n - 1; i >= 0; i--)
        {
             if (properties[i][1] < maxdef) count++;
              maxdef = max(maxdef, properties[i][1]);
             
        }
        return count;
    }
};