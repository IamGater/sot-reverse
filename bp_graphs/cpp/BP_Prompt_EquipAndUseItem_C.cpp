// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnPlayerUseItemFunc (225 bytes)
void BP_Prompt_EquipAndUseItem_C::OnPlayerUseItemFunc()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(this);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = this;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_DE;
    bool State_ItemUsed = true;
    Evaluate();
L_DE:
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnRadialClosedFunc (237 bytes)
void BP_Prompt_EquipAndUseItem_C::OnRadialClosedFunc()
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

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnRadialOpenedFunc (235 bytes)
void BP_Prompt_EquipAndUseItem_C::OnRadialOpenedFunc()
{
    auto Temp_bool_Variable = State_ItemRadialOpened;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = Temp_bool_Variable;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_D3;
    auto CallFunc_Greater_IntInt_ReturnValue = RequiredSubRadialID;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_D8;
    if (!State_ItemRadialOpened) goto L_D8;
    bool State_SubRadialOpened = true;
    Evaluate();
L_D3:
L_D8:
    bool State_ItemRadialOpened = true;
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnStartStowFunc (224 bytes)
void BP_Prompt_EquipAndUseItem_C::OnStartStowFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BA;
    if (!this) goto L_BF;
L_BA:
L_BF:
    bool State_ItemWielded = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnItemWieldedFunc (185 bytes)
void BP_Prompt_EquipAndUseItem_C::OnItemWieldedFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_ItemWielded = CallFunc_ClassIsChildOf_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::EvaluatePromptDisplayState (631 bytes)
void BP_Prompt_EquipAndUseItem_C::EvaluatePromptDisplayState()
{
    if (!State_ItemUsed) goto L_58;
    Complete();
    FPromptEvaluation CallFunc_MakeCompleteCoordinator_ReturnValue = UBasePromptCoordinator::MakeCompleteCoordinator();
L_58:
    if (!State_ItemWielded) goto L_AB;
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue5 = UBasePromptCoordinator::MakeShowPrompt(Prompt_UseItem);
L_AB:
    auto CallFunc_Greater_IntInt_ReturnValue = RequiredSubRadialID;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_13C;
    if (!State_ItemRadialOpened) goto L_1D4;
    if (!State_SubRadialOpened) goto L_22C;
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue6 = UBasePromptCoordinator::MakeShowPrompt(Prompt_EquipItem);
L_13C:
    if (!State_ItemRadialOpened) goto L_18F;
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue2 = UBasePromptCoordinator::MakeShowPrompt(Prompt_EquipItem);
L_18F:
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue4 = UBasePromptCoordinator::MakeShowPrompt(Prompt_OpenRadial);
L_1D4:
    if (!State_SubRadialOpened) goto L_1E7;
L_1E7:
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue = UBasePromptCoordinator::MakeShowPrompt(Prompt_OpenRadial);
L_22C:
    FPromptEvaluation CallFunc_MakeShowPrompt_ReturnValue3 = UBasePromptCoordinator::MakeShowPrompt(Prompt_OpenSubRadial);
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::Evaluate (22 bytes)
void BP_Prompt_EquipAndUseItem_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::PostInitialize (22 bytes)
void BP_Prompt_EquipAndUseItem_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::UnregisterHandles (22 bytes)
void BP_Prompt_EquipAndUseItem_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseItem_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseItem_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnStartStow (40 bytes)
void BP_Prompt_EquipAndUseItem_C::OnStartStow()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnPlayerUseItem (40 bytes)
void BP_Prompt_EquipAndUseItem_C::OnPlayerUseItem()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnRadialOpened (40 bytes)
void BP_Prompt_EquipAndUseItem_C::OnRadialOpened()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::OnRadialClosed (40 bytes)
void BP_Prompt_EquipAndUseItem_C::OnRadialClosed()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItem();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItem_C::ExecuteUbergraph_BP_Prompt_EquipAndUseItem (1022 bytes)
void BP_Prompt_EquipAndUseItem_C::ExecuteUbergraph_BP_Prompt_EquipAndUseItem()
{
    OnRadialClosedFunc(K2Node_CustomEvent_Event);
    OnItemWieldedFunc(K2Node_CustomEvent_Event5);
    UBasePromptCoordinator::UpdateVisiblePrompt();
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    OnStartStowFunc(K2Node_CustomEvent_Event4);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    OnPlayerUseItemFunc(K2Node_CustomEvent_Event3);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher3);
    OnRadialOpenedFunc(K2Node_CustomEvent_Event2);
    return;
}
