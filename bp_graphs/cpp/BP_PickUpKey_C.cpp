// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PickUpKey_C::OnBegin (40 bytes)
void BP_PickUpKey_C::OnBegin()
{
    ExecuteUbergraph_BP_PickUpKey();
    return;
}

// Recovered Kismet: BP_PickUpKey_C::OnTrackedItemPickedUp (22 bytes)
void BP_PickUpKey_C::OnTrackedItemPickedUp()
{
    ExecuteUbergraph_BP_PickUpKey();
    return;
}

// Recovered Kismet: BP_PickUpKey_C::ExecuteUbergraph_BP_PickUpKey (285 bytes)
void BP_PickUpKey_C::ExecuteUbergraph_BP_PickUpKey()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_C9;
L_C9:
    return;
}
