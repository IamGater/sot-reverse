// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_SelectKeyParams_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_SelectKeyParams_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_SelectKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams (879 bytes)
void BP_FateOfTheMorningstar_SelectKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectKeyParams()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetTransform_ReturnValue = UniqueObjectNameForCooking_AsActor->this->GetTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct2, CallFunc_GetTransform_ReturnValue, true, true);
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_2F8;
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct3);
L_2F8:
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}
