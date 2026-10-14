// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_StarsOfAThief_GrantSpyglass_C::OnBegin (40 bytes)
void BP_StarsOfAThief_GrantSpyglass_C::OnBegin()
{
    ExecuteUbergraph_BP_StarsOfAThief_GrantSpyglass();
    return;
}

// Recovered Kismet: BP_StarsOfAThief_GrantSpyglass_C::ExecuteUbergraph_BP_StarsOfAThief_GrantSpyglass (80 bytes)
void BP_StarsOfAThief_GrantSpyglass_C::ExecuteUbergraph_BP_StarsOfAThief_GrantSpyglass()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::GiveEnchantedSpyglassToAllParticipants(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    return;
}
