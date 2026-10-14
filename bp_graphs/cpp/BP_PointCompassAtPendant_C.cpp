// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PointCompassAtPendant_C::OnBegin (40 bytes)
void BP_PointCompassAtPendant_C::OnBegin()
{
    ExecuteUbergraph_BP_PointCompassAtPendant();
    return;
}

// Recovered Kismet: BP_PointCompassAtPendant_C::ExecuteUbergraph_BP_PointCompassAtPendant (677 bytes)
void BP_PointCompassAtPendant_C::ExecuteUbergraph_BP_PointCompassAtPendant()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UBlueprintStepBase::ChangeCompassTargetByActor(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetTransform_ReturnValue = CallFunc_GetVariables_OutStruct->this->GetTransform();
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_GetTransform_ReturnValue;
    auto idx_284223 = CallFunc_MakeTransform_ReturnValue2;
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(idx_284211, idx_284223, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_2A2;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
L_2A2:
    return;
}
