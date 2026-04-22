#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
    map<string,int> freq;
    string sentence, word;

    cout<<"Enter a sentence: ";
    getline(cin, sentence);

    for(int i=0; i<sentence.length(); i++)
    {
        if(sentence[i] != ' ')
        {
            word = word + sentence[i];
        }
        else
        {
            if(word != "")
            {
                freq[word]++;
                word = "";
            }
        }
    }

    if(word != "")
    {
        freq[word]++;
    }

    cout<<"\n--- Word Frequency ---\n";

    map<string,int>::iterator it;
    for(it = freq.begin(); it != freq.end(); it++)
    {
        cout<<it->first<<" : "<<it->second<<endl;
    }

    return 0;
}
