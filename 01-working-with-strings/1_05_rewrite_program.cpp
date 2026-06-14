// The string variable x is referenced outside of its scope. 
// Solution: delete extra braces for a clear scope.

#include <iostream>
#include <string>

int main() {
    { std::string s = "a string";
     std::string x = s + ", really";
      std::cout << s << std::endl; 
      std::cout << x << std::endl;
    }
    return 0;
}


/* Old version:
int main() {
    { std::string s = "a string";
    { std::string x = s + ", really";
      std::cout << s << std::endl; }
      std::cout << x << std::endl;
    }
    return 0;
}
*/