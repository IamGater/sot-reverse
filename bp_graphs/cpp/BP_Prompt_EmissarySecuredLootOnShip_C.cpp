// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip (53 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::OnEmissarySecuredLootOnShip()
{
    auto CompanyName = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip (40 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::EmissarySecuredLootOnShip()
{
    ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::Evaluate (22 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip();
    return;
}

// Recovered Kismet: BP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip (864 bytes)
void BP_Prompt_EmissarySecuredLootOnShip_C::ExecuteUbergraph_BP_Prompt_EmissarySecuredLootOnShip()
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
    OnEmissarySecuredLootOnShip(K2Node_CustomEvent_NewParam);
    if (!SurfacedThisSession) goto L_21E;
L_21E:
    auto CallFunc_EqualEqual_NameName_ReturnValue = CompanyName;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    return;
}
