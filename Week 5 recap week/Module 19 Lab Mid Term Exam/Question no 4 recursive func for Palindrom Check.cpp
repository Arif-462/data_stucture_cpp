#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int i)
{

    if (i > s.size() / 2)
    {
        return true;
    }

    return s[i] == s[s.size() - i-1] && isPalindrome(s, i+1);
}

int main()
{
    string s;
    cin>>s;

    if (isPalindrome(s, 0))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
int palindrome_check(string s, int start, int end)
{
    if(end-start==1 || start==end)
    {
        return 1;
    }
    else
    {
        if(s[start]==s[end])
        {
            return palindrome_check(s,start+1,end-1);
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
   string s;
   cin>>s;
   int len =s.length();

   if(palindrome_check(s, 0, len-1))
   {
       cout<<"Yes"<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
   return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int checkPalindrome(char str[], int first, int last){
   if (first < last + 1){
      first++;
      last--;
      return checkPalindrome(str, first, last);
   }

   if (first == last){
      return 1;
   }
   if (str[first] != str[last]){
      return 0;
   }
   return 1;
}
// Driver Code
int main(){
   char Str[] = "madam";
   int result;
   int length = strlen(Str);
   if (length == 0){
      result=1;
   }

   else{
      result=checkPalindrome(Str, 0, length - 1);
   }
   if (result==1){
      cout << "Input string is palindrome.";
   }
   else{
      cout << "Input string is not a palindrome.";
   }
   return 0;
}

*/
