// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_StowSword_C::OnStowFunc (224 bytes)
void BP_Prompt_StowSword_C::OnStowFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BA;
    if (!this) goto L_BF;
L_BA:
L_BF:
    bool idx_275913 = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_StowSword_C::Evaluate (22 bytes)
void BP_Prompt_StowSword_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_StowSword();
    return;
}

// Recovered Kismet: BP_Prompt_StowSword_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_StowSword_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_StowSword();
    return;
}

// Recovered Kismet: BP_Prompt_StowSword_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_StowSword_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_StowSword();
    return;
}

// Recovered Kismet: BP_Prompt_StowSword_C::OnStow (40 bytes)
void BP_Prompt_StowSword_C::OnStow()
{
    ExecuteUbergraph_BP_Prompt_StowSword();
    return;
}

// Recovered Kismet: BP_Prompt_StowSword_C::ExecuteUbergraph_BP_Prompt_StowSword (278 bytes)
void BP_Prompt_StowSword_C::ExecuteUbergraph_BP_Prompt_StowSword()
{
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
L_58:
    UBasePromptCoordinator::SetPromptAs(idx_275908);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    if (!idx_275913) goto L_58;
    UBasePromptCoordinator::DismissAllPrompts();
    OnStowFunc(K2Node_CustomEvent_Event);
    return;
}
