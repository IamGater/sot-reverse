// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnStartStowFunc (191 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnStartStowFunc()
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

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnObjectWieldedFunc (185 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnObjectWieldedFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_ItemWielded = CallFunc_ClassIsChildOf_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnPlayerEnterFunc (28 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnPlayerEnterFunc()
{
    bool State_WithinRadius = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnPlayerExitFunc (28 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnPlayerExitFunc()
{
    bool State_WithinRadius = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnPlayerStartedDigging (140 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnPlayerStartedDigging()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(this);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_89;
    bool State_ItemDugUp = true;
    Evaluate();
L_89:
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnRadialClosedFunc (89 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnRadialClosedFunc()
{
    auto CallFunc_EqualEqual_IntInt_ReturnValue = RequiredRadialID;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_56;
    bool State_ItemRadialOpened = false;
    Evaluate();
L_56:
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnRadialOpenedFunc (89 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnRadialOpenedFunc()
{
    auto CallFunc_EqualEqual_IntInt_ReturnValue = RequiredRadialID;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_56;
    bool State_ItemRadialOpened = true;
    Evaluate();
L_56:
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::SetInitialItemWieldState (394 bytes)
void BP_Prompt_DigWhilstInRadius_C::SetInitialItemWieldState()
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

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::Evaluate (22 bytes)
void BP_Prompt_DigWhilstInRadius_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::PostInitialize (22 bytes)
void BP_Prompt_DigWhilstInRadius_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::UnregisterHandles (22 bytes)
void BP_Prompt_DigWhilstInRadius_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnObjectWeilded (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnObjectWeilded()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnStartStow (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnStartStow()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnRadialOpened (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnRadialOpened()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnRadialClosed (40 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnRadialClosed()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnPlayerExit (22 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnPlayerExit()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::OnPlayerEnter (22 bytes)
void BP_Prompt_DigWhilstInRadius_C::OnPlayerEnter()
{
    ExecuteUbergraph_BP_Prompt_DigWhilstInRadius();
    return;
}

// Recovered Kismet: BP_Prompt_DigWhilstInRadius_C::ExecuteUbergraph_BP_Prompt_DigWhilstInRadius (1669 bytes)
void BP_Prompt_DigWhilstInRadius_C::ExecuteUbergraph_BP_Prompt_DigWhilstInRadius()
{
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(Location, Radius);
    auto OverlapTrigger = CallFunc_CreateOverlapTriggerActor_ReturnValue;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    if (!State_WithinRadius) goto L_306;
    if (!State_ItemDugUp) goto L_31A;
    UBasePromptCoordinator::DismissAllPrompts();
    UninitializeImplementable();
    Complete();
L_306:
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToLocation);
L_31A:
    if (!State_ItemWielded) goto L_33C;
    UBasePromptCoordinator::SetPromptAs(Prompt_UseItem);
L_33C:
    if (!State_ItemRadialOpened) goto L_35E;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipItem);
L_35E:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(OverlapTrigger);
    IsCharacterInsideRadius(Location, Radius, CallFunc_IsCharacterInsideRadius_Result);
    auto State_WithinRadius = CallFunc_IsCharacterInsideRadius_Result;
    SetInitialItemWieldState();
    OnObjectWieldedFunc(K2Node_CustomEvent_Event5);
    OnStartStowFunc(K2Node_CustomEvent_Event4);
    OnPlayerStartedDigging(K2Node_CustomEvent_Event3);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    OnRadialOpenedFunc(K2Node_CustomEvent_Event2);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher3);
    OnRadialClosedFunc(K2Node_CustomEvent_Event);
    OnPlayerEnterFunc();
    OnPlayerExitFunc();
    return;
}
