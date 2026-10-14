// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnBegin (40 bytes)
void BP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnItemPickedUp (22 bytes)
void BP_SpawnGoldHoarderCoin_ShoresOfGold_C::OnItemPickedUp()
{
    ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_SpawnGoldHoarderCoin_ShoresOfGold_C::ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold (407 bytes)
void BP_SpawnGoldHoarderCoin_ShoresOfGold_C::ExecuteUbergraph_BP_SpawnGoldHoarderCoin_ShoresOfGold()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(idx_285115, CallFunc_GetTransform_ReturnValue, true, false);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_194;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    this->SignalComplete();
L_194:
    return;
}
