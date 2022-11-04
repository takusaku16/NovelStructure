#include<hpp/BookManager.hpp>

void BookManager::ChangeBook(EBook book){
  static FiraruteBook firaruteBook;

  switch(book){

    case FIRARUTE: m_pBook = &firaruteBook; break;

  }
}
