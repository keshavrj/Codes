#include <bits/stdc++.h>

using namespace std;
 vector<string> ones={ "o' ", "one ", "two ", "three ", "four ",
                 "five ", "six ", "seven ", "eight ",
                 "nine ", "ten ", "eleven ", "twelve ",
                 "thirteen ", "fourteen ", "quarter ",
                 "sixteen ", "seventeen ", "eighteen ",
                 "nineteen " };
vector<string> tens={"", "", "twenty ", "half " };

string numword(int n)
{
    string str = "";
    if (n > 19)
        str += tens[n / 10] + ones[n % 10];
    else
        str += ones[n];
    return str;
}

string timeInWords(int h, int m){
    string hr ;
    string mnt;// = numword(m);
    string ans= "";
    if(m==0) {
            hr = numword(h);
            ans= hr+"o' clock";}
    else if(m==15){
         hr = numword(h);
         ans= "quarter past "+hr;
         }
    else if(m==45)
    {
            int z= h+1;
            hr= numword(z);
            ans= "quarter to "+hr;
    }
    else if(m==30)
    {hr = numword(h);
        ans= "half past "+hr;
    }
    else if(m<30)
        {
            mnt = numword(m);
            hr= numword(h);
            ans=mnt+"minutes past "+hr;
        }
    else if(m>30)
    {
        int y=h+1;
        hr= numword(y);
        int x=60-m;
        mnt= numword(x);
        ans=mnt+"minutes to "+hr;
    }
return ans;
}

int main()
{
    int h;
    cin >> h;
    int m;
    cin >> m;
    string result = timeInWords(h, m);

    cout << result << "\n";

    return 0;
}
