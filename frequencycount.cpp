#include<bits/stdc++.h>
using namespace std;

void frequencycount(string s)
{
    unordered_map<char,int> count;
    int i;
    for(i=0;i<s.length();i++)
    {
        if(count.find(s[i]) == count.end())
            count.insert(make_pair(s[i],1));
        else
            count[s[i]]++;
    }
    for(auto&it : count)
        cout<<it.first<<' '<<it.second<<endl;
}
int main()
{
    string s;
    cin>>s;
    frequencycount(s);
    return 0;
}
