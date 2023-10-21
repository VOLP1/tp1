#include <iostream>
#include <stdexcept>
#include <string>
using namespace std; 

class Code {
private:
    static const int LENGTH = 4;
    string value;
    void validate(string);
public:
    void setValue(string);
    string getValue() const;
};

inline string Code::getValue() const{
    return value;
}
