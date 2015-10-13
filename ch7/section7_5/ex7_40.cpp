
class Book {
public:
    Book() : mNo(0), mName(null), mAuthor(null), mPubdate(null) {};
    Book(unsigned int mNo, std::string mName, std::string mAuthor, std::string mPubdate) : mNo(no), mName(mName), mAuthor(author), mPubdate(pubdate) { }
    Book(std::istream &in) { in >> no_ >> name_ >> author_ >> pubdate_; }

private:
    unsigned int mNo;
    std::string mName;
    std::string mAuthor;
    std::string mPubdate;
};