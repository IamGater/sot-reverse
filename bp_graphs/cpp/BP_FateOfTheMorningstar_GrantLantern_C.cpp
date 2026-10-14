// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_GrantLantern_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_GrantLantern_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_GrantLantern();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_GrantLantern_C::ExecuteUbergraph_BP_FateOfTheMorningstar_GrantLantern (80 bytes)
void BP_FateOfTheMorningstar_GrantLantern_C::ExecuteUbergraph_BP_FateOfTheMorningstar_GrantLantern()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::GiveLanternToAllParticipants(CallFunc_GetVariables_OutStruct);
    return;
}
