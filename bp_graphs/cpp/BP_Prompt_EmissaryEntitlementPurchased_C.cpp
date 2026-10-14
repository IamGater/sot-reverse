// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::OnEmissaryEntitlementPurchasedFunc (53 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::OnEmissaryEntitlementPurchasedFunc()
{
    auto OfferId = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::EmissaryEntitlementPurchased (40 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::EmissaryEntitlementPurchased()
{
    ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::Evaluate (22 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::RegisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::RegisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased();
    return;
}

// Recovered Kismet: BP_Prompt_EmissaryEntitlementPurchased_C::ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased (889 bytes)
void BP_Prompt_EmissaryEntitlementPurchased_C::ExecuteUbergraph_BP_Prompt_EmissaryEntitlementPurchased()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Prompts);
    auto NumberOfPrompts = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = NumberOfPrompts;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue2) goto L_CB;
    bool PromptSurfacedThisSession = true;
L_CB:
    auto CallFunc_EqualEqual_IntInt_ReturnValue = PromptIndex;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_104;
L_104:
    UBasePromptCoordinator::SetPromptAs(CallFunc_Array_Get_Item);
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_Add_IntInt_ReturnValue = PromptIndex;
    auto PromptIndex = CallFunc_Add_IntInt_ReturnValue;
    OnEmissaryEntitlementPurchasedFunc(K2Node_CustomEvent_NewParam);
    if (!PromptSurfacedThisSession) goto L_21E;
L_21E:
    bool CallFunc_EqualEqual_GuidGuid_ReturnValue = UKismetGuidLibrary::EqualEqual_GuidGuid(OfferId, ExpectedOfferId);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    return;
}
