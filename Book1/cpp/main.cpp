// ---< include : base >----
#include <iostream>
using namespace std;

// ---< include : original >----
#include<BookGenerator.hpp>
#include<Book.hpp>

// ========================
//  main
// ========================
void main(){
  int bookNumber;

  cout << "本の構造を出力します。どの本にしますか？";
  cout << "1: フィラルテの鑑";
  cin >> bookNumber;
  
  BookGenerator bookGenerator = new BookGenerator();
  Book book = bookGenerator.generate(bookNumber);
  
  book.play();
  
  return;
}
