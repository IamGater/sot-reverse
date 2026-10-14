// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_SelectEliKeyParams_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_SelectEliKeyParams_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_SelectEliKeyParams();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_SelectEliKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectEliKeyParams (853 bytes)
void BP_FateOfTheMorningstar_SelectEliKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectEliKeyParams()
{
L_A:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct2 = CallFunc_GetVariables_OutStruct2;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct2);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetTransform_ReturnValue = UniqueObjectNameForCooking_AsActor->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct, CallFunc_GetTransform_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_A;
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct3);
    this->SignalComplete();
    return;
}
