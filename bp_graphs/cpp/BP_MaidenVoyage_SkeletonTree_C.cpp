// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::UserConstructionScript (3 bytes)
void BP_MaidenVoyage_SkeletonTree_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ReceiveBeginPlay (22 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ExecuteDockableCutsceneAction (22 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ExecuteDockableCutsceneAction()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ActivateMesh (22 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ActivateMesh()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ReceiveEndPlay (40 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::OnApplyDamage (40 bytes)
void BP_MaidenVoyage_SkeletonTree_C::OnApplyDamage()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::PickAnimationBasedOnGender (40 bytes)
void BP_MaidenVoyage_SkeletonTree_C::PickAnimationBasedOnGender()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ActivateGlintOnObject (22 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ActivateGlintOnObject()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::Activate Glint (22 bytes)
void BP_MaidenVoyage_SkeletonTree_C::Activate Glint()
{
    ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree (1047 bytes)
void BP_MaidenVoyage_SkeletonTree_C::ExecuteUbergraph_BP_MaidenVoyage_SkeletonTree()
{
    K2_DestroyActor();
    auto CallFunc_GetAnimInstance_ReturnValue = SkeletalMeshComponent->GetAnimInstance();
    float CallFunc_Montage_Play_ReturnValue = CallFunc_GetAnimInstance_ReturnValue->Montage_Play(DockableAnimToPlay);
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = Glint->GetMaterial();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = Glint->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    auto idx_279333 = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = NumHits;
    auto NumHits = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Greater_IntInt_ReturnValue = NumHits;
    SetActorHiddenInGame(true);
    TScriptInterface<UPlayerGenderInterface_C> idx_279338 = TScriptInterface<UPlayerGenderInterface_C>(idx_279336);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_279338);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_3AE;
    if (!idx_279324) goto L_3BE;
L_3AE:
    bool idx_279324 = false;
L_3BE:
    Activate Glint();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_SkeletonTree_C::BroadcastDamage__DelegateSignature (3 bytes)
void BP_MaidenVoyage_SkeletonTree_C::BroadcastDamage__DelegateSignature()
{
    return;
}
