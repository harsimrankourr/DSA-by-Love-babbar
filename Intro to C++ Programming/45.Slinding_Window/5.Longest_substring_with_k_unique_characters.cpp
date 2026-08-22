#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestSubstring(string s, int k)
{
    int n = s.length();

    int left = 0;
    int maxLength = 0;

    unordered_map<char, int> mp;

    for (int right = 0; right < n; right++)
    {
        // Add current character
        mp[s[right]]++;

        // If unique characters become greater than k
        // shrink the window
        while (mp.size() > k)
        {
            mp[s[left]]--;

            if (mp[s[left]] == 0)
            {
                mp.erase(s[left]);
            }

            left++;
        }

        // If exactly k unique characters
        if (mp.size() == k)
        {
            maxLength = max(maxLength, right - left + 1);
        }
    }

    return maxLength;
}

int main()
{
    string s = "aabacbebebe";
    int k = 3;

    cout << "Longest substring length: "
         << longestSubstring(s, k) << endl;

    return 0;
}