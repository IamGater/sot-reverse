// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_Fishing_C::UserConstructionScript (13 bytes)
void BP_PromptActor_Fishing_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_Fishing_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_Fishing_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_Fishing();
    return;
}

// Recovered Kismet: BP_PromptActor_Fishing_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_Fishing_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_Fishing();
    return;
}

// Recovered Kismet: BP_PromptActor_Fishing_C::ExecuteUbergraph_BP_PromptActor_Fishing (394 bytes)
void BP_PromptActor_Fishing_C::ExecuteUbergraph_BP_PromptActor_Fishing()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_48;
L_48:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_MaidenVoyage_FishingRodTutorial_C);
    BP_Prompt_MaidenVoyage_FishingRodTutorial_C* K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial = Cast<BP_Prompt_MaidenVoyage_FishingRodTutorial_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial);
    if (!K2Node_DynamicCast_bSuccess) goto L_187;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_187;
L_187:
    return;
}
