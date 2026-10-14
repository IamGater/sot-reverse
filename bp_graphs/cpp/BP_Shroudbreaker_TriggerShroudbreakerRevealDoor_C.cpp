// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_TriggerShroudbreakerRevealDoor_C::OnBegin (40 bytes)
void BP_Shroudbreaker_TriggerShroudbreakerRevealDoor_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_TriggerShroudbreakerRevealDoor();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_TriggerShroudbreakerRevealDoor_C::ExecuteUbergraph_BP_Shroudbreaker_TriggerShroudbreakerRevealDoor (177 bytes)
void BP_Shroudbreaker_TriggerShroudbreakerRevealDoor_C::ExecuteUbergraph_BP_Shroudbreaker_TriggerShroudbreakerRevealDoor()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PuzzleVault_C* K2Node_DynamicCast_AsBP_Puzzle_Vault = Cast<BP_PuzzleVault_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Puzzle_Vault);
    if (!K2Node_DynamicCast_bSuccess) goto L_AE;
L_AE:
    return;
}
