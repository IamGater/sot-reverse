// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnPlayerDiedFunc (28 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnPlayerDiedFunc()
{
    bool PlayerDied = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::SetShouldDisplayPrompts (36 bytes)
void BP_Prompt_EquipAndUseBanana_C::SetShouldDisplayPrompts()
{
    auto ShouldDisplayPrompts = InShouldDisplayPrompts;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::Start (22 bytes)
void BP_Prompt_EquipAndUseBanana_C::Start()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::Evaluate (22 bytes)
void BP_Prompt_EquipAndUseBanana_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnWielded (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnWielded()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnBananaUsed (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnBananaUsed()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnRadialOpen (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnRadialOpen()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnCloseRadial (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnCloseRadial()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::EventStartStow (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::EventStartStow()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::OnPlayerDied (40 bytes)
void BP_Prompt_EquipAndUseBanana_C::OnPlayerDied()
{
    ExecuteUbergraph_BP_Prompt_EquipAndUseBanana();
    return;
}

// Recovered Kismet: BP_Prompt_EquipAndUseBanana_C::ExecuteUbergraph_BP_Prompt_EquipAndUseBanana (1537 bytes)
void BP_Prompt_EquipAndUseBanana_C::ExecuteUbergraph_BP_Prompt_EquipAndUseBanana()
{
L_A:
    if (!EquipmentRadialOpen) goto L_30;
    UBasePromptCoordinator::SetPromptAs(Prompt_EquipBanana);
L_30:
    UBasePromptCoordinator::SetPromptAs(Prompt_OpenRadial);
L_48:
    if (!BananaWielded) goto L_A;
    UBasePromptCoordinator::SetPromptAs(Prompt);
    if (!ShouldDisplayPrompts) goto L_99;
    if (!PlayerDied) goto L_A8;
    UBasePromptCoordinator::DismissAllPrompts();
L_99:
    UBasePromptCoordinator::DismissAllPrompts();
L_A8:
    if (!BananaEaten) goto L_48;
    UBasePromptCoordinator::DismissAllPrompts();
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    this->Start();
    AHUD* CallFunc_GetHUD_ReturnValue = PlayerController->GetHUD();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetHUD_ReturnValue);
    GetHUDObjectMessageDispatcher(CallFunc_GetHUDObjectMessageDispatcher_HUD_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    Evaluate();
    bool BananaWielded = true;
    auto K2Node_DynamicCast_AsWieldable_Ingestible = K2Node_CustomEvent_Event6;
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Ingestible);
    if (!K2Node_DynamicCast_bSuccess) goto L_5FE;
    Evaluate();
    bool BananaEaten = true;
    Evaluate();
    auto CallFunc_EqualEqual_IntInt_ReturnValue = RequiredRadialID;
    auto EquipmentRadialOpen = CallFunc_EqualEqual_IntInt_ReturnValue;
    EquipmentRadialOpen = false;
    Evaluate();
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = RequiredRadialID;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue2) goto L_5FE;
    Evaluate();
L_562:
    BananaWielded = false;
    auto K2Node_DynamicCast_AsWieldable_Ingestible2 = K2Node_CustomEvent_Event2;
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Ingestible2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_5FE;
    if (!K2Node_CustomEvent_Event2) goto L_562;
    OnPlayerDiedFunc();
L_5FE:
    return;
}
