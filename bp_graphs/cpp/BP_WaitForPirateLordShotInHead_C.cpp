// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForPirateLordShotInHead_C::OnBegin (40 bytes)
void BP_WaitForPirateLordShotInHead_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForPirateLordShotInHead();
    return;
}

// Recovered Kismet: BP_WaitForPirateLordShotInHead_C::PirateLordDamaged (22 bytes)
void BP_WaitForPirateLordShotInHead_C::PirateLordDamaged()
{
    ExecuteUbergraph_BP_WaitForPirateLordShotInHead();
    return;
}

// Recovered Kismet: BP_WaitForPirateLordShotInHead_C::ExecuteUbergraph_BP_WaitForPirateLordShotInHead (312 bytes)
void BP_WaitForPirateLordShotInHead_C::ExecuteUbergraph_BP_WaitForPirateLordShotInHead()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PirateLord_MaidenVoyage_Beach_C* idx_283322 = Cast<BP_PirateLord_MaidenVoyage_Beach_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283322);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->SignalComplete();
    return;
}
