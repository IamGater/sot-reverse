// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_EmissarySunk_RB_C::UserConstructionScript (13 bytes)
void BP_PromptActor_EmissarySunk_RB_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySunk_RB_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_EmissarySunk_RB_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissarySunk_RB();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySunk_RB_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_EmissarySunk_RB_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_EmissarySunk_RB();
    return;
}

// Recovered Kismet: BP_PromptActor_EmissarySunk_RB_C::ExecuteUbergraph_BP_PromptActor_EmissarySunk_RB (705 bytes)
void BP_PromptActor_EmissarySunk_RB_C::ExecuteUbergraph_BP_PromptActor_EmissarySunk_RB()
{
L_A:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_EmissarySunk_C);
    BP_Prompt_EmissarySunk_C* K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk = Cast<BP_Prompt_EmissarySunk_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk);
    if (!K2Node_DynamicCast_bSuccess) goto L_2BE;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk;
    UObject* CallFunc_GetDefaultObject_ReturnValue = UObjectUtilities::GetDefaultObject(Company);
    Company* K2Node_DynamicCast_AsCompany = Cast<Company*>(CallFunc_GetDefaultObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsCompany);
    if (!K2Node_DynamicCast_bSuccess2) goto L_2BE;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk;
    K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Emissary_Sunk;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_2BE;
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_A;
L_2BE:
    return;
}
