#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "digita_dlists.h"

void registerDigitaLinkAdult();
//void registerDigitaLinkAlt();
void registerDigitaLinkOni();
void registerDigitaLinkAdultOni();

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerDigitaLinkChild() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalinkyoung_pmm", PMM_MODEL_TYPE_CHILD);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Young Link");
    PlayerModelManager_setEyesTextures(h, gLinkChildEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkChildMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaChildSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaChildLeftFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaChildRightFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaChildFPS);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaHumanKokiriHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaHumanKokiriBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaHumanKokiriSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaHumanRazorHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaHumanRazorBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaHumanRazorSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gDigitaHumanGildedSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gDigitaHumanGildedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gDigitaHumanGildedBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gDigitaHerosShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gDigitaHumanMirrorShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gDigitaMMBowDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gDigitaHumanHookshotDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gDigitaHumanHookshotTipDL);
    registerDigitaLinkAdult();
    registerDigitaLinkAdultOni();
    registerDigitaLinkOni();
}
void registerDigitaLinkAdult() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalinkadult_pmm", PMM_MODEL_TYPE_ADULT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Digita Adult Link");
    PlayerModelManager_setEyesTextures(h, gLinkAdultEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkAdultMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaAdultLinkSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaChildLeftFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaChildRightFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaChildFPS);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaHumanKokiriHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaHumanKokiriBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaHumanKokiriSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaHumanRazorHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaHumanRazorBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaHumanRazorSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gDigitaHumanGildedSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gDigitaHumanGildedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gDigitaHumanGildedBladeAltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gDigitaHerosShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gDigitaHumanMirrorShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gDigitaMMBowDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gDigitaHumanHookshotDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gDigitaHumanHookshotTipDL);
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

    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD4_BLADE, gDigitaOniSwordDL );
    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaOniLeftHandDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaOniRightHandDL);
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
}

/*
void registerDigitaLinkAlt() {
    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalinkalt_pmm", PMM_MODEL_TYPE_CHILD);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Classic Gilded Sword");
    PlayerModelManager_setEyesTextures(h, gLinkChildEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkChildMouthTextures);

    PlayerModelManager_setSkeleton(h, &gDigitaChildSkel);

    PlayerModelManager_setDisplayList(h, PMM_DL_LFIST, gDigitaHumanLeftFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_RFIST, gDigitaHumanRightFist);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_HILT, gDigitaHumanKokiriHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_BLADE, gDigitaHumanKokiriBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD1_SHEATH, gDigitaHumanKokiriSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_HILT, gDigitaHumanRazorHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_BLADE, gDigitaHumanRazorBladeDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD2_SHEATH, gDigitaHumanRazorSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_SHEATH, gDigitaHumanGildedSheathDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_HILT, gDigitaHumanGildedHiltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SWORD3_BLADE, gDigitaHumanGildedBladeAltDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD2, gDigitaHerosShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_SHIELD3, gDigitaHumanMirrorShieldDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_BOW, gDigitaHumanBowDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT, gDigitaHumanHookshotDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_HOOKSHOT_HOOK, gDigitaHumanHookshotTipDL);
    PlayerModelManager_setDisplayList(h, PMM_DL_FPS_RHAND, gDigitaFPSRightHand);
}*/