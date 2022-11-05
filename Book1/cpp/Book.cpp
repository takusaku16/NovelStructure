#include<hpp/Book.hpp>

void Book::InitEpisode(Episode episode){
  m_episode = episode;

  m_episode.Create_E1();
  m_episode.Create_E2();
  m_episode.Create_E3();
  m_episode.Create_E4();
  m_episode.Create_E5();
  m_episode.Create_E6();
  m_episode.Create_E7();
  m_episode.Create_E8();
}

FiraruteBook::FiraruteBook(){
  FiraruteEpisode firaruteEpisode;
  InitEpisode(firaruteEpisode);
}

