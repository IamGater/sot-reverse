// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_FishingRodTutorial (417 bytes)
void BP_PromptActor_MaidenVoyage_FishingRodTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_FishingRodTutorial()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_MaidenVoyage_FishingRodTutorial_C);
    BP_Prompt_MaidenVoyage_FishingRodTutorial_C* K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial = Cast<BP_Prompt_MaidenVoyage_FishingRodTutorial_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial);
    if (!K2Node_DynamicCast_bSuccess) goto L_19E;
    auto idx_275629 = K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Fishing_Rod_Tutorial;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275629);
    if (!CallFunc_IsValid_ReturnValue) goto L_19E;
L_19E:
    return;
}
