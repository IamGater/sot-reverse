// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::FullStateReset (42 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::FullStateReset()
{
    bool State_RodWielded = false;
    ResetPromptState();
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishEscapingFunc (31 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishEscapingFunc()
{
    ResetPromptState();
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnBattleWhilstReelingFunc (45 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnBattleWhilstReelingFunc()
{
    auto State_ReelingWhileBattling = this;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishCaughtFunc (28 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishCaughtFunc()
{
    bool State_CaughtFish = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishTiredFunc (39 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishTiredFunc()
{
    bool State_FishTired = true;
    bool State_FishBattling = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishBiteFunc (50 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishBiteFunc()
{
    bool State_FishBattling = true;
    bool State_FishTired = false;
    bool FishStartedBattling = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnCastRodFunc (76 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnCastRodFunc()
{
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = this;
    auto State_CastRod = CallFunc_EqualEqual_ByteByte_ReturnValue;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnStowFunc (238 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnStowFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    if (!CallFunc_ClassIsChildOf_ReturnValue) goto L_BA;
    if (!this) goto L_BF;
L_BA:
L_BF:
    bool State_RodWielded = false;
    ResetPromptState();
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnWieldFunc (223 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnWieldFunc()
{
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(this);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto State_RodWielded = CallFunc_ClassIsChildOf_ReturnValue;
    if (!State_RodWielded) goto L_C9;
    Evaluate();
L_C9:
    ResetPromptState();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::ResetPromptState (58 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::ResetPromptState()
{
    bool State_FishTired = false;
    bool State_FishBattling = false;
    bool FishStartedBattling = false;
    bool State_CastRod = false;
    bool State_ReelingWhileBattling = false;
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::UnregisterOtherEvents_Implementable (22 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::UnregisterOtherEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnWield (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnWield()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishTired (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishTired()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnCastRod (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnCastRod()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishCaught (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishCaught()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishBite (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishBite()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnBattleWhilstReeling (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnBattleWhilstReeling()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnStow (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnStow()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishEscaping (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnFishEscaping()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnTakeControl (40 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::OnTakeControl()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_FishingRodTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial (2207 bytes)
void BP_Prompt_MaidenVoyage_FishingRodTutorial_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_FishingRodTutorial()
{
    UBasePromptCoordinator::SetPromptAs(Prompt_SnapLine);
L_2D:
    if (!State_CastRod) goto L_4F;
    UBasePromptCoordinator::SetPromptAs(Prompt_WaitForBite);
L_4F:
    UBasePromptCoordinator::SetPromptAs(Prompt_CastRod);
    UBasePromptCoordinator::DismissAllPrompts();
    UBasePromptCoordinator::SetPromptAs(Prompt_BattleFish);
    if (!State_CaughtFish) goto L_CA;
    bool State_Completed = true;
L_CA:
    if (!State_ReelingWhileBattling) goto L_125;
L_125:
    auto CallFunc_BooleanAND_ReturnValue = State_FishTired;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_16D;
    UBasePromptCoordinator::SetPromptAs(Prompt_ReelFish);
L_16D:
    if (!State_FishBattling) goto L_2D;
L_180:
    if (!State_RodWielded) goto L_193;
L_193:
    UBasePromptCoordinator::DismissAllPrompts();
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher8);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher10);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher12);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher13);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher9);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher11);
    FullStateReset();
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher14);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher2);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher3);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher4);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher5);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher6);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher7);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher15);
    GetCharacterObjectMessageDispatcher(CallFunc_GetCharacterObjectMessageDispatcher_Player_Dispatcher15);
    if (!State_Completed) goto L_180;
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher);
    GetControllerObjectMessageDispatcher(CallFunc_GetControllerObjectMessageDispatcher_Player_Dispatcher2);
    OnWieldFunc(K2Node_CustomEvent_Event8);
    OnFishTiredFunc();
    OnCastRodFunc(K2Node_CustomEvent_Event6);
    OnFishCaughtFunc();
    OnFishBiteFunc();
    OnBattleWhilstReelingFunc(K2Node_CustomEvent_Event3);
    OnStowFunc(K2Node_CustomEvent_Event2);
    OnFishEscapingFunc();
    Evaluate();
    bool State_RodWielded = false;
    return;
}
