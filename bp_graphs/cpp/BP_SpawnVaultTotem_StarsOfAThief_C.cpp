// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SpawnVaultTotem_StarsOfAThief_C::OnBegin (40 bytes)
void BP_SpawnVaultTotem_StarsOfAThief_C::OnBegin()
{
    ExecuteUbergraph_BP_SpawnVaultTotem_StarsOfAThief();
    return;
}

// Recovered Kismet: BP_SpawnVaultTotem_StarsOfAThief_C::ExecuteUbergraph_BP_SpawnVaultTotem_StarsOfAThief (1805 bytes)
void BP_SpawnVaultTotem_StarsOfAThief_C::ExecuteUbergraph_BP_SpawnVaultTotem_StarsOfAThief()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    auto CallFunc_GetVariables_OutStruct = CallFunc_GetVariables_OutStruct;
    UBlueprintStepBase::SetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    bool Temp_bool_True_if_break_was_hit_Variable = false;
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct3->GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_645;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct3->GetComponentsByClass(StaticMeshComponent);
    bool idx_284102 = CallFunc_Array_Get_Item->DoesSocketExist();
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct3->GetComponentsByClass(StaticMeshComponent);
    FTransform CallFunc_GetSocketTransform_ReturnValue = CallFunc_Array_Get_Item->GetSocketTransform();
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_BreakTransform_Location;
    AActor* CallFunc_SpawnPhasedItem_ReturnValue = UBlueprintStepBase::SpawnPhasedItem(CallFunc_GetVariables_OutStruct2, CallFunc_MakeTransform_ReturnValue, true, true);
    ItemProxy* idx_284105 = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_284105);
    auto CallFunc_GetTransform_ReturnValue = idx_284105->this->GetTransform();
    auto CallFunc_MakeVector_ReturnValue = idx_284105;
    auto CallFunc_MakeTransform_ReturnValue2 = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_GetTransform_ReturnValue;
    bool CallFunc_K2_SetActorTransform_ReturnValue = idx_284105->K2_SetActorTransform(CallFunc_ComposeTransforms_ReturnValue, false, CallFunc_K2_SetActorTransform_SweepHitResult, false);
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct3->GetComponentsByClass(StaticMeshComponent);
    Temp_bool_True_if_break_was_hit_Variable = true;
L_645:
    ItemProxy* K2Node_DynamicCast_AsItem_Proxy = Cast<ItemProxy*>(CallFunc_SpawnPhasedItem_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsItem_Proxy);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    this->GetVariables(CallFunc_GetVariables_OutStruct3);
    return;
}
