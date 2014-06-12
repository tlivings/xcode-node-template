#include <node.h>

#include "nan.h"
#include "___PROJECTNAMEASIDENTIFIER___.h"

using namespace node;
using namespace v8;

void InitAll(Handle<Object> exports) {
    exports->Set(NanNew<String>("___PROJECTNAMEASIDENTIFIER___"),
                 NanNew<FunctionTemplate>(___PROJECTNAMEASIDENTIFIER___)->GetFunction());
}

NAN_METHOD(___PROJECTNAMEASIDENTIFIER___) {
    NanScope();
}

NODE_MODULE(addon, InitAll)