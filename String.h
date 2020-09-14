#ifndef STRING_H
#define  STRING_H

#include <string>
#include <iostream>

class String : public std::string {
public:
    void operator= (std::string &other) {
        this->clear();
        this->append(other);
    }

    using std::string::string;
    friend std::ostream & operator << (std::ostream &out, const String & str) {
        if (str.find(' ', 0) == std::string::npos) {
            out << str.data();
        } else {
            out << '"' << str.data() << '"';
        }
        return out;
    }
    
    friend std::istream & operator >> (std::istream &in,  String &str) {
        str.clear();
        bool escaped = false;
        int c = in.get();
        while (c == '\t') c = in.get();
        if (c == '"') escaped = true;
        else str += c;
        while (c != -1) {
            c = in.get();
            if (escaped) {
                if (c == '"') break;
            } else if (c == '\n' || c == ' ' || c == '\t') {
                break;
            }
            str += c;
        }
        return in;
    }
};

#endif // STRING_H
