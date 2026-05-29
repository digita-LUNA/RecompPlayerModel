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

    DECLARE_MATRIX_WRAPPED_DL(gAdultTerminaBladeDL, sMMAdultResizeMtx, gDigitaTerminaBladeDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultTerminaSheathDL, sMMAdultResizeMtx, gDigitaKokiriSheathDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultTerminaHiltDL, sMMAdultResizeMtx, gDigitaTerminaHiltDL);

    DECLARE_MATRIX_WRAPPED_DL(gAdultClassicBladeDL, sMMAdultResizeMtx, gDigitaClassicBladeDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultGildedBladeDL, sMMAdultResizeMtx, gDigitaGildedBladeDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultGildedSheathDL, sMMAdultResizeMtx, gDigitaGildedSheathDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultGildedHiltDL, sMMAdultResizeMtx, gDigitaGildedHiltDL);

    DECLARE_MATRIX_WRAPPED_DL(gChildOniSwordDL, sMMChildResizeMtx, gDigitaOniSwordDL);

    DECLARE_MATRIX_WRAPPED_DL(gAdultHerosShieldDL, sMMAdultResizeMtx, gDigitaHerosShieldDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultMirrorShieldDL, sMMAdultResizeMtx, gDigitaMMMirrorShieldDL);

    DECLARE_MATRIX_WRAPPED_DL(gAdultPirateHookDL, sMMAdultResizeMtx, gDigitaMMHookshotDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultPirateTipDL, sMMAdultResizeMtx, gDigitaMMHookshotTipDL);
    DECLARE_MATRIX_WRAPPED_DL(gAdultMMBowDL, sMMAdultResizeMtx, gDigitaMMBowDL);

static Mtx gAdultGildedSwordHiltMtx;
static Mtx gAdultRazorSwordHiltMtx;
static Mtx sAdultHookshotHookMtx;

PlayerModelManagerHandle group_mm;

void registerHeroSword(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_kokiriswordMM", PMM_MODEL_TYPE_SWORD1);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Hero's Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_BLADE, gDigitaTerminaBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_HILT, gDigitaTerminaHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_KOKIRI_SHEATH, gDigitaKokiriSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_BLADE, gAdultTerminaBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_HILT, gAdultTerminaHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_KOKIRI_SHEATH, gAdultTerminaSheathDL);
    
    PlayerModelManager_addHandleToPack(group_mm, h);
}
void registerRazorSword(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_razorsword", PMM_MODEL_TYPE_SWORD2);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Razor Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_RAZOR_BLADE, gDigitaRazorBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_RAZOR_HILT, gDigitaRazorHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD_RAZOR_SHEATH, gDigitaRazorSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_RAZOR_BLADE, gDigitaTemperedBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_RAZOR_HILT, gDigitaTemperedHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD_RAZOR_SHEATH, gDigitaTemperedSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_SWORD_RAZOR_BACK, &gAdultRazorSwordHiltMtx);

    PlayerModelManager_addHandleToPack(group_mm, h);
}
void registerGildedSword(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_gildedsword", PMM_MODEL_TYPE_SWORD3);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Razor Gilded Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_BLADE, gDigitaGildedBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_HILT, gDigitaGildedHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_SHEATH, gDigitaGildedSheathDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_BLADE, gAdultGildedBladeDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_HILT, gAdultGildedHiltDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_SHEATH, gAdultGildedSheathDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_SWORD_GILDED_BACK, &gAdultGildedSwordHiltMtx);
    PlayerModelManager_addHandleToPack(group_mm, h);

    PlayerModelManagerHandle h1 = PLAYERMODELMANAGER_REGISTER_MODEL("digita_gildedclassic", PMM_MODEL_TYPE_SWORD3);

    PlayerModelManager_setAuthor(h1, "digita-LUNA");
    PlayerModelManager_setDisplayName(h1, "Classic Gilded Sword");

    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_BLADE, gDigitaClassicBladeDL);
    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_HILT, gDigitaGildedHiltDL);
    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD3_SHEATH, gDigitaGildedSheathDL);
    
    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_BLADE, gAdultClassicBladeDL);
    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_HILT, gAdultGildedHiltDL);
    PlayerModelManager_setDisplayListForModelType(h1, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD3_SHEATH, gAdultGildedSheathDL);
    PlayerModelManager_setMatrixForModelType(h1, PMM_MODEL_TYPE_ADULT, PMM_MTX_SWORD_GILDED_BACK, &gAdultGildedSwordHiltMtx);
}

void registerFDS(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_fds", PMM_MODEL_TYPE_SWORD4);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Fierce Diety Sword");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD4_BLADE, gChildOniSwordDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD4_BLADE, gDigitaOniSwordDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_FIERCE_DEITY, PMM_DL_SWORD4_BLADE, gDigitaOniSwordDL);
    PlayerModelManager_addHandleToPack(group_mm, h);

    PlayerModelManagerHandle h2 = PLAYERMODELMANAGER_REGISTER_MODEL("digita_fds2", PMM_MODEL_TYPE_SWORD5);

    PlayerModelManager_setAuthor(h2, "digita-LUNA");
    PlayerModelManager_setDisplayName(h2, "Fierce Diety Sword");

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_CHILD, PMM_DL_SWORD5_BLADE, gChildOniSwordDL);

    PlayerModelManager_setDisplayListForModelType(h2, PMM_MODEL_TYPE_ADULT, PMM_DL_SWORD5_BLADE, gDigitaOniSwordDL);
}
void registerHeroShield(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_heroshield", PMM_MODEL_TYPE_SHIELD2);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Hero's Shield");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SHIELD_HERO, gDigitaHerosShieldDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SHIELD_HERO, gAdultHerosShieldDL);
    PlayerModelManager_addHandleToPack(group_mm, h);
}
void registerMirrorShield_MM(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_mirrorshield_mm", PMM_MODEL_TYPE_SHIELD3);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Ikana Mirror Shield");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_SHIELD_MIRROR, gDigitaMMMirrorShieldDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_SHIELD_MIRROR, gAdultMirrorShieldDL);
    PlayerModelManager_addHandleToPack(group_mm, h);
}
void registerHeroBow(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_mmbow", PMM_MODEL_TYPE_BOW);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Heros' Bow");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_BOW, gDigitaMMBowDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_BOW, gAdultMMBowDL);
    PlayerModelManager_addHandleToPack(group_mm, h);
}
void registerPirateHookshot(){
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("digita_mmhookshot", PMM_MODEL_TYPE_HOOKSHOT);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Pirate's Hookshot");

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_HOOKSHOT, gDigitaMMHookshotDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_CHILD, PMM_DL_HOOKSHOT_HOOK, gDigitaMMHookshotTipDL);

    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_HOOKSHOT, gAdultPirateHookDL);
    PlayerModelManager_setDisplayListForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_DL_HOOKSHOT_HOOK, gAdultPirateTipDL);
    PlayerModelManager_setMatrixForModelType(h, PMM_MODEL_TYPE_ADULT, PMM_MTX_HOOKSHOT_CHAIN_AND_HOOK, &sAdultHookshotHookMtx);
    PlayerModelManager_addHandleToPack(group_mm, h);
}
//this goes at the bottom so i don't have to do implicits.
void registerDigitaMMEquipment(){
    //resize macros for this file.
    guPosition(&sMMChildResizeMtx, 0.f, 0.f, 0.f, 0.75f, 0.f, 0.f, 0.f);
    guPosition(&sMMAdultResizeMtx, 0.f, 0.f, 0.f, 1.35f, 0.f, 0.f, 0.f);

    guPosition(&gAdultRazorSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -800.f, -310.f, 20.f);
    guPosition(&gAdultGildedSwordHiltMtx, 0.f, 0.f, 0.f, 1.f, -800.f, -310.f, -30.f);

    guPosition(&sAdultHookshotHookMtx, 0.f, 0.f, 0.f, 1.f, 50.f, 420.f, 0.f);

    group_mm = PLAYERMODELMANAGER_REGISTER_MODEL("digita_mm_gear", PMM_MODEL_TYPE_MODEL_PACK);

    PlayerModelManager_setAuthor(group_mm, "digita-LUNA");
    PlayerModelManager_setDisplayName(group_mm, "Terminian Gear");

    registerHeroSword();
    registerRazorSword();
    registerGildedSword();
    registerFDS();
    registerHeroShield();
    registerMirrorShield_MM();
    registerHeroBow();
    registerPirateHookshot();
}