class Book {
  public:
    Book(){};
    virtual ~Book(){};

    bool Book::operator == (const Book& b) const { return 1; };
};

class FiraruteBook : public Book {
  public:
    FiraruteBook();
};