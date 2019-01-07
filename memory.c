#include <stdlib.h>

#include "common.h"
#include "memory.h"
#include "vm.h"

extern VM vm;

static void freeObject(Obj* object);

void* reallocate(void* previous, size_t oldSize, size_t newSize) {
   return realloc(previous, newSize);
}

void freeObjects() {
   Obj* object = vm.objects;
   while (object != NULL) {
      Obj* next = object->next;
      freeObject(object);
      object = next;
   }
}

static void freeObject(Obj* object) {
   switch (object->type) {
      case OBJ_STRING: {
         ObjString* string = (ObjString*)object;
         FREE_ARRAY(char, string->chars, string->length + 1);
         FREE(ObjString, object);
         break;
      }
   }
}