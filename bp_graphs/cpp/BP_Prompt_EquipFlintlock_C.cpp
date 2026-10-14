// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnStowFunc (224 bytes)
void BP_Prompt_EquipFlintlock_C::OnStowFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BA;
    if (!this) goto L_BF;
L_BA:
L_BF:
    bool State_SwordWielded = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnSwordWieldFunc (191 bytes)
void BP_Prompt_EquipFlintlock_C::OnSwordWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BC;
    bool State_SwordWielded = true;
    Evaluate();
L_BC:
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnWieldFunc (191 bytes)
void BP_Prompt_EquipFlintlock_C::OnWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BC;
    bool State_ItemWielded = true;
    Evaluate();
L_BC:
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::Evaluate (22 bytes)
void BP_Prompt_EquipFlintlock_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipFlintlock_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipFlintlock_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnWield (40 bytes)
void BP_Prompt_EquipFlintlock_C::OnWield()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnStow (40 bytes)
void BP_Prompt_EquipFlintlock_C::OnStow()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::OnSwordWield (40 bytes)
void BP_Prompt_EquipFlintlock_C::OnSwordWield()
{
    ExecuteUbergraph_BP_Prompt_EquipFlintlock();
    return;
}

// Recovered Kismet: BP_Prompt_EquipFlintlock_C::ExecuteUbergraph_BP_Prompt_EquipFlintlock (702 bytes)
void BP_Prompt_EquipFlintlock_C::ExecuteUbergraph_BP_Prompt_EquipFlintlock()
{
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    if (!State_ItemWielded) goto L_10C;
    UBasePromptCoordinator::DismissAllPrompts();
L_10C:
    if (!State_SwordWielded) goto L_132;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_132:
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipWeapon);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    OnWieldFunc(K2Node_CustomEvent_Event3);
    OnStowFunc(K2Node_CustomEvent_Event2);
    OnSwordWieldFunc(K2Node_CustomEvent_Event);
    return;
}
