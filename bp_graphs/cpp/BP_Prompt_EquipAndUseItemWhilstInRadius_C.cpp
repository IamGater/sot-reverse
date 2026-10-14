// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerUseItemFunc (225 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerUseItemFunc()
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

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialClosedFunc (237 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialClosedFunc()
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

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialOpenedFunc (235 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialOpenedFunc()
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

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerEnterFunc (28 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerEnterFunc()
{
    bool State_WithinRadius = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerExitFunc (28 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerExitFunc()
{
    bool State_WithinRadius = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnStartStowFunc (191 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnStartStowFunc()
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

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnItemWieldedFunc (185 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnItemWieldedFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_ItemWielded = CallFunc_ClassIsChildOf_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::SetInitialWieldState (394 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::SetInitialWieldState()
{
    APawn* CallFunc_K2_GetPawn_ReturnValue = PlayerController->K2_GetPawn();
    TScriptInterface<UWieldedItemInterface> UniqueObjectNameForCooking_AsWielded_Item_Interface = TScriptInterface<UWieldedItemInterface>(CallFunc_K2_GetPawn_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsWielded_Item_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_16F;
    auto CallFunc_GetWieldedItem_ReturnValue = UniqueObjectNameForCooking_AsWielded_Item_Interface->GetWieldedItem();
    auto Temp_interface_Variable = CallFunc_GetWieldedItem_ReturnValue;
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(Temp_interface_Variable);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_ItemWielded = CallFunc_ClassIsChildOf_ReturnValue;
L_16F:
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::Evaluate (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::PostInitialize (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::UnregisterHandles (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::Uninitialize_Implementable (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::Uninitialize_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnStartStow (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnStartStow()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerUseItem (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerUseItem()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialOpened (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialOpened()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialClosed (40 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnRadialClosed()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerExit (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerExit()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerEnter (22 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::OnPlayerEnter()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseItemWhilstInRadius_C::ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius (1918 bytes)
void BP_Prompt_EquipAndUseItemWhilstInRadius_C::ExecuteUbergraph_BP_Prompt_EquipAndUseItemWhilstInRadius()
{
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(Location, Radius);
    auto OverlapTrigger = CallFunc_CreateOverlapTriggerActor_ReturnValue;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher3);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    SetInitialWieldState();
    if (!State_WithinRadius) goto L_381;
    if (!State_ItemUsed) goto L_399;
    UBasePromptCoordinator::DismissAllPrompts();
    UninitializeImplementable();
    Complete();
L_381:
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToLocation);
L_399:
    if (!State_ItemWielded) goto L_3BF;
    UBasePromptCoordinator::SetPromptAs(Prompt_UseItem);
L_3BF:
    auto CallFunc_Greater_IntInt_ReturnValue = RequiredRadialSubRadialID;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_44E;
    if (!State_ItemRadialOpened) goto L_423;
    if (!State_SubRadialOpened) goto L_48C;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_423:
    if (!State_SubRadialOpened) goto L_436;
L_436:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_44E:
    if (!State_ItemRadialOpened) goto L_474;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_474:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_48C:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenSubRadial);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(OverlapTrigger);
    if (!CallFunc_IsValid_ReturnValue) goto L_77B;
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    IsCharacterInsideRadius(Location, Radius, CallFunc_IsCharacterInsideRadius_Result);
    auto State_WithinRadius = CallFunc_IsCharacterInsideRadius_Result;
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    OnItemWieldedFunc(K2Node_CustomEvent_Event5);
    OnStartStowFunc(K2Node_CustomEvent_Event4);
    OnPlayerUseItemFunc(K2Node_CustomEvent_Event3);
    OnRadialOpenedFunc(K2Node_CustomEvent_Event2);
    OnRadialClosedFunc(K2Node_CustomEvent_Event);
    OnPlayerEnterFunc();
    OnPlayerExitFunc();
L_77B:
    return;
}
