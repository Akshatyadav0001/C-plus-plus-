
#include <bits/stdc++.h>
using namespace std;
/*void printDups(string str)
{
    unordered_map<char, int> count;
    for (int i = 0; i < str.length(); i++) {
        // increase the count of character str[i] by 1
        count[str[i]]++;
    }
    // iterating through the unordered map
    for (auto it : count) {
        // if the count of characters is greater than 1 then
        // duplicate found
        if (it.second > 1)
            cout << it.first << ", count = " << it.second
                 << "\n";
    }
}
/* Driver code*/
void findDuplicate(string str){
    int len = str.length();
    sort(str.begin(),str.end());
    for(int i=0; i<len; i++){
        int count = 1;

        while(i<len - 1 && str[i]==str[i+1]){
            count++;
            i++;
        }
        if(count > 1) cout << str[i] <<", string = "<< count<<"\n";

    }
}
int main()
{
    string str = "test string";
    findDuplicate(str);
    return 0;
}
