/**
 * palindrome_checker - Function to help find a palindrome
 * @s: string
 * @start: start of the search
 * @end: end of the search
 * Return: 0 if not and 1 if palindrome
 */
int palindrome_checker(char *s,int start,int end)
{
        if (start >= end)
        {
                return (1);
        }
        if (s[start] != s[end])
        {
                return (0);
        }
        return (palindrome_checker(s, start + 1, end - 1));
}
