#include <mysql++-config.hh>

#ifdef __WIN32__
#include <Windows32/Base.h>
#include <Windows32/Defines.h>
#include <Windows32/Structures.h>
#include <winsock.h>
#define errno WSAGetLastError()
#endif

#include "field_names3.hh"
#include "result2.hh"

void FieldNames::init(const ResUse *res) {
  int num = res->num_fields();
  reserve(num);
  for (int i = 0; i < num; i++) {
    push_back(res->fields()[i].name);
  }
}

