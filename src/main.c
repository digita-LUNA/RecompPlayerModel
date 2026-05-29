#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "digita_dlists.h"
#include "oot_equip.h"
#include "mm_equip.h"

/*
DECLARE_MATRIX_WRAPPED_DL(gAdultHerosShieldDL, sAdultResizeMtx, gDigitaHerosShieldDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMirrorShieldDL, sAdultResizeMtx, gDigitaMMMirrorShieldDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedHiltDL, sAdultResizeMtx, gDigitaGildedHiltDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedBladeDL, sAdultResizeMtx, gDigitaGildedBladeDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultGildedSheathDL, sAdultResizeMtx, gDigitaGildedSheathDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMBowDL, sAdultResizeMtx, gDigitaMMBowDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMHookshotDL, sAdultResizeMtx, gDigitaMMHookshotDL);
DECLARE_MATRIX_WRAPPED_DL(gAdultMMHookshotTipDL, sAdultResizeMtx, gDigitaMMHookshotTipDL);
*/
//child models

void registerDigitaLinkChild();
void registerDigitaLinkAdult();
void registerDigitaLinkOni();
void registerDigitaLinkOniMask();
void registerDigitaLinkAdultOni();
void registerDigitaSariaChild();
void registerDigitaSariaAdult();

static Mtx sAdultHookshotHookMtx;
static Mtx sUpscaledHookshotHookMtx;
static Mtx gOOTAdultShieldMtx;
static Mtx gAdultMaskMtx;

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerDigitaMeshes() {
    // PlayerModelManager stuff

    //set up MTX for any adult models
    
    //due to having a WAY bigger hilt than originally, the Master Sword has a different Mtx for the hilt.
    //Adult Gilded sword has a slightly different Z offset.
    guPosition(&gAdultMaskMtx, 0.f, 0.f, 0.f, 1.f, 0.f, -100.f, 0.f);
    guPosition(&gOOTAdultShieldMtx, 0.f, 0.f, 180.f, 1.f, 735.f, 94.f, 29.f);
    guPosition(&sUpscaledHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f, 400.f, 0.f);

    //set other models. Put into alternate functions for ease.
    registerDigitaLinkChild();
    registerDigitaSariaChild();
    //adult models
    registerDigitaLinkAdult();
    registerDigitaSariaAdult();
    registerDigitaLinkAdultOni();
    //FD Models
    registerDigitaLinkOni();
    registerDigitaLinkOniMask();
    //Equipment
    registerDigitaOoTEquipment();
    registerDigitaMMEquipment();
}
void registerDigitaLinkChild(){
        //set up first model here.
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_childlink", PMM_MODEL_TYPE_CHILD);

        PlayerModelManager_setAuthor(h, "digita-LUNA");
        PlayerModelManager_setDisplayName(h, "Digita MM Link");
        PlayerModelManager_setEyesTextures(h, gLinkChildEyeTextures);
        PlayerModelManager_setMouthTextures(h, gLinkChildMouthTextures);
    
        PlayerModelManager_setSkeleton(h, &gDigitaChildSkel);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaChildLeftFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaChildRightFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaChildFPS);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaChildFPSLeftHandDL);
}
void registerDigitaSariaChild(){
        //set up first model here.
        PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_childsaria", PMM_MODEL_TYPE_CHILD);

        PlayerModelManager_setAuthor(h, "digita-LUNA");
        PlayerModelManager_setDisplayName(h, "Digita Saria");
        PlayerModelManager_setEyesTextures(h, gSariaChildEyeTextures);
        PlayerModelManager_setMouthTextures(h, gSariaChildMouthTextures);
    
        PlayerModelManager_setSkeleton(h, &gSariaChildSkel);
    
        PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaChildLeftFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaChildRightFist);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaChildFPS);
        PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaChildFPSLeftHandDL);
        PlayerModelManager_setDisplayList(h, PMM_DL_OCARINA_TIME, gDigitaFairyOcarinaDL);
}
void registerDigitaLinkAdult() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_adultlink", PMM_MODEL_TYPE_ADULT);

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
}
void registerDigitaSariaAdult() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_adultsaria", PMM_MODEL_TYPE_ADULT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Adult Saria");
    PlayerModelManager_setEyesTextures(h, gSariaAdultEyeTextures);
    PlayerModelManager_setMouthTextures(h, gSariaAdultMouthTextures);

    PlayerModelManager_setSkeleton(h, &gSariaAdultSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaAdultLeftFistDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaAdultRightFistDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaAdultBottleHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaAdultFPSRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaAdultFPSLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gDigitaAdultFPSLeftArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gDigitaAdultFPSRightArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_OCARINA_TIME, gDigitaAdultOcarinaOfTimeDL);
}
void registerDigitaLinkAdultOni() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_adultoni", PMM_MODEL_TYPE_ADULT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Oni Link");
    PlayerModelManager_setEyesTextures(h, gLinkOniEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkOniMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaOniSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaOniLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaOniRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaOniBottleHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaOniFPSRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LHAND, gDigitaOniFPSLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_LFOREARM, gDigitaOniFPSLeftArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RFOREARM, gDigitaOniFPSRightArmDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_OCARINA_TIME, gDigitaAdultOcarinaOfTimeDL);
}
void registerDigitaLinkOni() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_onilink", PMM_MODEL_TYPE_FIERCE_DEITY);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Fierce Diety");
    PlayerModelManager_setEyesTextures(h, gLinkOniEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkOniMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaOniSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaOniLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaOniRightHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_LHAND_BOTTLE, gDigitaOniBottleHandDL);
}

void registerDigitaLinkOniMask() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_onimask", PMM_MODEL_TYPE_MASK_FIERCE_DEITY);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Oni's Mask");

    //Mask Meshes
    PlayerModelManager_setDisplayList(h, PMM_DL_MASK_FIERCE_DEITY, gDigitaOniMaskDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_MASK_FIERCE_DEITY_SCREAM, gDigitaOniMaskScreamDL);
}