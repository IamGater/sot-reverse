// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_TimedPrompt_C::Evaluate (22 bytes)
void BP_Prompt_TimedPrompt_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_TimedPrompt();
    return;
}

// Recovered Kismet: BP_Prompt_TimedPrompt_C::PostInitialize (22 bytes)
void BP_Prompt_TimedPrompt_C::PostInitialize()
{
    ExecuteUbergraph_BP_Prompt_TimedPrompt();
    return;
}

// Recovered Kismet: BP_Prompt_TimedPrompt_C::ExecuteUbergraph_BP_Prompt_TimedPrompt (214 bytes)
void BP_Prompt_TimedPrompt_C::ExecuteUbergraph_BP_Prompt_TimedPrompt()
{
L_F:
    UBasePromptCoordinator::DismissAllPrompts();
    Complete();
    bool State_ShowPrompt = false;
    Evaluate();
    State_ShowPrompt = true;
    Evaluate();
    if (!State_ShowPrompt) goto L_F;
    UBasePromptCoordinator::SetPromptAs(Prompt);
    return;
}
