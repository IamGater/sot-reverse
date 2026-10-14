// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissaryRank5_AF_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissaryRank5_AF_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryRank5_AF_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissaryRank5_AF_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryRank5_AF();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryRank5_AF_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissaryRank5_AF_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryRank5_AF();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryRank5_AF_C::ExecuteUbergraph_BP_PromptActor_EmissaryRank5_AF (788 bytes)
void BP_PromptActor_EmissaryRank5_AF_C::ExecuteUbergraph_BP_PromptActor_EmissaryRank5_AF()
{
L_A:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissaryLevelRankChange_C);
    BP_Prompt_EmissaryLevelRankChange_C* K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = Cast<BP_Prompt_EmissaryLevelRankChange_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change);
    if (!K2Node_DynamicCast_bSuccess2) goto L_311;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    UObject* CallFunc_GetDefaultObject_ReturnValue = UObjectUtilities::GetDefaultObject(Company);
    Company* K2Node_DynamicCast_AsCompany = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsCompany);
    if (!K2Node_DynamicCast_bSuccess) goto L_311;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Level_Rank_Change;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_A;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_311;
L_311:
    return;
}
