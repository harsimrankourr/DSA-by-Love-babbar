#include <iostream>
#include <string>
#include <vector>
using namespace std;

int countAnagrams(string s, string p)
{
    int n = s.length();
    int k = p.length();

    // If pattern is larger than string
    if (k > n)
        return 0;

    // Frequency arrays
    vector<int> countP(26, 0);
    vector<int> countWindow(26, 0);

    // Store frequency of pattern
    for (int i = 0; i < k; i++)
    {
        countP[p[i] - 'a']++;
    }

    int ans = 0;

    // First window
    for (int i = 0; i < k; i++)
    {
        countWindow[s[i] - 'a']++;
    }

    // Check first window
    if (countP == countWindow)
    {
        ans++;
    }

    // Slide the window
    for (int i = k; i < n; i++)
    {
        // Add new character
        countWindow[s[i] - 'a']++;

        // Remove old character
        countWindow[s[i - k] - 'a']--;

        // Check if current window is an anagram
        if (countP == countWindow)
        {
            ans++;
        }
    }

    return ans;
}

int main()
{
    string s = "cbaebabacd";
    string p = "abc";

    cout << "Number of anagrams: "
         << countAnagrams(s, p) << endl;

    return 0;
}