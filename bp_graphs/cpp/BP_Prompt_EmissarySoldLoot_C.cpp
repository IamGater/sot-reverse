// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::OnEmissarySoldLoot (53 bytes)
void BP_Prompt_EmissarySoldLoot_C::OnEmissarySoldLoot()
{
    auto CompanyName = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::EmissarySoldLoot (40 bytes)
void BP_Prompt_EmissarySoldLoot_C::EmissarySoldLoot()
{
    ExecuteUbergraph_BP_Prompt_EmissarySoldLoot();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::Evaluate (22 bytes)
void BP_Prompt_EmissarySoldLoot_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EmissarySoldLoot();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissarySoldLoot_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissarySoldLoot();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissarySoldLoot_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissarySoldLoot();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySoldLoot_C::ExecuteUbergraph_BP_Prompt_EmissarySoldLoot (855 bytes)
void BP_Prompt_EmissarySoldLoot_C::ExecuteUbergraph_BP_Prompt_EmissarySoldLoot()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Prompts);
    auto NumberOfPrompts = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = NumberOfPrompts;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue2) goto L_CB;
    bool SurfacedThisSession = true;
L_CB:
    auto CallFunc_EqualEqual_IntInt_ReturnValue = PromptIndex;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_104;
L_104:
    UBasePromptCoordinator::SetPromptAs(CallFunc_Array_Get_Item);
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_Add_IntInt_ReturnValue = PromptIndex;
    auto PromptIndex = CallFunc_Add_IntInt_ReturnValue;
    OnEmissarySoldLoot(K2Node_CustomEvent_NewParam);
    if (!SurfacedThisSession) goto L_21E;
L_21E:
    auto CallFunc_EqualEqual_NameName_ReturnValue = CompanyName;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    return;
}
