#include<hpp/Episode.hpp>

class Book {
  public:
    Book(){};
    virtual ~Book(){};
    virtual void Play(){};

    bool Book::operator == (const Book& b) const { return 1; };

    Episode m_episode;

  protected:
    void InitEpisode(Episode episode);
};

class FiraruteBook : public Book {
  public:
    FiraruteBook();
    ~FiraruteBook();
    void Play();
};