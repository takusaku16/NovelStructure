class Episode {
  public:
    Episode(){};
    virtual ~Episode(){};
    virtual void Create_E1(){};
    virtual void Create_E2(){};
    virtual void Create_E3(){};
    virtual void Create_E4(){};
    virtual void Create_E5(){};
    virtual void Create_E6(){};
    virtual void Create_E7(){};
    virtual void Create_E8(){};

    bool Episode::operator == (const Episode& b) const { return 1; };
};

class FiraruteEpisode : public Episode {
  public:
    FiraruteEpisode();
    ~FiraruteEpisode();
    void Create_E1();
    void Create_E2();
    void Create_E3();
    void Create_E4();
    void Create_E5();
    void Create_E6();
    void Create_E7();
    void Create_E8();
};