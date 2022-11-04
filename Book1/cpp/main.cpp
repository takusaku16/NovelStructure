// ---< include : base >----
#include <iostream>
using namespace std;

// ---< include : original >----
#include<hpp/BookManager.hpp>
#include<hpp/Book.hpp>

// ========================
//  main
// ========================
void main(){
  int bookNumber;

  while(true){
    cout << "本の構造を出力します。どの本にしますか？";
    cout << "1: フィラルテの鑑";
    cin >> bookNumber;

    if(bookNumber < 0) break;
    
    BookManager::getInstance().ChangeBook( (BookManager::EBook) bookNumber );
    
    BookManager::getInstance().Play();
  }
    
  return;
}
