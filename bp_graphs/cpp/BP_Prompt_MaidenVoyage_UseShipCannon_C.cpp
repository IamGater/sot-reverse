// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnCannonFiredFunc (28 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnCannonFiredFunc()
{
    bool State_CannonFired = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLoadCannonFunc (28 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLoadCannonFunc()
{
    bool State_LoadCannon = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLeaveCannonFunc (116 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLeaveCannonFunc()
{
    BP_Cannon_C* K2Node_DynamicCast_AsBP_Cannon = Cast<BP_Cannon_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Cannon);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_UseCannon = false;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnDockWithCannonFunc (116 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnDockWithCannonFunc()
{
    BP_Cannon_C* K2Node_DynamicCast_AsBP_Cannon = Cast<BP_Cannon_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Cannon);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_UseCannon = true;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnWieldFunc (191 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BC;
    bool State_BallsInInventory = true;
    Evaluate();
L_BC:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::SetShouldDisplayPrompts (36 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::SetShouldDisplayPrompts()
{
    auto ShouldDisplayPrompts = InShouldDisplayPrompts;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::UnregisterHandles (22 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnWield (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnWield()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnCannonFired (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnCannonFired()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnDockWithCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnDockWithCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLoadCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLoadCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLeaveCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::OnLeaveCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseShipCannon_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon (1490 bytes)
void BP_Prompt_MaidenVoyage_UseShipCannon_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseShipCannon()
{
    bool DisplayedAimPrompt = true;
    bool BlockEvaluation = false;
    if (!State_CannonFired) goto L_3E;
    UBasePromptCoordinator::DismissAllPrompts();
L_3E:
    if (!State_UseCannon) goto L_60;
    UBasePromptCoordinator::SetPromptAs(Prompt_FireCannon);
L_60:
    UBasePromptCoordinator::SetPromptAs(Prompt_UseCannon);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher5);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    if (!BlockEvaluation) goto L_20E;
L_20E:
    if (!ShouldDisplayPrompts) goto L_235;
    if (!State_CannonFired) goto L_240;
    UBasePromptCoordinator::DismissAllPrompts();
L_235:
    UBasePromptCoordinator::DismissAllPrompts();
L_240:
    auto CallFunc_BooleanAND_ReturnValue = State_LoadCannon;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_2F2;
    if (!DisplayedAimPrompt) goto L_287;
L_287:
    BlockEvaluation = true;
    UBasePromptCoordinator::SetPromptAs(Prompt_AimCannon);
L_2F2:
    if (!State_UseCannon) goto L_314;
    UBasePromptCoordinator::SetPromptAs(Prompt_LoadCannon);
L_314:
    if (!State_BallsInInventory) goto L_336;
    UBasePromptCoordinator::SetPromptAs(Prompt_UseCannon);
L_336:
    UBasePromptCoordinator::SetPromptAs(Prompt_GetBalls);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher7);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher8);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher9);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    OnWieldFunc(K2Node_CustomEvent_Event5);
    OnCannonFiredFunc();
    OnDockWithCannonFunc(K2Node_CustomEvent_Event3);
    OnLoadCannonFunc();
    OnLeaveCannonFunc(K2Node_CustomEvent_Event);
    return;
}
