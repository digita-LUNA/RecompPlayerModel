#include "digita_razorsheath.h"

u64 gDigitaHumanRazorSheathDL_sheath_ci8[] = {
	0x0001020304050606, 0x0606040307010800, 0x03090a0b0c0d0d0e, 0x0e0e0e0e0e0e0e0e, 0x080f10061112130a, 0x140b150c0d0e0e0e, 0x1600081708181818, 0x0000000008080801, 
	0x0606100702071910, 0x04061a1109091b1b, 0x0e0a1b1a06061a11, 0x090909091b1c1c1c, 0x0e150b0b1c1b091b, 0x1b1b1b121c1c1c0a, 0x0d140a0a0a1c1212, 0x1c1c13130a0a1314, 
	0x0d140a13131c1c12, 0x121c140a0a0a0a0a, 0x0d1413131c121212, 0x121c0a1515150b14, 0x0f191005061a1109, 0x1111111111111111, 0x03130b0c0e0e0e0e, 0x0e0e0e0e0e0e0e0e, 
	0x0f19101010101010, 0x1010101010101010, 0x1d1d1d1d1d1d1d1d, 0x1d1d1d1d1d1d1d1d, 0x1e1f202122222222, 0x2221212320241f1f, 0x251f262722222222, 0x222128292a2b2c1f, 
	
};

u64 gDigitaHumanRazorSheathDL_sheath_pal_rgba16[] = {
	0x294b421152956b5b, 0x7bdf84218c635ad7, 0x318da529ce73def7, 0xef7bf7bdffff4a53, 0x739d9ce7b5adc631, 0xd6b5e73918c739cf, 0x2109631994a5ad6b, 0xbdef00010801c001, 
	0x7801580150016801, 0xa801280198016001, 0x70019001a001b001, 0xb801000000000000
};

u64 gDigitaHumanRazorSheathDL_razor_grip_ci8[] = {
	0x0001020203040504, 0x0404060603030307, 0x0802070707030606, 0x0303070707070702, 0x0909090909090909, 0x0909090909090909, 0x0a0b0c060d030303, 0x030d0d0707070707, 
	0x0a0b0c050b0e0f10, 0x1112090505050505, 0x1313131314151617, 0x1816191a1b131313, 0x1c1d1e1f20212223, 0x24252627281c2929, 0x2a2a2a2b2c2d2e2f, 0x3031322b332a2a2a, 
	0x2a2a2a2a33343536, 0x37382b2a2a2a2a2a, 0x2a2a2a2a33393a3b, 0x3c3d2b332a2a2a2a, 0x2a2a2a2a2a32372e, 0x3e3f332a2a2a2a2a, 0x2a332b4041424344, 0x45464748402b2a2a, 
	0x13131349494a4b4a, 0x4a49494913131313, 0x0a0b0c050b0e0f10, 0x1112090505050505, 0x0a0b0c060d030303, 0x030d0d0707070707, 0x0909090909090909, 0x0909090909090909, 
	
};

u64 gDigitaHumanRazorSheathDL_razor_grip_pal_rgba16[] = {
	0xffffe739d6b5bdef, 0xad6ba529b5adce73, 0xf7bd739d5ad78c63, 0x9ce7c631735b5295, 0x318d41cf5253c101, 0xa90168c138c110c1, 0x20c161018101b101, 0xfc01f341e301dac1, 
	0xc28199c159413901, 0x6941a201b281cac1, 0xe341fc41fe01fd81, 0xfcc1d34179c14941, 0x9a81d3c1fd01fdc1, 0xec0182015981a2c1, 0xdc41fc818a416981, 0xb301e441bb41ec81, 
	0xfd41ed01a34159c1, 0x51417a81bbc1d481, 0xecc1910170c158c1, 
};

Vtx gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_cull[8] = {
	{{ {-134, -198, -113}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-134, -198, 54}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-134, 200, 54}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {-134, 200, -113}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1451, -198, -113}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1451, -198, 54}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1451, 200, 54}, 0, {0, 0}, {0, 0, 0, 0} }},
	{{ {1451, 200, -113}, 0, {0, 0}, {0, 0, 0, 0} }},
};

Vtx gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_0[18] = {
	{{ {1101, 0, -105}, 0, {496, 3334}, {14, 12, 130, 255} }},
	{{ {1238, -188, -10}, 0, {-8, 3709}, {1, 130, 13, 255} }},
	{{ {-133, -198, -19}, 0, {-18, -16}, {255, 241, 126, 255} }},
	{{ {1101, 0, -105}, 0, {496, 3334}, {14, 12, 130, 255} }},
	{{ {-133, -198, -19}, 0, {-18, -16}, {255, 241, 126, 255} }},
	{{ {-133, -5, -113}, 0, {496, -16}, {255, 241, 126, 255} }},
	{{ {-133, -198, -19}, 0, {-18, -16}, {255, 19, 126, 255} }},
	{{ {1238, -188, -10}, 0, {-8, 3709}, {1, 129, 6, 255} }},
	{{ {1100, 12, 54}, 0, {496, 3334}, {13, 30, 123, 255} }},
	{{ {-134, 7, 46}, 0, {496, -16}, {255, 19, 125, 255} }},
	{{ {-133, -198, -19}, 0, {-18, -16}, {255, 19, 125, 255} }},
	{{ {1100, 12, 54}, 0, {496, 3334}, {13, 30, 123, 255} }},
	{{ {-133, -198, -19}, 0, {-16, -16}, {255, 255, 127, 255} }},
	{{ {-134, 7, 46}, 0, {-16, -16}, {255, 255, 127, 255} }},
	{{ {-133, -5, -113}, 0, {-16, -16}, {255, 255, 127, 255} }},
	{{ {-134, 7, 46}, 0, {-16, -16}, {255, 255, 127, 255} }},
	{{ {-133, 199, -48}, 0, {-16, -16}, {255, 255, 127, 255} }},
	{{ {-133, -5, -113}, 0, {-16, -16}, {255, 255, 127, 255} }},
};

Gfx gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSPEndDisplayList(),
};

Vtx gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_1[30] = {
	{{ {1297, 69, -28}, 0, {152, 496}, {82, 96, 245, 255} }},
	{{ {1025, 200, -40}, 0, {807, 496}, {31, 122, 243, 255} }},
	{{ {1100, 12, 54}, 0, {586, 19}, {5, 255, 127, 255} }},
	{{ {1025, 200, -40}, 0, {-800, 496}, {32, 122, 244, 255} }},
	{{ {-133, 199, -48}, 0, {745, 496}, {255, 241, 126, 255} }},
	{{ {1100, 12, 54}, 0, {-900, -7}, {14, 251, 126, 255} }},
	{{ {-133, 199, -48}, 0, {745, 496}, {255, 241, 126, 255} }},
	{{ {-134, 7, 46}, 0, {745, -16}, {255, 241, 126, 255} }},
	{{ {1100, 12, 54}, 0, {-900, -7}, {14, 251, 126, 255} }},
	{{ {1451, -186, -9}, 0, {45, 496}, {110, 192, 4, 255} }},
	{{ {1100, 12, 54}, 0, {526, 0}, {13, 30, 123, 255} }},
	{{ {1238, -188, -10}, 0, {26, 46}, {1, 129, 6, 255} }},
	{{ {1101, 0, -105}, 0, {-900, -7}, {16, 233, 132, 255} }},
	{{ {-133, -5, -113}, 0, {745, -16}, {255, 19, 126, 255} }},
	{{ {-133, 199, -48}, 0, {745, 496}, {255, 19, 126, 255} }},
	{{ {1101, 0, -105}, 0, {-900, -7}, {16, 234, 132, 255} }},
	{{ {-133, 199, -48}, 0, {745, 496}, {255, 19, 126, 255} }},
	{{ {1025, 200, -40}, 0, {-800, 496}, {32, 123, 251, 255} }},
	{{ {1101, 0, -105}, 0, {586, 19}, {6, 237, 131, 255} }},
	{{ {1025, 200, -40}, 0, {807, 496}, {31, 123, 252, 255} }},
	{{ {1297, 69, -28}, 0, {152, 496}, {82, 97, 254, 255} }},
	{{ {1101, 0, -105}, 0, {499, -15}, {249, 240, 130, 255} }},
	{{ {1297, 69, -28}, 0, {496, 507}, {81, 97, 253, 255} }},
	{{ {1451, -186, -9}, 0, {-15, 461}, {109, 191, 7, 255} }},
	{{ {1238, -188, -10}, 0, {109, 61}, {1, 130, 13, 255} }},
	{{ {1101, 0, -105}, 0, {499, -15}, {14, 12, 130, 255} }},
	{{ {1451, -186, -9}, 0, {-15, 461}, {110, 192, 7, 255} }},
	{{ {1451, -186, -9}, 0, {45, 496}, {109, 191, 4, 255} }},
	{{ {1297, 69, -28}, 0, {707, 496}, {81, 97, 247, 255} }},
	{{ {1100, 12, 54}, 0, {526, 0}, {247, 1, 127, 255} }},
};

Gfx gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_tri_1[] = {
	gsSPVertex(gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_1 + 0, 30, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
	gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gDigitaHumanRazorSheathDL_razor_pommel_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_LIGHTING | G_ZBUFFER | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TF_BILERP | G_TT_RGBA16 | G_TD_CLAMP | G_TP_PERSP | G_PM_NPRIMITIVE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_TC_FILT | G_AD_NOISE | G_TL_TILE | G_CK_NONE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_AC_NONE | G_RM_FOG_SHADE_A | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDigitaHumanRazorSheathDL_sheath_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 44),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, gDigitaHumanRazorSheathDL_sheath_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0, G_TX_CLAMP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gDigitaHumanRazorSheathDL_razor_pommel_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL | G_AC_NONE | G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx mat_gDigitaHumanRazorSheathDL_razor_hilt_layerOpaque[] = {
	gsSPLoadGeometryMode(G_SHADE | G_LIGHTING | G_ZBUFFER | G_FOG | G_SHADING_SMOOTH),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_TF_BILERP | G_TT_RGBA16 | G_TD_CLAMP | G_TP_PERSP | G_PM_NPRIMITIVE | G_CD_MAGICSQ | G_CYC_2CYCLE | G_TC_FILT | G_AD_NOISE | G_TL_TILE | G_CK_NONE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF2 | G_AC_NONE | G_RM_FOG_SHADE_A | G_ZS_PIXEL),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDigitaHumanRazorSheathDL_razor_grip_pal_rgba16),
	gsDPSetTile(0, 0, 0, 256, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadTLUTCmd(5, 75),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, gDigitaHumanRazorSheathDL_razor_grip_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 127, 1024),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsSPEndDisplayList(),
};

Gfx mat_revert_gDigitaHumanRazorSheathDL_razor_hilt_layerOpaque[] = {
	gsDPPipeSync(),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_RM_AA_ZB_OPA_SURF | G_ZS_PIXEL | G_AC_NONE | G_RM_AA_ZB_OPA_SURF2),
	gsSPEndDisplayList(),
};

Gfx gDigitaHumanRazorSheathDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gDigitaHumanRazorSheathDL_razor_pommel_layerOpaque),
	gsSPDisplayList(gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_tri_0),
	gsSPDisplayList(mat_revert_gDigitaHumanRazorSheathDL_razor_pommel_layerOpaque),
	gsSPDisplayList(mat_gDigitaHumanRazorSheathDL_razor_hilt_layerOpaque),
	gsSPDisplayList(gDigitaHumanRazorSheathDL_gDigitaHumanRazorSheathDL_mesh_layer_Opaque_tri_1),
	gsSPDisplayList(mat_revert_gDigitaHumanRazorSheathDL_razor_hilt_layerOpaque),
	gsSPEndDisplayList(),
};

