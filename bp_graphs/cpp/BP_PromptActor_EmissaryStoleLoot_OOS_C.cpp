// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissaryStoleLoot_OOS_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissaryStoleLoot_OOS_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryStoleLoot_OOS_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissaryStoleLoot_OOS_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_OOS();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryStoleLoot_OOS_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissaryStoleLoot_OOS_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_OOS();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissaryStoleLoot_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_OOS (695 bytes)
void BP_PromptActor_EmissaryStoleLoot_OOS_C::ExecuteUbergraph_BP_PromptActor_EmissaryStoleLoot_OOS()
{
L_A:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissaryStoleLoot_C);
    BP_Prompt_EmissaryStoleLoot_C* K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot = Cast<BP_Prompt_EmissaryStoleLoot_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot);
    if (!K2Node_DynamicCast_bSuccess) goto L_2B4;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot;
    UObject* CallFunc_GetDefaultObject_ReturnValue = UObjectUtilities::GetDefaultObject(Company);
    Company* K2Node_DynamicCast_AsCompany = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsCompany);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2B4;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot = K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Stole_Loot;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_A;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_2B4;
L_2B4:
    return;
}
