// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::OnEmissaryLevelRankChange (89 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::OnEmissaryLevelRankChange()
{
    auto NewLevel = NewParam;
    auto CompanyName = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::EmissaryLevelRankChange (40 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::EmissaryLevelRankChange()
{
    ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::Evaluate (22 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryLevelRankChange_C::ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange (938 bytes)
void BP_Prompt_EmissaryLevelRankChange_C::ExecuteUbergraph_BP_Prompt_EmissaryLevelRankChange()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Prompts);
    auto NumberOfPrompts = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_EqualEqual_IntInt_ReturnValue3 = NumberOfPrompts;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue3) goto L_CB;
    bool SurfacedThisSession = true;
L_CB:
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = PromptIndex;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue2) goto L_104;
L_104:
    UBasePromptCoordinator::SetPromptAs(CallFunc_Array_Get_Item);
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_Add_IntInt_ReturnValue = PromptIndex;
    auto PromptIndex = CallFunc_Add_IntInt_ReturnValue;
    OnEmissaryLevelRankChange(K2Node_CustomEvent_NewParam);
    if (!SurfacedThisSession) goto L_21E;
L_21E:
    auto CallFunc_EqualEqual_NameName_ReturnValue = CompanyName;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = NewLevel;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    return;
}
