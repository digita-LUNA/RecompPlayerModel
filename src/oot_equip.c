#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "digita_dlists.h"

#define DECLARE_MATRIX_WRAPPED_DL(dlName, mtxName, dl)                  \
    Mtx mtxName;                                                        \
    Gfx dlName[] = {                                                    \
        gsSPMatrix(&mtxName, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW), \
        gsSPDisplayList(dl),                                            \
        gsSPPopMatrix(G_MTX_MODELVIEW),                                 \
        gsSPEndDisplayList(),                                           \
    }

//moving child to adult
DECLARE_MATRIX_WRAPPED_DL(gAdultKokiriBladeDL, sAdultResizeMtx, gDigitaKokiriBladeDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultKokiriSheathDL, sAdultResizeMtx, gDigitaKokiriSheathDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultKokiriHiltDL, sAdultResizeMtx, gDigitaKokiriHiltDL);
//moving adult to child
DECLARE_MATRIX_WRAPPED_DL(gChildMasterBladeDL, sChildResizeMtx, gDigitaMasterBladeDL);
DECLARE_MATRIX_WRAPPED_DL(gChildMasterHiltDL, sChildResizeMtx, gDigitaMasterHiltDL);
DECLARE_MATRIX_WRAPPED_DL(gChildMasterSheathDL, sChildResizeMtx, gDigitaMasterSheathDL);

DECLARE_MATRIX_WRAPPED_DL(gChildGoronBladeDL, sChildResizeMtx, gDigitaGoronBladeDL);
DECLARE_MATRIX_WRAPPED_DL(gChildGiantHiltDL, sChildResizeMtx, gDigitaGiantHiltDL);
DECLARE_MATRIX_WRAPPED_DL(gChildGoronHiltDL, sChildResizeMtx, gDigitaGoronHiltDL);
DECLARE_MATRIX_WRAPPED_DL(gChildGoronSheathDL, sChildResizeMtx, gDigitaGoronSheathDL);

DECLARE_MATRIX_WRAPPED_DL(gChildHylianShieldDL, sChildResizeMtx, gDigitaHylianShieldDL);
DECLARE_MATRIX_WRAPPED_DL(gChildMirrorShieldDL, sChildResizeMtx, gDigitaOoTMirrorShieldDL);

DECLARE_MATRIX_WRAPPED_DL(gChildBowDL, sChildResizeMtx, gFairyBowDL);
DECLARE_MATRIX_WRAPPED_DL(gChildBowStringDL, sChildResizeMtx, gFairyBowStringDL);
DECLARE_MATRIX_WRAPPED_DL(gChildHookshotDL, sChildResizeMtx, gDampeHookshotDL);
DECLARE_MATRIX_WRAPPED_DL(gChildHookTipDL, sChildResizeMtx, gDampeHookshotTipDL);

static Mtx gKokiriSwordHiltMtx;
static Mtx gAdultKokiriSwordHiltMtx;
static Mtx gMasterSwordHiltMtx;
static Mtx gChildMasterSwordHiltMtx;
static Mtx sAdultHookshotHookMtx;
static Mtx sChildHookshotHookMtx;

PlayerModelManagerHandle group_oot;

void registerKokiriSword(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_kokiriswordOOT", PMM_MODEL_TYPE_SWORD1);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Kokiri Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_BLADE, gDigitaKokiriBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_HILT, gDigitaKokiriHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_SHEATH, gDigitaKokiriSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_MTX_SWORD_KOKIRI_BACK, &gKokiriSwordHiltMtx);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_BLADE, gAdultKokiriBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_HILT, gAdultKokiriHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_SHEATH, gAdultKokiriSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_SWORD_GILDED_BACK, &gAdultKokiriSwordHiltMtx);
    
    PlayerModelManager_addHandleToPack(group_oot, h);

}
void registerMasterSword(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_masterswordOOT", PMM_MODEL_TYPE_SWORD3);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Master Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_GILDED_BLADE, gChildMasterBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_GILDED_HILT, gChildMasterHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_GILDED_SHEATH, gChildMasterSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_MTX_SWORD_GILDED_BACK, &gChildMasterSwordHiltMtx);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_GILDED_BLADE, gDigitaMasterBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_GILDED_HILT, gDigitaMasterHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_GILDED_SHEATH, gDigitaMasterSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_SWORD_GILDED_BACK, &gMasterSwordHiltMtx);
    
    PlayerModelManager_addHandleToPack(group_oot, h);
}
void registerGiantsKnife(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_giantsknife", PMM_MODEL_TYPE_SWORD4);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Giant's Knife");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_BLADE, gChildGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_HILT, gChildGiantHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_SHEATH, gChildGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_HILT, gDigitaGiantHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_SHEATH, gDigitaGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_HILT, gDigitaGiantHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_SHEATH, gDigitaGoronSheathDL);

    PlayerModelManagerHandle h2 = PLAYERMODELMANAGER_REGISTER_MODEL("digita_giantsknife2", PMM_MODEL_TYPE_SWORD5);

    PlayerModelManager_setAuthor(h2, "digita-LUNA");
    PlayerModelManager_setDisplayName(h2, "Giant's Knife");

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_BLADE, gChildGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_HILT, gChildGiantHiltDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_SHEATH, gChildGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_HILT, gDigitaGiantHiltDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_SHEATH, gDigitaGoronSheathDL);
}
void registerBGS(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_bgs", PMM_MODEL_TYPE_SWORD4);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Biggoron Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_BLADE, gChildGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_HILT, gChildGoronHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_SHEATH, gChildGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_HILT, gDigitaGoronHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_SHEATH, gDigitaGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_HILT, gDigitaGoronHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_SHEATH, gDigitaGoronSheathDL);

    PlayerModelManagerHandle h2 = PLAYERMODELMANAGER_REGISTER_MODEL("digita_bgs2", PMM_MODEL_TYPE_SWORD5);

    PlayerModelManager_setAuthor(h2, "digita-LUNA");
    PlayerModelManager_setDisplayName(h2, "Biggoron Sword");

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_BLADE, gChildGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_HILT, gChildGoronHiltDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_SHEATH, gChildGoronSheathDL);

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_HILT, gDigitaGoronHiltDL);
    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_SHEATH, gDigitaGoronSheathDL);

    PlayerModelManager_addHandleToPack(group_oot, h2);
}
void registerHylianShield(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_dekuhylian", PMM_MODEL_TYPE_SHIELD2);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Deku / Hylian Shield");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SHIELD_HERO, gDigitaDekuShieldDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SHIELD_HERO, gDigitaHylianShieldDL);
    
    PlayerModelManager_addHandleToPack(group_oot, h);
}
void registerMirrorShield(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_mirrorshield_oot", PMM_MODEL_TYPE_SHIELD3);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Gerudo Mirror Shield");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SHIELD_MIRROR, gChildMirrorShieldDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SHIELD_MIRROR, gDigitaOoTMirrorShieldDL);
    
    PlayerModelManager_addHandleToPack(group_oot, h);
}
void registerFairyBow(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_fairybow", PMM_MODEL_TYPE_BOW);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Fairy Bow");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_BOW, gChildBowDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_BOW_STRING, gChildBowStringDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_BOW, gFairyBowDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_BOW_STRING, gFairyBowStringDL);
    
    PlayerModelManager_addHandleToPack(group_oot, h);
}
void registerDampeHookshot(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_dampehookshot", PMM_MODEL_TYPE_HOOKSHOT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Dampe's Hookshot");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_HOOKSHOT, gChildHookshotDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_HOOKSHOT_HOOK, gChildHookTipDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_MTX_HOOKSHOT_CHAIN_AND_HOOK, &sChildHookshotHookMtx);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_HOOKSHOT, gDampeHookshotDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_HOOKSHOT_HOOK, gDampeHookshotTipDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_HOOKSHOT_CHAIN_AND_HOOK, &sAdultHookshotHookMtx);
    
    PlayerModelManager_addHandleToPack(group_oot, h);
}
//this goes at the bottom so i don't have to do implicits.
void registerDigitaOoTEquipment(){
    //resize macros for this file.
    guPosition(&sChildResizeMtx, 0.f, 0.f, 0.f, 0.75f, 0.f, 0.f, 0.f);
    guPosition(&sAdultResizeMtx, 0.f, 0.f, 0.f, 1.35f, 0.f, 0.f, 0.f);

    guPosition(&gKokiriSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -440.f, -211.f, 0.f);
    guPosition(&gAdultKokiriSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -440.f * 0.7, -211.f * 0.7, 0.f);
    guPosition(&gMasterSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -700.f / 0.7, -260.f / 0.7, 30.f / 0.7);
    guPosition(&gChildMasterSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -700.f, -260.f, 30.f);
    guPosition(&sAdultHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f, 840.f, 0.f);
    guPosition(&sChildHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f * 0.7, 450.f, 0.f * 0.7);

    group_oot = PLAYERMODELMANAGER_REGISTER_MODEL("digita_oot_gear", PMM_MODEL_TYPE_MODEL_PACK);

    PlayerModelManager_setAuthor(group_oot, "digita-LUNA");
    PlayerModelManager_setDisplayName(group_oot, "Hylian Gear");

    registerKokiriSword();
    registerMasterSword();
    registerGiantsKnife();
    registerBGS();
    registerHylianShield();
    registerMirrorShield();
    registerFairyBow();
    registerDampeHookshot();
}