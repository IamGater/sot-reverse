// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_ProposeVoyage_C::PostInitialize (22 bytes)
void BP_Prompt_ProposeVoyage_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_ProposeVoyage();
    return;
}

// Recovered Kismet: BP_Prompt_ProposeVoyage_C::Prompt_OfferPurchased (40 bytes)
void BP_Prompt_ProposeVoyage_C::Prompt_OfferPurchased()
{
    ExecuteUbergraph_BP_Prompt_ProposeVoyage();
    return;
}

// Recovered Kismet: BP_Prompt_ProposeVoyage_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_ProposeVoyage_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_ProposeVoyage();
    return;
}

// Recovered Kismet: BP_Prompt_ProposeVoyage_C::Evaluate (22 bytes)
void BP_Prompt_ProposeVoyage_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_ProposeVoyage();
    return;
}

// Recovered Kismet: BP_Prompt_ProposeVoyage_C::ExecuteUbergraph_BP_Prompt_ProposeVoyage (518 bytes)
void BP_Prompt_ProposeVoyage_C::ExecuteUbergraph_BP_Prompt_ProposeVoyage()
{
    bool State_Complete = true;
    UBasePromptCoordinator::DismissAllPrompts();
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    bool CallFunc_IsOfferCategory_ReturnValue = UShopOfferBlueprintFunctionLibrary::IsOfferCategory(K2Node_CustomEvent_Ev);
    bool State_OfferPurchased = true;
    Evaluate();
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    if (!State_Complete) goto L_160;
    UBasePromptCoordinator::DismissAllPrompts();
L_160:
    if (!State_OfferPurchased) goto L_1F8;
    UBasePromptCoordinator::SetPromptAs(Prompt_ProposeVoyage);
L_1F8:
    UBasePromptCoordinator::DismissAllPrompts();
    return;
}
