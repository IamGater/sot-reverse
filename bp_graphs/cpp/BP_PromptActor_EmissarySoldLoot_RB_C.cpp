// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissarySoldLoot_RB_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissarySoldLoot_RB_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySoldLoot_RB_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissarySoldLoot_RB_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissarySoldLoot_RB();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySoldLoot_RB_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissarySoldLoot_RB_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissarySoldLoot_RB();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySoldLoot_RB_C::ExecuteUbergraph_BP_PromptActor_EmissarySoldLoot_RB (700 bytes)
void BP_PromptActor_EmissarySoldLoot_RB_C::ExecuteUbergraph_BP_PromptActor_EmissarySoldLoot_RB()
{
L_A:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissarySoldLoot_C);
    BP_Prompt_EmissarySoldLoot_C* K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot = Cast<BP_Prompt_EmissarySoldLoot_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot);
    if (!K2Node_DynamicCast_bSuccess) goto L_2B9;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot;
    UObject* CallFunc_GetDefaultObject_ReturnValue = UObjectUtilities::GetDefaultObject(Company);
    Company* K2Node_DynamicCast_AsCompany = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsCompany);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2B9;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sold_Loot;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_2B9;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_A;
L_2B9:
    return;
}
