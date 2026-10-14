// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerExitFunc (52 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerExitFunc()
{
    if (!State_SpeakToPirateLord) goto L_13;
L_13:
    bool State_WithinRadius = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerEnterFunc (52 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerEnterFunc()
{
    if (!State_SpeakToPirateLord) goto L_13;
L_13:
    bool State_WithinRadius = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::StopPrompts (28 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::StopPrompts()
{
    bool State_SpeakToPirateLord = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::Evaluate (22 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::PostInitialize (22 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::UninitializeImplementable (22 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::UninitializeImplementable()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerExit (22 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerExit()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerEnter (22 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::OnPlayerEnter()
{
    ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady();
    return;
}

// Recovered Kismet: BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady (719 bytes)
void BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady_C::ExecuteUbergraph_BP_Prompt_MaidenVoyage_ReturnToPirateLordWhenReady()
{
    if (!State_SpeakToPirateLord) goto L_28;
    UBasePromptCoordinator::DismissAllPrompts();
L_28:
    if (!State_WithinRadius) goto L_37;
L_37:
    UBasePromptCoordinator::SetPromptAs(Prompt_TalkToPirateLord);
L_97:
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(OverlapTrigger);
L_151:
    if (!State_WithinRadius) goto L_97;
    UBasePromptCoordinator::SetPromptAs(Prompt_TalkToPirateLord);
    if (!State_SpeakToPirateLord) goto L_151;
    OnPlayerExitFunc();
    OnPlayerEnterFunc();
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(Location, Radius);
    auto OverlapTrigger = CallFunc_CreateOverlapTriggerActor_ReturnValue;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    return;
}
