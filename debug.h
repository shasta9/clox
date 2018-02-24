#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include "chunk.h"

void disassembleChunk(Chunk* ptr, const char* name);
int disassembleInstruction(Chunk* ptr, int i);

#endif //CLOX_DEBUG_H
