class Solution
{
public:
    bool halvesAreAlike(string s)
    {

        int n = s.size();
        int count1 = 0, count2 = 0;
        for (int i = 0; i < n / 2; i++)
        {
            char c = s[i];
            if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            {
                count1++;
            }
        }
        for (int i = n / 2; i < n; i++)
        {
            char c = s[i];
            if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') || (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            {
                count2++;
            }
        }
        cout << count1 << " " << count2 << endl;
        if (count2 == count1)
            return true;
        else
            return false;
    }
};