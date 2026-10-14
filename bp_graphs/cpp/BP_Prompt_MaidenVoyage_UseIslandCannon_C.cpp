// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFiredFunc (116 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFiredFunc()
{
    BP_IslandCannon_FateOfTheMorningStar_C* K2Node_DynamicCast_AsBP_Island_Cannon_Fate_Of_the_Morning_Star = Cast<BP_IslandCannon_FateOfTheMorningStar_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Island_Cannon_Fate_Of_the_Morning_Star);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_CannonFired = true;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannonFunc (28 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannonFunc()
{
    bool State_LoadCannon = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannonFunc (116 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannonFunc()
{
    BP_Cannon_C* K2Node_DynamicCast_AsBP_Cannon = Cast<BP_Cannon_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Cannon);
    if (!K2Node_DynamicCast_bSuccess) goto L_71;
    bool State_UseCannon = false;
    Evaluate();
L_71:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannonFunc (130 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannonFunc()
{
    BP_IslandCannon_FateOfTheMorningStar_C* K2Node_DynamicCast_AsBP_Island_Cannon_Fate_Of_the_Morning_Star = Cast<BP_IslandCannon_FateOfTheMorningStar_C*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Island_Cannon_Fate_Of_the_Morning_Star);
    if (!K2Node_DynamicCast_bSuccess) goto L_7F;
    bool State_UseCannon = true;
    if (!State_UseCannon) goto L_7F;
    Evaluate();
L_7F:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWieldFunc (191 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWieldFunc()
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

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterHandles (22 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterHandles()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWield (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnWield()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFired (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnCannonFired()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLoadCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnDockWithCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannon (40 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::OnLeaveCannon()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_UseIslandCannon_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon (1388 bytes)
void BP_Prompt_MaidenVoyage_UseIslandCannon_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_UseIslandCannon()
{
    bool DisplayedAimPrompt = true;
    bool BlockEvaluation = false;
    if (!State_CannonFired) goto L_3E;
    UBasePromptCoordinator::DismissAllPrompts();
L_3E:
    UBasePromptCoordinator::SetPromptAs(Prompt_FireCannon);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher5);
    if (!State_UseCannon) goto L_1FA;
    if (!BlockEvaluation) goto L_205;
L_1FA:
    UBasePromptCoordinator::DismissAllPrompts();
L_205:
    if (!State_CannonFired) goto L_21E;
    UBasePromptCoordinator::DismissAllPrompts();
L_21E:
    if (!State_LoadCannon) goto L_2AA;
    if (!DisplayedAimPrompt) goto L_23F;
L_23F:
    BlockEvaluation = true;
    UBasePromptCoordinator::SetPromptAs(Prompt_AimCannon);
L_2AA:
    if (!State_BallsInInventory) goto L_2CC;
    UBasePromptCoordinator::SetPromptAs(Prompt_LoadCannon);
L_2CC:
    UBasePromptCoordinator::SetPromptAs(Prompt_GetBalls);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher9);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher7);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher8);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    OnWieldFunc(K2Node_CustomEvent_Event5);
    OnCannonFiredFunc(K2Node_CustomEvent_Event4);
    OnLoadCannonFunc();
    OnDockWithCannonFunc(K2Node_CustomEvent_Event2);
    OnLeaveCannonFunc(K2Node_CustomEvent_Event);
    return;
}
