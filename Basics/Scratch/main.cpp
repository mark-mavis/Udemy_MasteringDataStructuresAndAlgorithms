#include <iostream>

bool checker(std::string s) {
    if (s.length() % 2 == 1) return false;
    
    bool ans = false;

    int parensCount = 0;
    int bracketsCount = 0;
    int curlybraceCount = 0;

    bool parensMatch = true;
    bool bracketsMatch = true;
    bool curlybraceMatch = true;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 40 || s[i] == 41) {
            parensCount++;
            parensMatch = parensCount % 2 ? false : true; 
        }
        if (s[i] == 91 || s[i] == 93) {
            bracketsCount++;
            bracketsMatch = bracketsCount % 2 ? false : true;
        }
        if (s[i] == 123 || s[i] == 125) {
            curlybraceCount++;
            curlybraceMatch = curlybraceCount % 2 ? false : true;
        }
    }
    if (parensMatch && bracketsMatch && curlybraceMatch) ans = true;
    return ans;
}

bool isValid(std::string s) {
    if (s.length() % 2 == 1) return false;
    bool ans = true;
    for (int i = 0; i < s.length(); i += 2) {
        char key = s[i];
        bool match = false;
        for (int j = (i+1); j <= s.length() - 1; j++) {
            switch (key) {
            case 40:
                match = (s[j] == 41) ? true : false;
                break;
            case 91:
                match = (s[j] == 93) ? true : false;
                break;
            case 123:
                match = (s[j] == 125) ? true : false;
                break;
            default:
                break;
            }
            if (match) break;
        }
    }
    return ans;
}




int main() {

    std::string s("()[]{}");
    std::cout << checker(s) << std::endl;
    std::string s2("()[){}");
    std::cout << checker(s2) << std::endl;
    std::string s3("{[]}");
    std::cout << checker(s3) << std::endl;


}