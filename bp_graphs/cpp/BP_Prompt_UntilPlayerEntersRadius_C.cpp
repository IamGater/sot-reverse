// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerExitFunc (28 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerExitFunc()
{
    bool State_WithinRadius = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerEnterFunc (28 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerEnterFunc()
{
    bool State_WithinRadius = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::Evaluate (22 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerExit (22 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerExit()
{
    ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerEnter (22 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::OnPlayerEnter()
{
    ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_UntilPlayerEntersRadius_C::ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius (624 bytes)
void BP_Prompt_UntilPlayerEntersRadius_C::ExecuteUbergraph_BP_Prompt_UntilPlayerEntersRadius()
{
    Complete();
L_1D:
    UBasePromptCoordinator::SetPromptAs(Prompt_GoToLocation);
    UBasePromptCoordinator::DismissAllPrompts();
    if (!DoNotCompleteOnEnter) goto L_77;
L_77:
    UBasePromptCoordinator::Uninitialize();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(OverlapTrigger);
    if (!CallFunc_IsValid_ReturnValue) goto L_26D;
    if (!State_WithinRadius) goto L_1D;
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(Location, Radius);
    auto OverlapTrigger = CallFunc_CreateOverlapTriggerActor_ReturnValue;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    IsCharacterInsideRadius(Location, Radius, CallFunc_IsCharacterInsideRadius_Result);
    auto State_WithinRadius = CallFunc_IsCharacterInsideRadius_Result;
    OnPlayerExitFunc();
    OnPlayerEnterFunc();
L_26D:
    return;
}
