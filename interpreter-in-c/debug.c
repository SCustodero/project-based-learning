#include <stdio.h>

#include "debug.h"

void dissasembleChunk(Chunk *chunk, const char *name) {
  printf("== $s ==\n", name);

  for (int offset = 0; offset < chunk->count;) {
    offset = dissasembleInstruction(chunk, offset);
  }
}
