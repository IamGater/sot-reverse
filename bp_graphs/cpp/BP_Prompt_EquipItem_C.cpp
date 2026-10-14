// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EquipItem_C::OnRadialClosedFunc (237 bytes)
void BP_Prompt_EquipItem_C::OnRadialClosedFunc()
{
    if (!this) goto L_BF;
    auto Temp_bool_Variable = State_SubRadialOpened;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = Temp_bool_Variable;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_BA;
    if (!State_SubRadialOpened) goto L_DA;
    bool State_SubRadialOpened = false;
    Evaluate();
L_BA:
L_BF:
    bool State_ItemRadialOpened = false;
    State_SubRadialOpened = false;
L_DA:
    State_ItemRadialOpened = false;
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnRadialOpenedFunc (235 bytes)
void BP_Prompt_EquipItem_C::OnRadialOpenedFunc()
{
    auto Temp_bool_Variable = State_ItemRadialOpened;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = Temp_bool_Variable;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_D3;
    auto CallFunc_Greater_IntInt_ReturnValue = RequiredRadialSubRadialID;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_D8;
    if (!State_ItemRadialOpened) goto L_D8;
    bool State_SubRadialOpened = true;
    Evaluate();
L_D3:
L_D8:
    bool State_ItemRadialOpened = true;
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnStartStowFunc (191 bytes)
void BP_Prompt_EquipItem_C::OnStartStowFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BC;
    bool State_ItemWielded = false;
    Evaluate();
L_BC:
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnItemWieldedFunc (366 bytes)
void BP_Prompt_EquipItem_C::OnItemWieldedFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_ClassIsChildOf_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_ClassIsChildOf_ReturnValue3 = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue3;
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_BooleanOR_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
    auto State_ItemWielded = CallFunc_BooleanAND_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::Evaluate (22 bytes)
void BP_Prompt_EquipItem_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::PostInitialize (22 bytes)
void BP_Prompt_EquipItem_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::UnregisterHandles (22 bytes)
void BP_Prompt_EquipItem_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipItem_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipItem_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnStartStow (40 bytes)
void BP_Prompt_EquipItem_C::OnStartStow()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnRadialOpened (40 bytes)
void BP_Prompt_EquipItem_C::OnRadialOpened()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::OnRadialClosed (40 bytes)
void BP_Prompt_EquipItem_C::OnRadialClosed()
{
    ExecuteUbergraph_BP_Prompt_EquipItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipItem_C::ExecuteUbergraph_BP_Prompt_EquipItem (1118 bytes)
void BP_Prompt_EquipItem_C::ExecuteUbergraph_BP_Prompt_EquipItem()
{
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_219:
    if (!State_ItemRadialOpened) goto L_22C;
L_22C:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_244:
    auto CallFunc_Greater_IntInt_ReturnValue = RequiredRadialSubRadialID;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_219;
    if (!State_ItemRadialOpened) goto L_2A8;
    if (!State_SubRadialOpened) goto L_2D3;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_2A8:
    if (!State_SubRadialOpened) goto L_2BB;
L_2BB:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_2D3:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenSubRadial);
    OnItemWieldedFunc(K2Node_CustomEvent_Event4);
    if (!State_ItemWielded) goto L_244;
    UBasePromptCoordinator::DismissAllPrompts();
    Complete();
    OnStartStowFunc(K2Node_CustomEvent_Event3);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher2);
    OnRadialOpenedFunc(K2Node_CustomEvent_Event2);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher3);
    OnRadialClosedFunc(K2Node_CustomEvent_Event);
    return;
}
