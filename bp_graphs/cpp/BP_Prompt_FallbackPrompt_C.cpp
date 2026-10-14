// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prompt_FallbackPrompt_C::SetCollectionStatus (44 bytes)
void BP_Prompt_FallbackPrompt_C::SetCollectionStatus()
{
    auto idx_276252 = NewParam;
    Evaluate();
    return;
}

// Recovered Kismet: BP_Prompt_FallbackPrompt_C::Evaluate (22 bytes)
void BP_Prompt_FallbackPrompt_C::Evaluate()
{
    ExecuteUbergraph_BP_Prompt_FallbackPrompt();
    return;
}

// Recovered Kismet: BP_Prompt_FallbackPrompt_C::ExecuteUbergraph_BP_Prompt_FallbackPrompt (82 bytes)
void BP_Prompt_FallbackPrompt_C::ExecuteUbergraph_BP_Prompt_FallbackPrompt()
{
L_A:
    UBasePromptCoordinator::SetPromptAs(idx_276257);
    auto K2Node_SwitchEnum_CmpSuccess = idx_276252;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_A;
    return;
}
