// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PromptActor_UseMermaid_C::UserConstructionScript (13 bytes)
void BP_PromptActor_UseMermaid_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_PromptActor_UseMermaid_C::ReceiveBeginPlay (22 bytes)
void BP_PromptActor_UseMermaid_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PromptActor_UseMermaid();
    return;
}

// Recovered Kismet: BP_PromptActor_UseMermaid_C::ReceiveEndPlay (40 bytes)
void BP_PromptActor_UseMermaid_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PromptActor_UseMermaid();
    return;
}

// Recovered Kismet: BP_PromptActor_UseMermaid_C::ExecuteUbergraph_BP_PromptActor_UseMermaid (409 bytes)
void BP_PromptActor_UseMermaid_C::ExecuteUbergraph_BP_PromptActor_UseMermaid()
{
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_6D;
L_6D:
    UObject* CallFunc_CreateObject_ReturnValue = UObjectUtilities::CreateObject(BP_Prompt_UseAMermaid_C);
    BP_Prompt_UseAMermaid_C* K2Node_DynamicCast_AsBP_Prompt_Use_AMermaid = Cast<BP_Prompt_UseAMermaid_C*>(CallFunc_CreateObject_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Prompt_Use_AMermaid);
    if (!K2Node_DynamicCast_bSuccess) goto L_196;
    GetAthenaPlayerController(CallFunc_GetAthenaPlayerController_AthenaPlayerController);
    auto PromptCoordinator = K2Node_DynamicCast_AsBP_Prompt_Use_AMermaid;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(PromptCoordinator);
    if (!CallFunc_IsValid_ReturnValue) goto L_196;
L_196:
    return;
}
