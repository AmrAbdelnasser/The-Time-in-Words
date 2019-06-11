#include <bits/stdc++.h>

using namespace std;

string twords(int m)
{
    map <int, string> tw;
    tw[1] = "one";
    tw[2] = "two";
    tw[3] = "three";
    tw[4] = "four";
    tw[5] = "five";
    tw[6] = "six";
    tw[7] = "seven";
    tw[8] = "eight";
    tw[9] = "nine";
    tw[10] = "ten";
    tw[11] = "eleven";
    tw[12] = "twelve";
    tw[13] = "thirteen";
    tw[14] = "fourteen";
    tw[15] = "fifteen";
    tw[16] = "sixteen";
    tw[17] = "seventeen";
    tw[18] = "eighteen";
    tw[19] = "nineteen";
    tw[20] = "twenty";
    tw[21] = "twenty one";
    tw[22] = "twenty two";
    tw[23] = "twenty three";
    tw[24] = "twenty four";
    tw[25] = "twenty five";
    tw[26] = "twenty six";
    tw[27] = "twnety seven";
    tw[28] = "twenty eight";
    tw[29] = "twenty nine";

    return tw[m];
}

// Complete the timeInWords function below.
string timeInWords(int h, int m)
{
    string tInW;
    if (m==0)
    {
        tInW = twords(h)+" o' clock";
    }
    else if (m==15)
    {
        tInW = "quarter past "+twords(h);
    }
    else if (m==30)
    {
        tInW = "half past "+twords(h);
    }
    else if (m==45)
    {
        tInW = "quarter to "+twords(h+1);
    }
    else if (m==1)
    {
        tInW = twords(m)+" minute past "+twords(h);
    }
    else if (m==59)
    {
        tInW = twords(60 - m)+" minute to "+twords(h+1);
    }
    else if (m>1 && m <30)
    {
        tInW = twords(m)+" minutes past "+twords(h);
    }
    else if (m>30)
    {
        tInW = twords(60 - m)+" minutes to "+twords(h+1);
    }

    return tInW;
}

int main()
{
    /*
    ofstream fout(getenv("OUTPUT_PATH"));

    int h;
    cin >> h;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = timeInWords(h, m);

    fout << result << "\n";

    fout.close();
    */
    int h = 5;
    int m = 59;
    cout<<timeInWords(h, m);

    return 0;
}
