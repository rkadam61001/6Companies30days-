#include <bits/stdc++.h>
using namespace std;

int main() {

  #include <bits/stdc++.h>
using namespace std;

int main() {  
    int n;
    cin >> n;

    vector<vector<int>> arr(n);

    for (int i = 0; i < n; ++i)
    {
        string version;
        cin >> version;
        arr[i].push_back(0);
        for(char ch: version)
        {
            if(ch == '.')
                arr[i].push_back(0);
            else
                arr[i].back() =  arr[i].back()*10 + (ch-48) ;
                cout<<arr[i].back()<<endl;
        }
    }

    sort(arr.begin(), arr.end());


    bool flg = false;

    for(auto n: arr.back())
    {
        if(flg) cout << ".";
        cout << n;
        flg = true;
    }

    return 0;
}
