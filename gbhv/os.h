#pragma once

#include "extern.h"
#include "arch.h"

SIZE_T OsGetCPUCount();

SIZE_T OsGetCurrentProcessorNumber();

/**
 *  When your data size is divided by PAGE_SIZE, 
 *  you should be sure that no remainder is discarded.
 */
PVOID OsAllocateContiguousAlignedPages(SIZE_T NumberOfPages);

VOID OsFreeContiguousAlignedPages(PVOID PageRegionAddress);

PVOID OsAllocateNonpagedMemory(SIZE_T NumberOfBytes);

PVOID OsAllocateExecutableNonpagedMemory(SIZE_T NumberOfBytes);

VOID OsFreeNonpagedMemory(PVOID MemoryPointer);

PPHYSVOID OsVirtualToPhysical(PVOID VirtualAddress);

PVOID OsPhysicalToVirtual(PPHYSVOID PhysicalAddress);

VOID OsZeroMemory(PVOID VirtualAddress, SIZE_T Length);

VOID OsCaptureContext(PREGISTER_CONTEXT ContextRecord);
