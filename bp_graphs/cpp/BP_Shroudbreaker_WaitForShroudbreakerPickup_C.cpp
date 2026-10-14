// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Shroudbreaker_WaitForShroudbreakerPickup_C::OnItemPickedUp_Copy (22 bytes)
void BP_Shroudbreaker_WaitForShroudbreakerPickup_C::OnItemPickedUp_Copy()
{
    ExecuteUbergraph_BP_Shroudbreaker_WaitForShroudbreakerPickup();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_WaitForShroudbreakerPickup_C::OnBegin (40 bytes)
void BP_Shroudbreaker_WaitForShroudbreakerPickup_C::OnBegin()
{
    ExecuteUbergraph_BP_Shroudbreaker_WaitForShroudbreakerPickup();
    return;
}

// Recovered Kismet: BP_Shroudbreaker_WaitForShroudbreakerPickup_C::ExecuteUbergraph_BP_Shroudbreaker_WaitForShroudbreakerPickup (209 bytes)
void BP_Shroudbreaker_WaitForShroudbreakerPickup_C::ExecuteUbergraph_BP_Shroudbreaker_WaitForShroudbreakerPickup()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_CE;
    this->SignalComplete();
L_CE:
    return;
}
