// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_UseSword_C::OnStowFunc (224 bytes)
void BP_Prompt_UseSword_C::OnStowFunc()
{
    if (!this) goto L_1C;
L_17:
L_1C:
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_17;
    bool idx_275913 = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::OnWieldFunc (214 bytes)
void BP_Prompt_UseSword_C::OnWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
    auto idx_275913 = CallFunc_Not_PreBool_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::Evaluate (22 bytes)
void BP_Prompt_UseSword_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_UseSword();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::UnregisterHandles (22 bytes)
void BP_Prompt_UseSword_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_UseSword();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::PostInitialize (22 bytes)
void BP_Prompt_UseSword_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_UseSword();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::OnWield (40 bytes)
void BP_Prompt_UseSword_C::OnWield()
{
    ExecuteUbergraph_BP_Prompt_UseSword();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::OnStow (40 bytes)
void BP_Prompt_UseSword_C::OnStow()
{
    ExecuteUbergraph_BP_Prompt_UseSword();
    return;
}

// Recovered Kismet: BP_Prompt_UseSword_C::ExecuteUbergraph_BP_Prompt_UseSword (504 bytes)
void BP_Prompt_UseSword_C::ExecuteUbergraph_BP_Prompt_UseSword()
{
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
L_15D:
    UBasePromptCoordinator::SetPromptAs(idx_275561);
    OnWieldFunc(K2Node_CustomEvent_Event2);
L_191:
    if (!idx_275913) goto L_15D;
    UBasePromptCoordinator::SetPromptAs(idx_275559);
    if (!idx_275574) goto L_191;
    UBasePromptCoordinator::DismissAllPrompts();
    OnStowFunc(K2Node_CustomEvent_Event);
    return;
}
