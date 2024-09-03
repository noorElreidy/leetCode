//Given two strings word1 and word2, return the third string which is a merge of the two strings.


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:

    /* O(n) - 6 ms runtime - 9.64 MB memory*/
    string mergeAlternatelySlow(string word1, string word2) {

        int maxLength = std::max(word1.length(), word2.length());

        //return std::to_string(maxLength);

        string merged = "";

        for (int i = 0; i < maxLength; i ++ ){
            if (word1.length() > i){
                merged = merged + word1[i];
            }
            if (word2.length() > i){
                merged = merged + word2[i];
            }

        }

        return merged;
        
    }

    /* O(n) - 0 ms runtime -  7.82MB memory*/
    string mergeAlternatelyFaster(string word1, string word2) {
        std::string merged = "";
        int i = 0, j = 0;
        
        // Loop until one of the strings is exhausted
        while (i < word1.length() && j < word2.length()) {
            merged += word1[i++];
            merged += word2[j++];
        }
        
        // Append any remaining characters from word1 or word2
        if (i < word1.length()) {
            merged += word1.substr(i);
        }
        if (j < word2.length()) {
            merged += word2.substr(j);
        }
        
        return merged;
    }


    /* O(n) - 3 ms runtime - 8MB memory */
    string mergeAlternatelyFast(string word1, string word2) {
        std::vector<char> merged;
        int i = 0, j = 0;

        // Reserve memor
        merged.reserve(word1.length() + word2.length());

        // Merge characters alternately
        while (i < word1.length() && j < word2.length()) {
            merged.push_back(word1[i++]);
            merged.push_back(word2[j++]);
        }

        // Append remaining characters
        while (i < word1.length()) {
            merged.push_back(word1[i++]);
        }
        while (j < word2.length()) {
            merged.push_back(word2[j++]);
        }

        // Convert the vector to a string
        return std::string(merged.begin(), merged.end());
    }
};


int main() {
    Solution solution;
    std::string result = solution.mergeAlternatelySlow("abc", "pqr");
    std::cout << "Merged string: " << result << std::endl;
    return 0;
}