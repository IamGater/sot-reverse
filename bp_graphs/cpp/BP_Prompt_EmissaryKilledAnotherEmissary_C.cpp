// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::OnEmissaryKilledAnotherEmissary (89 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::OnEmissaryKilledAnotherEmissary()
{
    auto CompanyName = NewParam;
    auto VictimCompanyName = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::EmissaryKilledAnotherEmisary (40 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::EmissaryKilledAnotherEmisary()
{
    ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::Evaluate (22 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryKilledAnotherEmissary_C::ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary (965 bytes)
void BP_Prompt_EmissaryKilledAnotherEmissary_C::ExecuteUbergraph_BP_Prompt_EmissaryKilledAnotherEmissary()
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
    OnEmissaryKilledAnotherEmissary(K2Node_CustomEvent_NewParam);
    if (!SurfacedThisSession) goto L_21E;
L_21E:
    auto CallFunc_EqualEqual_NameName_ReturnValue = CompanyName;
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(ExpectedVictimCompanyName, VictimCompanyName);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    return;
}
