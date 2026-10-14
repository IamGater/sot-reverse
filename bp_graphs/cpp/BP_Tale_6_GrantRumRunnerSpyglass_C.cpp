// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Tale_6_GrantRumRunnerSpyglass_C::OnBegin (40 bytes)
void BP_Tale_6_GrantRumRunnerSpyglass_C::OnBegin()
{
    ExecuteUbergraph_BP_Tale_6_GrantRumRunnerSpyglass();
    return;
}

// Recovered Kismet: BP_Tale_6_GrantRumRunnerSpyglass_C::ExecuteUbergraph_BP_Tale_6_GrantRumRunnerSpyglass (80 bytes)
void BP_Tale_6_GrantRumRunnerSpyglass_C::ExecuteUbergraph_BP_Tale_6_GrantRumRunnerSpyglass()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::GiveEnchantedSpyglassToAllParticipants(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    return;
}
