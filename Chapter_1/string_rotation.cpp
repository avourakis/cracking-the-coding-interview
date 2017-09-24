#include <iostream>
#include <string>


/*
 * String rotation: Assume you have a method isSubstring which check if one word is a substring of another. Given two strings, s1 and s2,
 * write code to check if s2 is a rotation of s1 using only one call to isSubstring (e.g. "waterbottle" is a roation of "erbottlewat").
 */

bool is_substring(std::string s1, std::string s2)
{
    if(s1.find(s2) != std::string::npos)    
        return true;

    return false;
}

bool is_rotation_1(std::string s1, std::string s2)
{
    /*
     * s1 = waterbottle = xy
     * x = wat
     * y = erbottle
     * s2 = erbottle = yx
     * s2 will always be a substring of s1s1 or xyxy
     */

    return is_substring(s1+s1, s2);
}

int main()
{
    std::string s1 = "waterbottle";
    std::string s2 = "erbottlewat";

    std::cout << is_rotation_1(s1, s2) << std::endl;    
        
    return 0;
}
