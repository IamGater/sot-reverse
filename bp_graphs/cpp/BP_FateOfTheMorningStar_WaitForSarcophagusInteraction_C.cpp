// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::OnBegin (40 bytes)
void BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::HasBeenInteracted (22 bytes)
void BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::HasBeenInteracted()
{
    ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction (209 bytes)
void BP_FateOfTheMorningStar_WaitForSarcophagusInteraction_C::ExecuteUbergraph_BP_FateOfTheMorningStar_WaitForSarcophagusInteraction()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_Sarcophagus_C* idx_284722 = Cast<BP_Sarcophagus_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_284722);
    if (!K2Node_DynamicCast_bSuccess) goto L_CE;
L_CE:
    return;
}
