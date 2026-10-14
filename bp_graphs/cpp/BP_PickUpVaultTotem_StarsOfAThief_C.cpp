// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PickUpVaultTotem_StarsOfAThief_C::OnBegin (40 bytes)
void BP_PickUpVaultTotem_StarsOfAThief_C::OnBegin()
{
    ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief();
    return;
}

// Recovered Kismet: BP_PickUpVaultTotem_StarsOfAThief_C::OnItemPickedUp (22 bytes)
void BP_PickUpVaultTotem_StarsOfAThief_C::OnItemPickedUp()
{
    ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief();
    return;
}

// Recovered Kismet: BP_PickUpVaultTotem_StarsOfAThief_C::ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief (251 bytes)
void BP_PickUpVaultTotem_StarsOfAThief_C::ExecuteUbergraph_BP_PickUpVaultTotem_StarsOfAThief()
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
