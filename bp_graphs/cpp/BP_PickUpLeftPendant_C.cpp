// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PickUpLeftPendant_C::OnPendantPickedUp (22 bytes)
void BP_PickUpLeftPendant_C::OnPendantPickedUp()
{
    ExecuteUbergraph_BP_PickUpLeftPendant();
    return;
}

// Recovered Kismet: BP_PickUpLeftPendant_C::OnBegin (40 bytes)
void BP_PickUpLeftPendant_C::OnBegin()
{
    ExecuteUbergraph_BP_PickUpLeftPendant();
    return;
}

// Recovered Kismet: BP_PickUpLeftPendant_C::ExecuteUbergraph_BP_PickUpLeftPendant (214 bytes)
void BP_PickUpLeftPendant_C::ExecuteUbergraph_BP_PickUpLeftPendant()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemInfo* K2Node_DynamicCast_AsItem_Info = Cast<ItemInfo*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Info);
    if (!K2Node_DynamicCast_bSuccess) goto L_D3;
    this->SignalComplete();
L_D3:
    return;
}
