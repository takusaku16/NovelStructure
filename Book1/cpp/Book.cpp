#include<Book.hpp>

void Book::play(){
  for (int episordNumber = 0; episordNumber < Book.EPISORD_NUM_MAX; episordNumber++) {
    Episord episord = new Episord(episordNumber);
    episord.play();
  }
}
