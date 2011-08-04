#ifdef I3D_ARCH_X86
    #define V8_TARGET_ARCH_IA32 1
#elif defined I3D_ARCH_ARM
    #define V8_TARGET_ARCH_ARM 1
#else
    #error "oops"
#endif
