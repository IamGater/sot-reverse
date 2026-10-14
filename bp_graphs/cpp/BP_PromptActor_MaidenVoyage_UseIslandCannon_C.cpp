// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseIslandCannon_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_UseIslandCannon_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseIslandCannon (417 bytes)
void BP_PromptActor_MaidenVoyage_UseIslandCannon_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_UseIslandCannon()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275841);
    idx_275841* idx_275845 = Cast<idx_275841*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275845);
    if (!K2Node_DynamicCast_bSuccess) goto L_19E;
    auto idx_275846 = idx_275845;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275846);
    if (!CallFunc_IsValid_ReturnValue) goto L_19E;
L_19E:
    return;
}
