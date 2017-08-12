#include <iostream>
#include <string>

/*
 * Is Unique: Implement an algorithm to determine if a stringhas all
 * unique characters. What if you cannot use additional data structures?
 *
 */

bool is_unique_1 (std::string word)
{
    // This implementation uses no additional data structures

    for(int i = 0; i < word.length(); i++)
    {
        char current_char = word[i];

        for(int j = 0; j < word.length(); j++)
        {
            if(j != i) // Make sure we don't look at the current index
            {
                if(word[j] == current_char)
                    return false;
            }
        }
    }

    return true;
}

int main()
{
    std::string s1 = "Hello";
    std::string s2 = "A sentence";
    std::string s3 = "coming";
    std::string s4 = "Bears, Beets, BattleStar Galatica";

    std::cout << "Is '" << s1 << "' Unique? " << (is_unique_1(s1) ? "True" : "False") << std::endl;
    std::cout << "Is '" << s2 << "' Unique? " << (is_unique_1(s2) ? "True" : "False") << std::endl;
    std::cout << "Is '" << s3 << "' Unique? " << (is_unique_1(s3) ? "True" : "False") << std::endl;
    std::cout << "Is '" << s4 << "' Unique? " << (is_unique_1(s4) ? "True" : "False") << std::endl;
    return 0;
}
