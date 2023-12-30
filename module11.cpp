#include<iostream>
#include<string>

using namespace std;

int main(){
    char a = 'z';
    // strings: 1 direction char arrays

    string name = "aryan";

    // legacy string operations(with char arrays): just like C(concept of null termination)
    // refer to C language string notes ;)


    // proper strings in C++
    // very much like vector array, but internally its stored as a null terminated C string

    // reverse words in a sentence
    {
        string rev = "this is a good day";
        int start = 0;
        int end;
        for (int i = 0; i < rev.size(); ++i) {
            if(rev[i] == ' '){
                end = i-1;
                while(start <= end){
                    swap(rev[start], rev[end]);
                    start++;
                    end--;
                }
                start = i+1;
            }
        }
        // handling the last word in a sentence
        end = rev.size()-1;
        while(start <= end){
            swap(rev[start], rev[end]);
            start++;
            end--;
        }
        cout << rev << endl;
    }

    // getting a whole sentence as input
    // we can do it using cin.getline(refer to docs)

    // strcmp strcpy strlen functions: just like C language

    return 0;
}