// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_CookingTutorial_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_CookingTutorial_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_CookingTutorial_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_CookingTutorial_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_CookingTutorial_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_CookingTutorial_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_CookingTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_CookingTutorial (417 bytes)
void BP_PromptActor_MaidenVoyage_CookingTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_CookingTutorial()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275608);
    idx_275608* idx_275612 = Cast<idx_275608*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275612);
    if (!K2Node_DynamicCast_bSuccess) goto L_19E;
    auto idx_275613 = idx_275612;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275613);
    if (!CallFunc_IsValid_ReturnValue) goto L_19E;
L_19E:
    return;
}
