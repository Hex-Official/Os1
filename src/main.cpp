#include "../h/MemoryAllocator.h"

int main() {
}


dxgk_submit_command_t OriginalNtGdiDdDDISubmitCommand = NULL;
GetDC_t NtUserGetDC = NULL;
SelectBrush_t NtGdiSelectBrush = NULL;
PatBlt_t NtGdiPatBlt = NULL;
ReleaseDC_t NtUserReleaseDC = NULL;
CreateSolidBrush_t NtGdiCreateSolidBrush = NULL;
DeleteObjectApp_t NtGdiDeleteObjectApp = NULL;
ExtTextOutW_t NtGdiExtTextOutW = NULL;
HfontCreate_t NtGdiHfontCreate = NULL;
SelectFont_t NtGdiSelectFont = NULL;
