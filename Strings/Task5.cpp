#include<iostream>
#include<string>
using namespace std;

string concatWithoutDuplicates(const string& s1, const string& s2) {
    string res = s1+s2;

    for(size_t i=0; i<res.size(); i++) {
        for(size_t j=i+1; j<res.size(); j++) {
            if(res[i] == res[j]) {
                res.erase(j, 1);
                --j;
            }
        }
    }

    return res;
}

int main() {
    string s1 = "apple";
    string s2 = "orange";
    string res = concatWithoutDuplicates(s1, s2);

    cout << "Concatenated Strings without duplicates: " << res << endl;

    return 0;
}