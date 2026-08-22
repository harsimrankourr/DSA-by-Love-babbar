#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int longestSubstring(string s)
{
    int left = 0;
    int maxLength = 0;

    unordered_map<char, int> mp;

    for (int right = 0; right < s.length(); right++)
    {
        // Add current character
        mp[s[right]]++;

        // If duplicate character is present,
        // shrink the window
        while (mp[s[right]] > 1)
        {
            mp[s[left]]--;

            if (mp[s[left]] == 0)
            {
                mp.erase(s[left]);
            }

            left++;
        }

        // Current window has no repetition
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main()
{
    string s = "abcabcbb";

    cout << "Longest substring length: "
         << longestSubstring(s) << endl;

    return 0;
}