#include "modding.h"
#include "global.h"
#include "recomputils.h"
#include "recompconfig.h"
#include "playermodelmanager_api.h"
#include "digita_link.h"
#include "kafei.h"

PLAYERMODELMANAGER_CALLBACK_REGISTER_MODELS void registerDigitaLink() {
    setupKafeiAssets();

    // PlayerModelManager stuff
    PlayerModelManagerHandle h = PLAYERMODELMANAGER_REGISTER_MODEL("mm_digitalink_pmm", PMM_MODEL_TYPE_CHILD);

    PlayerModelManager_setAuthor(h, "digita-LUNA");
    PlayerModelManager_setDisplayName(h, "Updated Link");
    PlayerModelManager_setEyesTextures(h, gLinkHumanEyeTextures);
    PlayerModelManager_setMouthTextures(h, gLinkHumanMouthTextures);

    PlayerModelManager_setSkeleton(h, &gLinkHumanSkel);
}
