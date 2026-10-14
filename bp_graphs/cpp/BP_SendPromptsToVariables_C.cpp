// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SendPromptsToVariables_C::OnBegin (40 bytes)
void BP_SendPromptsToVariables_C::OnBegin()
{
    ExecuteUbergraph_BP_SendPromptsToVariables();
    return;
}

// Recovered Kismet: BP_SendPromptsToVariables_C::ExecuteUbergraph_BP_SendPromptsToVariables (80 bytes)
void BP_SendPromptsToVariables_C::ExecuteUbergraph_BP_SendPromptsToVariables()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    return;
}
