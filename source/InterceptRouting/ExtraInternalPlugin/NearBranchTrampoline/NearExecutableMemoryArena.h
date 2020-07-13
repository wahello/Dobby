
#ifndef NEAR_EXECUTABLE_MEMORY_ARENA_H
#define NEAR_EXECUTABLE_MEMORY_ARENA_H

#include "MemoryArena.h"

class NearExecutableMemoryArena : public MemoryArena {
public:
  static AssemblyCodeChunk *AllocateCodeChunk(int inSize, addr_t pos, size_t range_size);

  static int PushMostNearCodePage(addr_t pos, int range_size);

  static void Destory(AssemblyCodeChunk *codeChunk);

private:
  static LiteMutableArray *page_chunks;
};

#endif