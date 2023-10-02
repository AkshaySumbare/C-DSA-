#include <bits/stdc++.h>
using namespace std;

void solve(string str, vector<string> &ans, int index) {
    if(index >= str.length()) {
        ans.push_back(str);
        return;
    }

    for(int i=index; i<str.length(); i++) {
        swap(str[i], str[index]);
        solve(str, ans, index+1);
        swap(str[i], str[index]);
    }
}

vector<string> permute(string str) {
    vector<string> ans;
    int index = 0;

    solve(str, ans, index);
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    string str;

    cout << "Enter the string : ";
    getline(cin, str);

    vector<string> ans = permute(str);

    cout << "All permutations : " << endl;
    for(int i=0; i<ans.size(); i++) {
        cout << "{ " << ans[i] << " }" << endl;
    }

    return 0;
}