#ifndef LIB_HELLO_H_
#define LIB_HELLO_H_

#define DllExport __attribute__((visibility("default")))

class DllExport Hello_World {
public:
  void hello();
};

#endif
