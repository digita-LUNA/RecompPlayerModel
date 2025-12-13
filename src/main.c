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

DECLARE_MATRIX_WRAPPED_DL(gAdultHerosShieldDL, sAdultResizeMtx, gDigitaHerosShieldDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMirrorShieldDL, sAdultResizeMtx, gDigitaHumanMirrorShieldDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedHiltDL, sAdultResizeMtx, gDigitaGildedHiltDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedBladeDL, sAdultResizeMtx, gDigitaGildedBladeDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedSheathDL, sAdultResizeMtx, gDigitaGildedSheathDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMBowDL, sAdultResizeMtx, gDigitaMMBowDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMHookshotDL, sAdultResizeMtx, gDigitaMMHookshotDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMHookshotTipDL, sAdultResizeMtx, gDigitaMMHookshotTipDL);

void registerDigitaLinkMM();
void registerDigitaLinkAdult();
void registerDigitaLinkOni();
void registerDigitaLinkAdultOni();

static Mtx sAdultHookshotHookMtx;
static Mtx sUpscaledHookshotHookMtx;
static Mtx gOOTMasterSwordHiltMtx;
static Mtx gDigitaMasterSwordHiltMtx;
static Mtx gAdultGildedSwordHiltMtx;
static Mtx gOOTAdultShieldMtx;
static Mtx gAdultMaskMtx;

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerDigitaLinkChild() {
    // PlayerModelManager stuff

    //set up MTX for any adult models
    //guPosition(&sChildResizeMtx, 0.f, 0.f, 0.f, 0.75f, 0.f, 0.f, 0.f);
    guPosition(&sAdultResizeMtx, 0.f, 0.f, 0.f, 1.35f, 0.f, 0.f, 0.f);
    
    guPosition(&gOOTMasterSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -800.f, -310.f, 20.f);
    //due to having a WAY bigger hilt than originally, the Master Sword has a different Mtx for the hilt.
    guPosition(&gDigitaMasterSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -1000.f, -310.f, 30.f);
    //Adult Gilded sword has a slightly different Z offset.
    guPosition(&gAdultGildedSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -800.f, -310.f, -30.f);
    guPosition(&gAdultMaskMtx, 0.f, 0.f, 0.f, 1.f, 0.f, -100.f, 0.f);
    guPosition(&gOOTAdultShieldMtx, 0.f, 0.f, 180.f, 1.f, 735.f, 94.f, 29.f);
    guPosition(&sAdultHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f, 840.f, 0.f);
    guPosition(&sUpscaledHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f, 400.f, 0.f);

    //set other models. Put into alternate functions for ease.
    registerDigitaLinkMM();
    registerDigitaLinkAdult();
    registerDigitaLinkAdultOni();
    registerDigitaLinkOni();
}
void registerDigitaLinkMM(){
        //set up first model here.
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalinkyoung_pmm", PMM_MODEL_TYPE_CHILD);

        PlayerModelManager_setAuthor(h, "digita-LUNA");
        PlayerModelManager_setDisplayName(h, "Digita MM Link");
        PlayerModelManager_setEyesTextures(h, gLinkChildEyeTextures);
        PlayerModelManager_setMouthTextures(h, gLinkChildMouthTextures);
    
        PlayerModelManager_setSkeleton(h, &gDigitaChildSkel);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaChildLeftFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaChildRightFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaChildFPS);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaChildFPSLeftHandDL);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaHumanKokiriHiltDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaHumanKokiriBladeDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaHumanKokiriSheathDL);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaHumanRazorHiltDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaHumanRazorBladeDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaHumanRazorSheathDL);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gDigitaGildedSheathDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gDigitaGildedHiltDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gDigitaGildedBladeDL);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gDigitaHerosShieldDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gDigitaHumanMirrorShieldDL);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gDigitaMMBowDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gDigitaMMHookshotDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gDigitaMMHookshotTipDL);
}
void registerDigitaLinkAdult() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalinkadult_pmm", PMM_MODEL_TYPE_ADULT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Adult Link");
    PlayerModelManager_setEyesTextures(h, gLinkAdultEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkAdultMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaAdultLinkSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaAdultLeftFistDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaAdultRightFistDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaAdultBottleHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaAdultFPSRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaAdultFPSLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gDigitaAdultFPSLeftArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gDigitaAdultFPSRightArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_OCARINA_TIME, gDigitaAdultOcarinaOfTimeDL);
    
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaKnightHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaKnightBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaKnightSheathDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaTemperedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaTemperedBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaTemperedSheathDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gDigitaMasterSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gDigitaMasterHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gDigitaMasterBladeDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD4_SHEATH, gDigitaGoronSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD4_HILT, gDigitaGoronHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD4_BLADE, gDigitaGoronBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD5_SHEATH, gDigitaGoronSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD5_HILT, gDigitaGoronHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD5_BLADE, gDigitaGoronBladeDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gDigitaHylianShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gDigitaOoTMirrorShieldDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gDigitaOOTBowDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW_STRING, gDigitaOOTBowStringDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gDigitaOOTHookshotDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gDigitaOOTHookshotTipDL);

    //Matrixes
    PlayerModelManager_setMatrix(h, PMM_MTX_MASKS, &gAdultMaskMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_HOOKSHOT_CHAIN_AND_HOOK, &sAdultHookshotHookMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SHIELD_HERO_BACK, &gOOTAdultShieldMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SHIELD_MIRROR_BACK, &gOOTAdultShieldMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_KOKIRI_BACK, &gOOTMasterSwordHiltMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_RAZOR_BACK, &gOOTMasterSwordHiltMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_GILDED_BACK, &gDigitaMasterSwordHiltMtx);
}

void registerDigitaLinkAdultOni() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitahumanoni_pmm", PMM_MODEL_TYPE_ADULT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Oni Link");
    PlayerModelManager_setEyesTextures(h, gLinkOniEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkOniMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaOniSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD5_BLADE, gDigitaOniSwordDL ); //goes over GF sword
    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaOniLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaOniRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaOniBottleHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaOniFPSRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaOniFPSLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gDigitaOniFPSLeftArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gDigitaOniFPSRightArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_OCARINA_TIME, gDigitaAdultOcarinaOfTimeDL);
    
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaKnightHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaKnightBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaKnightSheathDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaTemperedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaTemperedBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaTemperedSheathDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gAdultGildedSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gAdultGildedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gAdultGildedBladeDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gAdultHerosShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gAdultMirrorShieldDL);
    
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gAdultMMBowDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW_STRING, gDigitaOOTBowStringDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gAdultMMHookshotDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gAdultMMHookshotTipDL);

    //Matrixes
    PlayerModelManager_setMatrix(h, PMM_MTX_MASKS, &gAdultMaskMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_HOOKSHOT_CHAIN_AND_HOOK, &sUpscaledHookshotHookMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SHIELD_HERO_BACK, &gOOTAdultShieldMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SHIELD_MIRROR_BACK, &gOOTAdultShieldMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_KOKIRI_BACK, &gOOTMasterSwordHiltMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_RAZOR_BACK, &gOOTMasterSwordHiltMtx);
    PlayerModelManager_setMatrix(h, PMM_MTX_SWORD_GILDED_BACK, &gAdultGildedSwordHiltMtx);
}
void registerDigitaLinkOni() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitaoni_pmm", PMM_MODEL_TYPE_FIERCE_DEITY);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Fierce Diety");
    PlayerModelManager_setEyesTextures(h, gLinkOniEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkOniMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaOniSkel);

    //Mask Meshes
    PlayerModelManager_setDisplayList(h, PMM_DL_MASK_FIERCE_DEITY, gDigitaOniMaskDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_MASK_FIERCE_DEITY_SCREAM, gDigitaOniMaskScreamDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaOniLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaOniRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaOniBottleHandDL);

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD4_BLADE, gDigitaOniSwordDL );
}