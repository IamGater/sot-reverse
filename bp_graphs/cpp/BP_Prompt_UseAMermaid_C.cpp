// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_UseAMermaid_C::ResetState (35 bytes)
void BP_Prompt_UseAMermaid_C::ResetState()
{
    bool State_IsThereAMermaid = false;
    bool State_ShowPrompt = false;
    UBasePromptCoordinator::UpdateVisiblePrompt();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::EvaluatePromptDisplayState (303 bytes)
void BP_Prompt_UseAMermaid_C::EvaluatePromptDisplayState()
{
    if (!State_MermaidUsed) goto L_74;
    FPromptEvaluation CallFunc_MakeCompleteCoordinator_ReturnValue = UBasePromptCoordinator::MakeCompleteCoordinator();
L_74:
    auto CallFunc_BooleanAND_ReturnValue = State_ShowPrompt;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_ED;
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue = UBasePromptCoordinator::MakeShowPrompt(Prompt_UseMermaid);
L_ED:
    FPromptEvaluation CallFunc_MakeHideCurrentPrompts_ReturnValue = UBasePromptCoordinator::MakeHideCurrentPrompts();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::PostInitialize (22 bytes)
void BP_Prompt_UseAMermaid_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::Prompt_MermaidActivatedLocally (40 bytes)
void BP_Prompt_UseAMermaid_C::Prompt_MermaidActivatedLocally()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::Prompt_MermaidDeactivatedLocally (40 bytes)
void BP_Prompt_UseAMermaid_C::Prompt_MermaidDeactivatedLocally()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::Prompt_MermaidUsed (40 bytes)
void BP_Prompt_UseAMermaid_C::Prompt_MermaidUsed()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_UseAMermaid_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_UseAMermaid_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_UseAMermaid();
    return;
}

// Recovered Kismet: BP_Prompt_UseAMermaid_C::ExecuteUbergraph_BP_Prompt_UseAMermaid (1033 bytes)
void BP_Prompt_UseAMermaid_C::ExecuteUbergraph_BP_Prompt_UseAMermaid()
{
    ResetState();
    bool State_ShowPrompt = false;
    UBasePromptCoordinator::UpdateVisiblePrompt();
    State_ShowPrompt = true;
    UBasePromptCoordinator::UpdateVisiblePrompt();
    bool State_IsThereAMermaid = true;
    State_IsThereAMermaid = false;
    UBasePromptCoordinator::UpdateVisiblePrompt();
    bool State_MermaidUsed = true;
    UBasePromptCoordinator::UpdateVisiblePrompt();
    AAthenaGameState* CallFunc_GetAthenaGameState_ReturnValue = UGameStateFunctionLibrary::GetAthenaGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetAthenaGameState_ReturnValue);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    AAthenaGameState* CallFunc_GetAthenaGameState_ReturnValue2 = UGameStateFunctionLibrary::GetAthenaGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetAthenaGameState_ReturnValue2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    return;
}
