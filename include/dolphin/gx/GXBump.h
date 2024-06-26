#ifndef _DOLPHIN_GX_GXBUMP_H_
#define _DOLPHIN_GX_GXBUMP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dolphin/gx/GXEnum.h"

void GXSetTevDirect(GXTevStageID tev_stage);
void GXSetIndTexCoordScale(GXIndTexStageID ind_state, GXIndTexScale scale_s, GXIndTexScale scale_t);
void GXSetNumIndStages(u8 nIndStages);
void GXSetTevDirect(GXTevStageID tev_stage);
void __GXFlushTextureState(void);
void __GXUpdateBPMask(void);
void __GXSetIndirectMask(u32 mask);

#ifdef __cplusplus
};
#endif

#endif
