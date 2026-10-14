// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnPhasedItem_C::OnBeginCustom (408 bytes)
void BP_SpawnPhasedItem_C::OnBeginCustom()
{
    auto CallFunc_GetTransform_ReturnValue = idx_282646->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(Desc, CallFunc_GetTransform_ReturnValue, Tracked, Critical, idx_282652);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_117;
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
L_117:
    return;
}
