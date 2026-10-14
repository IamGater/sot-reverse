// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::StopPrompts (17 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::StopPrompts()
{
    DismissExpl.oreIslandPrompts();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ReturnToPirateLord();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ReturnToPirateLord();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::DismissExpl.oreIslandPrompts (22 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::DismissExpl.oreIslandPrompts()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ReturnToPirateLord();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ReturnToPirateLord (554 bytes)
void BP_PromptActor_MaidenVoyage_ReturnToPirateLord_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_ReturnToPirateLord()
{
L_A:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(idx_275632);
    idx_275632* idx_275637 = Cast<idx_275632*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_275637);
    if (!K2Node_DynamicCast_bSuccess) goto L_227;
    auto idx_275638 = idx_275637;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_A;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275638);
    if (!CallFunc_IsValid_ReturnValue) goto L_227;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(idx_275638);
    if (!CallFunc_IsValid_ReturnValue2) goto L_227;
L_227:
    return;
}
