// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_FlameheartSkullPickup_C::OnBegin (40 bytes)
void BP_TheAshenDragon_FlameheartSkullPickup_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_FlameheartSkullPickup();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_FlameheartSkullPickup_C::On item PIckup (22 bytes)
void BP_TheAshenDragon_FlameheartSkullPickup_C::On item PIckup()
{
    ExecuteUbergraph_BP_TheAshenDragon_FlameheartSkullPickup();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_FlameheartSkullPickup_C::ExecuteUbergraph_BP_TheAshenDragon_FlameheartSkullPickup (199 bytes)
void BP_TheAshenDragon_FlameheartSkullPickup_C::ExecuteUbergraph_BP_TheAshenDragon_FlameheartSkullPickup()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* idx_281697 = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281697);
    if (!K2Node_DynamicCast_bSuccess) goto L_C4;
L_C4:
    return;
}
