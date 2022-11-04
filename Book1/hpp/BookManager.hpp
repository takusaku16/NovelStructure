#include<hpp/Book.hpp>

class BookManager {
  private:
    BookManager(){};
    Book *m_pBook;    

  public:
    static BookManager& getInstance() {
      static BookManager m_sBookManager;
      return m_sBookManager;
    }

    enum EBook {
      FIRARUTE,
    };

    // Book *GetCurrentBookPointer(){return m_pBook;};

    void ChangeBook(EBook book);

    void Play(){m_pBook->Play();};
};
