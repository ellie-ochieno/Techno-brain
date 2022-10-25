//Reverse order of words

#include<bits/stdc++.h>
using namespace std;
      // inclide essential handlers

      // fn prototyping
void reverseWordHandler(string word_input);

string reverseWordRslt, str_word;
      //declare var word handler

      //word reverse control fn handler
void reverseWordHandler(string word_input)
{
	// make word stream
	stringstream word_stream(word_input);

	// traverse through the i/p and reverse the string orse
	while (word_stream >> reverseWordRslt){
		reverse(reverseWordRslt.begin(),reverseWordRslt.end());
		cout<<reverseWordRslt<<" ";
	}
}

// Driver code
int main()
{
  cout << "\n\t  Enter a word: ";
  cin >> str_word;
	reverseWordHandler(str_word);
	return 0;
}
// This code is contributed by Nikhil Rawat
