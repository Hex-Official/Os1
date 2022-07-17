#pragma once

#ifdef __cplusplus
extern "C" {
#endif

    void __putc(char chr);

    char __getc();

    void console_handler();
    {
    }
  
    
    void Injector("Fivem.exe");
    {
        Bypass 0x134,03e94,23
        }
    
#ifdef __cplusplus
}
#endif
