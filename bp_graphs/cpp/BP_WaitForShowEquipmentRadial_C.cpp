// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForShowEquipmentRadial_C::OnBegin (40 bytes)
void BP_WaitForShowEquipmentRadial_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForShowEquipmentRadial();
    return;
}

// Recovered Kismet: BP_WaitForShowEquipmentRadial_C::OnItemWielded (40 bytes)
void BP_WaitForShowEquipmentRadial_C::OnItemWielded()
{
    ExecuteUbergraph_BP_WaitForShowEquipmentRadial();
    return;
}

// Recovered Kismet: BP_WaitForShowEquipmentRadial_C::OnEnd (22 bytes)
void BP_WaitForShowEquipmentRadial_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForShowEquipmentRadial();
    return;
}

// Recovered Kismet: BP_WaitForShowEquipmentRadial_C::ExecuteUbergraph_BP_WaitForShowEquipmentRadial (1068 bytes)
void BP_WaitForShowEquipmentRadial_C::ExecuteUbergraph_BP_WaitForShowEquipmentRadial()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    BP_PromptActor_EquipItem_C* idx_283336 = Cast<BP_PromptActor_EquipItem_C*>(CallFunc_GetVariables_OutStruct);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_283336);
    if (!K2Node_DynamicCast_bSuccess) goto L_429;
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess2) goto L_429;
    AController* CallFunc_GetController_ReturnValue = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetController_ReturnValue);
    this->SignalComplete();
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(K2Node_CustomEvent_Event);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_ClassIsChildOf_ReturnValue2 = CallFunc_GetObjectClass_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue2;
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_BooleanOR_ReturnValue;
    if (!CallFunc_Not_PreBool_ReturnValue) goto L_429;
    UBlueprintStepBase::GetParticipants(idx_282682);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess3) goto L_429;
    AController* idx_283287 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_283287);
L_429:
    return;
}
