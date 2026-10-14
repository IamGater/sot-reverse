// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PickUpStarJewel_C::OnStarGemPickedUp (22 bytes)
void BP_PickUpStarJewel_C::OnStarGemPickedUp()
{
    ExecuteUbergraph_BP_PickUpStarJewel();
    return;
}

// Recovered Kismet: BP_PickUpStarJewel_C::OnBegin (40 bytes)
void BP_PickUpStarJewel_C::OnBegin()
{
    ExecuteUbergraph_BP_PickUpStarJewel();
    return;
}

// Recovered Kismet: BP_PickUpStarJewel_C::ExecuteUbergraph_BP_PickUpStarJewel (332 bytes)
void BP_PickUpStarJewel_C::ExecuteUbergraph_BP_PickUpStarJewel()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_F8;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
L_F8:
    return;
}
