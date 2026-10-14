// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Tale_6_OpenVaultDoor_C::OnBegin (40 bytes)
void BP_Tale_6_OpenVaultDoor_C::OnBegin()
{
    ExecuteUbergraph_BP_Tale_6_OpenVaultDoor();
    return;
}

// Recovered Kismet: BP_Tale_6_OpenVaultDoor_C::ExecuteUbergraph_BP_Tale_6_OpenVaultDoor (172 bytes)
void BP_Tale_6_OpenVaultDoor_C::ExecuteUbergraph_BP_Tale_6_OpenVaultDoor()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    PuzzleVault* K2Node_DynamicCast_AsPuzzle_Vault = Cast<PuzzleVault*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsPuzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_A9;
    this->SignalComplete();
L_A9:
    return;
}
