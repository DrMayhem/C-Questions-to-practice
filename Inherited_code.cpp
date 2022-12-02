

class BadLengthException : exception {
    int len;
    
    public:
    BadLengthException(int l): len (l) {}
    string what() { return to_string(len); }
};
