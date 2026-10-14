// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_MaidenVoyage_RowboatTutorial_C::UserConstructionScript (3 bytes)
void BP_PromptActor_MaidenVoyage_RowboatTutorial_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_RowboatTutorial (417 bytes)
void BP_PromptActor_MaidenVoyage_RowboatTutorial_C::ExecuteUbergraph_BP_PromptActor_MaidenVoyage_RowboatTutorial()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_31;
L_31:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_MaidenVoyage_RowboatTutorial_C);
    BP_Prompt_MaidenVoyage_RowboatTutorial_C* K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Rowboat_Tutorial = Cast<BP_Prompt_MaidenVoyage_RowboatTutorial_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Rowboat_Tutorial);
    if (!K2Node_DynamicCast_bSuccess) goto L_19E;
    auto idx_275658 = K2Node_DynamicCast_AsBP_Prompt_Maiden_Voyage_Rowboat_Tutorial;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_275658);
    if (!CallFunc_IsValid_ReturnValue) goto L_19E;
L_19E:
    return;
}
