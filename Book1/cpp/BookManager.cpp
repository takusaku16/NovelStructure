#include<hpp/BookManager.hpp>

void BookManager::ChangeBook(EBook eBook){
  static FiraruteBook firaruteBook;

  switch(eBook){

    case FIRARUTE: m_pBook = &firaruteBook; break;

  }
}