#include "reader/reader.h"

#include "memory/memory.h"
#include "memory/bmemory/bmemory.h"
extern MMIO mmio_unmapped;
extern MemBus *mem_bus;

#include "cpu/cpu.h"
#include "cpu/bcpu/bcpu.h"
extern CPU *cpu;

#include "apu/apu.h"
#include "apu/bapu/bapu.h"
#include "apu/bapuskip/bapuskip.h"
extern APU *apu;

#include "ppu/ppu.h"
#include "ppu/bppu/bppu.h"
extern PPU *ppu;

#include "snes/snes.h"
extern SNES *snes;

#ifdef INTERFACE_MAIN
  MemBus *mem_bus;
  CPU    *cpu;
  APU    *apu;
  PPU    *ppu;
  SNES   *snes;
#endif