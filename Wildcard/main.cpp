#include <iostream>

bool match(std::string pattern, std::string text) {
    // jika terdapat pattern *
    int star = pattern.find("*");
    if (pattern.size()-1 > text.size()) {
        return false;
    }
    std::string pbegin = pattern.substr(0, star);
    std::string pend = pattern.substr(star+1);

    std::string tbegin = text.substr(0, pbegin.size());
    std::string tend = text.substr(text.size()-pend.size(), pend.size());

    if (pbegin == tbegin && pend == tend) {
        return true;
    }
    return false;
}

int main() {
    std::string s;
    std::cin >> s;
    int n;
    std::cin >> n;
    std::string word;
    for (int i = 0; i<n;i++) {
        std::cin >> word;
        bool isMatch = match(s, word);
        if (isMatch)
            std::cout << word << std::endl;
    }

    return 0;
}