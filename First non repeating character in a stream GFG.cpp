class Solution {
	public:
		string FirstNonRepeating(string stream){
    queue<char> q;
    unordered_map<char, int> mp;

    string ans;

    for (char ch : stream) {
        mp[ch]++;
        // add the elemet into the queue if it is non repeating
        if (mp[ch] == 1) {
            q.push(ch);
        }

        // Remove the characters from the queue that are no longer non-repeating
        while (!q.empty() && mp[q.front()] > 1) {
            q.pop();
        }

        // Append '#' to the ans if there are no non-repeating characters
        if (q.empty()) {
            ans += '#';
        } else {
            ans += q.front();
        }
    }

    return ans;
}

};
