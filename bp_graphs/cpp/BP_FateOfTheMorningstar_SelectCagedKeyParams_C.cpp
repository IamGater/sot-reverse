// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_FateOfTheMorningstar_SelectCagedKeyParams_C::OnBegin (40 bytes)
void BP_FateOfTheMorningstar_SelectCagedKeyParams_C::OnBegin()
{
    ExecuteUbergraph_BP_FateOfTheMorningstar_SelectCagedKeyParams();
    return;
}

// Recovered Kismet: BP_FateOfTheMorningstar_SelectCagedKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectCagedKeyParams (2431 bytes)
void BP_FateOfTheMorningstar_SelectCagedKeyParams_C::ExecuteUbergraph_BP_FateOfTheMorningstar_SelectCagedKeyParams()
{
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetRootComponent();
    FString CallFunc_GetObjectName_ReturnValue = UKismetSystemLibrary::GetObjectName(CallFunc_Array_Get_Item);
    bool CallFunc_EqualEqual_StrStr_ReturnValue = UKismetStringLibrary::EqualEqual_StrStr(CallFunc_GetObjectName_ReturnValue);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    CallFunc_K2_GetRootComponent_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetRootComponent();
    FTransform CallFunc_GetSocketTransform_ReturnValue = CallFunc_Array_Get_Item->GetSocketTransform();
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct2, CallFunc_GetSocketTransform_ReturnValue, true, true);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    CallFunc_K2_GetRootComponent_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetRootComponent();
    bool Temp_bool_True_if_break_was_hit_Variable = true;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    CallFunc_K2_GetRootComponent_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetRootComponent();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetChildrenComponents_Children);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_728;
L_728:
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    if (!K2Node_DynamicCast_bSuccess) goto L_7EE;
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    auto CallFunc_GetItemInfo_ReturnValue = K2Node_DynamicCast_AsItem_Proxy->this->GetItemInfo();
    auto CallFunc_GetVariables_OutStruct3 = CallFunc_GetVariables_OutStruct3;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct3);
    this->SignalComplete();
L_7EE:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    Temp_bool_True_if_break_was_hit_Variable = false;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    return;
}
