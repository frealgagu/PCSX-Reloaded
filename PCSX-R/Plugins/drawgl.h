/* drawgl.h */
#include <OpenGL/gltypes.h>

unsigned long ulInitDisplay(void);
void CloseDisplay(void);
void BringContextForward(void);
void DoBufferSwap(void);
void SetVSync(GLint myValue);
void BringContextForward(void);
void ChangeWindowMode(void);
void AboutDlgProc(void);
void DlgProc(void);

extern unsigned char* PSXVideoBuffer(void);
extern void GPUTick(void);
// setGPUDefaults is used to avoid conflicts with externals_gpu.h and externals_spu.h
extern void setGPUDefaults(void);