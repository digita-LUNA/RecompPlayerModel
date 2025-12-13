#include "digita_knight_sheath.h"

u64 gDigitaKnightSheathDL_sheath_knight_ci8[] = {
	0x0001020304050606, 0x0606040307010800, 0x03090a0b0c0c0c0d, 0x0d0d0d0d0d0d0d0d, 0x08020e060f10110a, 0x0b0b120c0c0d0d0d, 0x1300081408151515, 0x0000000008080801, 
	0x06060e070207160e, 0x0406170f09091818, 0x0d0a18170606170f, 0x0909090918191919, 0x0d120b0b19180918, 0x181818101919190a, 0x0c0b0a0a0a191010, 0x191911110a0a110b, 
	0x0c0b0a1111191910, 0x10190b0a0a0a0a0a, 0x0c0b111119101010, 0x10190a1212120b0b, 0x02160e0506170f09, 0x0f0f0f0f0f0f0f0f, 0x03110b0c0d0d0d0d, 0x0d0d0d0d0d0d0d0d, 
	0x02160e0e0e0e0e0e, 0x0e0e0e0e0e0e0e0e, 0x1a1b1b1c1c1d1d1e, 0x1f20202020202020, 0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 
	0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 
	0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 0x1c1c1f2021222324, 0x2425262627272727, 
	0x282829292a2a2a2a, 0x2a2a2a2a2a2a2a2a, 0x2b2b2b2b2b2c2d28, 0x2d29282929282928, 0x2c282d2828292a29, 0x2a292a292a2a2a29, 0x2e2f2f2b2b2b2c2b, 0x2d2d2828282d2d28, 
	0x2c2c2d2c2c282d29, 0x292829292a292929, 0x2f2f2f2e2e2f2e2b, 0x2b2c302c2c2c2d2d, 0x2b2c2c2c2c302829, 0x2828292928292929, 0x31313131312f2f2b, 0x2b2c302c2c302c2d, 
	0x1d32333435362324, 0x3725262627272727, 0x1d1f333422362337, 0x3725262627272727, 0x1d1f382122362337, 0x3725262627272727, 0x1d39342122362437, 0x3725262627272727, 
	0x3239342122363737, 0x3725262627272727, 0x3220342122363737, 0x3725262627272727, 0x3220213a363b3737, 0x3725262627272727, 0x3220213c363b3737, 0x3725262627272727, 
	0x32332122363b3737, 0x3725262627272727, 0x3233212236233737, 0x3725262627272727, 0x323d3e3636233737, 0x3725262627272727, 0x323f223623233737, 0x3725262627272727, 
	0x3234223623233737, 0x3725262627272727, 0x3234363623233740, 0x3725262627272727, 0x3234362323233740, 0x3725262627272727, 0x3234362323244040, 0x3725262627272727, 
	0x1e213b2323244040, 0x4025262627272727, 0x1e21232324244040, 0x4025262627272727, 0x1e21232424244040, 0x4025262627272727, 0x1e3a232424244040, 0x4025262627272727, 
	0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 
	0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 
	0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 0x1e3a242424242525, 0x2525262627272727, 
	
};

u64 gDigitaKnightSheathDL_sheath_knight_pal_rgba16[] = {
	0x294b42114a536319, 0x739d7bdf84215295, 0x318d9ce7c631ce73, 0xdef7e7396b5b94a5, 0xad6bbdefd6b518c7, 0x39cf21095ad78c63, 0xa529b5ad08431043, 0x1843204320852885, 
	0x30c5490751496189, 0x698971cb79cd820f, 0x945bacdfcde762d3, 0x7b1583d95a53520d, 0x8b95418b208338c5, 0x410749495949698b, 0x38c728c549476149, 0x5147390551073907, 
	0x69cb000000000000
};

Vtx gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-370, -283, -131}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-370, -283, 105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-370, 288, 105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-370, 288, -131}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2740, -283, -131}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2740, -283, 105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2740, 288, 105}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {2740, 288, -131}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_vtx_0[30] = {
	{{ {-370, 11, 105}, 0, {241, -16}, {198, 8, 112, 255} }},
	{{ {-370, -4, -107}, 0, {241, -16}, {195, 248, 145, 255} }},
	{{ {-370, -283, 17}, 0, {-16, -16}, {184, 151, 7, 255} }},
	{{ {-370, 288, -21}, 0, {507, -16}, {184, 104, 249, 255} }},
	{{ {-370, -4, -107}, 0, {241, -16}, {195, 248, 145, 255} }},
	{{ {-370, 11, 105}, 0, {241, -16}, {198, 8, 112, 255} }},
	{{ {-370, 288, -21}, 0, {507, -16}, {185, 105, 248, 255} }},
	{{ {-370, 11, 105}, 0, {241, -16}, {197, 8, 112, 255} }},
	{{ {2154, 102, 20}, 0, {389, 3350}, {3, 72, 105, 255} }},
	{{ {2155, 11, 81}, 0, {241, 3352}, {1, 10, 127, 255} }},
	{{ {2155, -85, 38}, 0, {96, 3352}, {3, 203, 115, 255} }},
	{{ {-370, -283, 17}, 0, {-16, -16}, {186, 151, 6, 255} }},
	{{ {2155, -181, -5}, 0, {-16, 3352}, {8, 129, 250, 255} }},
	{{ {2586, -144, -8}, 0, {-16, 3920}, {43, 137, 245, 255} }},
	{{ {2586, 10, 79}, 0, {241, 3920}, {28, 11, 123, 255} }},
	{{ {2740, 6, -28}, 0, {241, 4123}, {126, 0, 241, 255} }},
	{{ {2584, 156, -43}, 0, {507, 3918}, {43, 115, 225, 255} }},
	{{ {2154, 193, -41}, 0, {507, 3351}, {7, 124, 229, 255} }},
	{{ {-370, -4, -107}, 0, {241, -16}, {196, 248, 144, 255} }},
	{{ {-370, 288, -21}, 0, {507, -16}, {185, 105, 249, 255} }},
	{{ {2153, 97, -85}, 0, {389, 3350}, {1, 53, 141, 255} }},
	{{ {2154, 193, -41}, 0, {507, 3351}, {8, 127, 6, 255} }},
	{{ {2584, 156, -43}, 0, {507, 3918}, {43, 119, 11, 255} }},
	{{ {2583, 2, -131}, 0, {241, 3916}, {26, 245, 132, 255} }},
	{{ {2740, 6, -28}, 0, {241, 4123}, {126, 0, 13, 255} }},
	{{ {2586, -144, -8}, 0, {-16, 3920}, {44, 141, 31, 255} }},
	{{ {2154, -90, -67}, 0, {96, 3352}, {2, 184, 152, 255} }},
	{{ {2155, -181, -5}, 0, {-16, 3352}, {8, 132, 27, 255} }},
	{{ {-370, -283, 17}, 0, {-16, -16}, {186, 150, 7, 255} }},
	{{ {2153, 0, -128}, 0, {241, 3349}, {255, 245, 129, 255} }},
};

Gfx gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_vtx_0 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
	gsSP2Triangles(10, 9, 7, 0, 10, 7, 11, 0),
	gsSP2Triangles(11, 12, 10, 0, 13, 10, 12, 0),
	gsSP2Triangles(13, 14, 10, 0, 15, 14, 13, 0),
	gsSP2Triangles(16, 14, 15, 0, 16, 8, 14, 0),
	gsSP2Triangles(17, 8, 16, 0, 8, 17, 6, 0),
	gsSP2Triangles(8, 9, 14, 0, 14, 9, 10, 0),
	gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
	gsSP2Triangles(22, 20, 21, 0, 22, 23, 20, 0),
	gsSP2Triangles(24, 23, 22, 0, 25, 23, 24, 0),
	gsSP2Triangles(25, 26, 23, 0, 27, 26, 25, 0),
	gsSP2Triangles(26, 27, 28, 0, 18, 26, 28, 0),
	gsSP2Triangles(29, 26, 18, 0, 29, 18, 20, 0),
	gsSP2Triangles(23, 29, 20, 0, 26, 29, 23, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gDigitaKnightSheathDL_knight_sheath_layerOpaque[] = {
	gsSPLoadGeometryMode(G_FOG | G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH | G_CULL_BACK | G_LIGHTING),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_CK_NONE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_TC_FILT | G_TL_TILE | G_TF_BILERP | G_PM_NPRIMITIVE | G_TT_RGBA16 | G_AD_NOISE | G_CD_MAGICSQ),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_AC_NONE | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDigitaKnightSheathDL_sheath_knight_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 64),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, gDigitaKnightSheathDL_sheath_knight_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 511, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gDigitaKnightSheathDL_knight_sheath_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_ZS_PIXEL | G_AC_NONE | G_RM_AA_ZB_OPA_SURF | G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx gDigitaKnightSheathDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gDigitaKnightSheathDL_knight_sheath_layerOpaque),
	gsSPDisplayList(gDigitaKnightSheathDL_gDigitaKnightSheathDL_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_gDigitaKnightSheathDL_knight_sheath_layerOpaque),
	gsSPEndDisplayList(),
};

