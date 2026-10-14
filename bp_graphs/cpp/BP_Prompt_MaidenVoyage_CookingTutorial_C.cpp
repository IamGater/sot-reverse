// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFoodFunc (295 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFoodFunc()
{
    auto K2Node_DynamicCast_AsWieldable_Ingestible = this;
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Ingestible);
    if (!K2Node_DynamicCast_bSuccess) goto L_124;
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(K2Node_DynamicCast_AsWieldable_Ingestible);
    auto CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_NotEqual_ClassClass_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_124;
    bool idx_275623 = true;
    Evaluate();
L_124:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFood (40 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::OnHoldRawFood()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_CookingTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial (363 bytes)
void BP_Prompt_MaidenVoyage_CookingTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_CookingTutorial()
{
    UBasePromptCoordinator::DismissAllPrompts();
    if (!idx_275619) goto L_29;
L_29:
    UBasePromptCoordinator::SetPromptAs(idx_275622);
    bool idx_275619 = true;
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    OnHoldRawFoodFunc(K2Node_CustomEvent_Event);
    return;
}
