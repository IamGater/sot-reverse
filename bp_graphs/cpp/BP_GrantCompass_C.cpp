// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_GrantCompass_C::OnBegin (40 bytes)
void BP_GrantCompass_C::OnBegin()
{
    ExecuteUbergraph_BP_GrantCompass();
    return;
}

// Recovered Kismet: BP_GrantCompass_C::ExecuteUbergraph_BP_GrantCompass (80 bytes)
void BP_GrantCompass_C::ExecuteUbergraph_BP_GrantCompass()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::GiveCompassToAllParticipants(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    return;
}
