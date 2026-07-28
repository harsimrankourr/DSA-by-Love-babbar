
/*
string longestCommonPrefix(vector<string> &arr, int n)
{

    string ans = " ";
    // for tyravelling all characters of first string
    for (int i = 0; i < arr[0].length(); i++)
    {
        char ch = arr[0][i];

        bool match = true;

        // for comparing ch with rest as the string
        for (int j = 1; j < n; j++)
        {
            // not match
            if (arr[j].size < i || ch != arr[j][i])
            {
                break;
            }
        }
        if (match == false)
            break;
        elseans.push_back(ch);
    }
    return ans;
}
    */