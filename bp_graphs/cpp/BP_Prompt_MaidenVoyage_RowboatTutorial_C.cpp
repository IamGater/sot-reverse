// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEndedFunc (28 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEndedFunc()
{
    bool State_StrokeCompleted = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboatFunc (28 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboatFunc()
{
    bool State_SatInRowboat = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboatFunc (130 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboatFunc()
{
    RowingSeat* K2Node_DynamicCast_AsRowing_Seat = Cast<RowingSeat*>(nullptr);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsRowing_Seat);
    if (!K2Node_DynamicCast_bSuccess) goto L_7F;
    bool State_SatInRowboat = true;
    if (!State_SatInRowboat) goto L_7F;
    Evaluate();
L_7F:
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::ResetState (35 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::ResetState()
{
    UBasePromptCoordinator::DismissAllPrompts();
    bool State_Completed = false;
    bool State_StrokeCompleted = false;
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboat (40 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnSitInRowboat()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboat (40 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnLeaveRowboat()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEnded (40 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::OnStrokeEnded()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_RowboatTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial (1113 bytes)
void BP_Prompt_MaidenVoyage_RowboatTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_RowboatTutorial()
{
    if (!State_SatInRowboat) goto L_7D;
    UBasePromptCoordinator::SetPromptAs(Prompt_Brake);
L_7D:
    ResetState();
    if (!State_SatInRowboat) goto L_12F;
    UBasePromptCoordinator::SetPromptAs(Prompt_OneAtATime);
    UBasePromptCoordinator::DismissAllPrompts();
L_12F:
    ResetState();
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher3);
L_267:
    UBasePromptCoordinator::SetPromptAs(Prompt_RowTheBoat);
    UBasePromptCoordinator::SetPromptAs(Prompt_ReleaseOars);
    if (!State_StrokeCompleted) goto L_267;
    bool State_Completed = true;
L_2FE:
    if (!State_SatInRowboat) goto L_311;
L_311:
    UBasePromptCoordinator::DismissAllPrompts();
    if (!State_Completed) goto L_2FE;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher4);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher5);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher6);
    OnSitInRowboatFunc(K2Node_CustomEvent_Event3);
    OnLeaveRowboatFunc();
    OnStrokeEndedFunc();
    return;
}
