#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string word, new_word, ni;
    getline(cin, word);
    int index = word.length();
        transform(word.begin(), word.end(), word.begin(), :: tolower);
    for(int i = 0; i<index; i++){

        if(word[i] == 'y' || ssword[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
            continue;
        }
        else{
            new_word = new_word + "." + word[i];
        }
    }
    cout << new_word;
}
