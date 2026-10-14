// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::OnPlayerExitedFunc (28 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::OnPlayerExitedFunc()
{
    bool State_WithinRadius = false;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::OnPlayerEnteredFunc (28 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::OnPlayerEnteredFunc()
{
    bool State_WithinRadius = true;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::Evaluate (22 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::RegisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::RegisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::UnregisterCharacterEvents_Implementable (40 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::UnregisterCharacterEvents_Implementable()
{
    ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::OnPlayerExited (22 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::OnPlayerExited()
{
    ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::OnPlayerEntered (22 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::OnPlayerEntered()
{
    ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius();
    return;
}

// Recovered Kismet: BP_Prompt_OncePlayerEntersRadius_C::ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius (576 bytes)
void BP_Prompt_OncePlayerEntersRadius_C::ExecuteUbergraph_BP_Prompt_OncePlayerEntersRadius()
{
    UBasePromptCoordinator::SetPromptAs(Prompt_WithinRadius);
L_22:
    UBasePromptCoordinator::DismissAllPrompts();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(OverlapTrigger);
    if (!CallFunc_IsValid_ReturnValue) goto L_23D;
    if (!State_WithinRadius) goto L_22;
    AOverlapTriggerActor* CallFunc_CreateOverlapTriggerActor_ReturnValue = AOverlapTriggerActor::CreateOverlapTriggerActor(Location, Radius);
    auto OverlapTrigger = CallFunc_CreateOverlapTriggerActor_ReturnValue;
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_K2_GetPawn_ReturnValue = CallFunc_GetPlayerController_ReturnValue->K2_GetPawn();
    IsCharacterInsideRadius(Location, Radius, CallFunc_IsCharacterInsideRadius_Result);
    auto State_WithinRadius = CallFunc_IsCharacterInsideRadius_Result;
    OnPlayerExitedFunc();
    OnPlayerEnteredFunc();
L_23D:
    return;
}
