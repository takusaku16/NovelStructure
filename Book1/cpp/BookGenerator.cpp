#include<BookGenerator.hpp>

Book BookGenerator::generate(int bookNumber){
  switch(bookNumber){

    case '1': return new FiraruteBook();

    case default: return null;
  }
}
