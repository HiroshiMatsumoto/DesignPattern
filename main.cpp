#include <iostream>


class Hoge{
private:
  Hoge(){
    x = 0;
  };
  ~Hoge(){
  };
  static Hoge* _instance;
public:
  static Hoge* getInstance(){
    std::cout << _instance << std::endl;
    if(_instance == nullptr)
      _instance = new Hoge();
    return _instance;
  }
  int x;
};

Hoge* Hoge::_instance = nullptr;

int main(){
  Hoge* a = Hoge::getInstance();
  Hoge* b = Hoge::getInstance();

  a->x = 3;
  b->x = 10;

  std::cout << "a: " << a->x << std::endl; // 10
  std::cout << "b: " << b->x << std::endl; // 10
  return 0;
}
