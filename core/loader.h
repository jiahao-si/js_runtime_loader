#ifndef LOADER_H
#define LOADER_H

#include "include/common.h"
#include "util.h"
#include <vector>
#include <unistd.h>
using namespace v8;
using namespace No::Util;

namespace No {
    namespace Loader {
        void Compile(V8_ARGS);
        void Init(Isolate* isolate, Local<Object> target);
    }
}
#endif 
