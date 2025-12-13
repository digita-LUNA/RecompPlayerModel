#include "digita_bow_string_oot.h"

Vtx gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-1483, -1160, -10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1483, -1160, 10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1483, 1, 10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-1483, 1, -10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1483, -1160, -10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1483, -1160, 10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1483, 1, 10}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1483, 1, -10}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_vtx_0[10] = {
	{{ {1483, 1, -10}, 0, {16, 16}, {91, 168, 0, 255} }},
	{{ {1483, 1, 10}, 0, {16, 16}, {91, 168, 0, 255} }},
	{{ {360, -1160, 10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {360, -1160, 10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {360, -1160, -10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {360, -1160, -10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {360, -1160, 10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {-1483, 1, 10}, 0, {16, 16}, {188, 149, 0, 255} }},
	{{ {360, -1160, -10}, 0, {16, 16}, {15, 130, 0, 255} }},
	{{ {-1483, 1, -10}, 0, {16, 16}, {188, 149, 0, 255} }},
};

Gfx gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
	gsSP2Triangles(5, 6, 7, 0, 8, 7, 9, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gDigitaOOTBowStringDL_string_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_LIGHTING | G_ZBUFFER | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TF_BILERP | G_TD_CLAMP | G_TP_PERSP | G_PM_NPRIMITIVE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_TC_FILT | G_TT_NONE | G_AD_NOISE | G_TL_TILE | G_CK_NONE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_AC_NONE | G_RM_FOG_SHADE_A | G_ZS_PIXEL),
	gsSPTexture(0, 0, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gDigitaOOTBowStringDL_string_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL | G_AC_NONE | G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx gDigitaOOTBowStringDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gDigitaOOTBowStringDL_string_layerOpaque),
	gsSPDisplayList(gDigitaOOTBowStringDL_gDigitaOOTBowStringDL_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_gDigitaOOTBowStringDL_string_layerOpaque),
	gsSPEndDisplayList(),
};

