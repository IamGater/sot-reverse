// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForFlintlockEquip_C::OnBegin (40 bytes)
void BP_WaitForFlintlockEquip_C::OnBegin()
{
    ExecuteUbergraph_BP_WaitForFlintlockEquip();
    return;
}

// Recovered Kismet: BP_WaitForFlintlockEquip_C::FlintlockWielded (40 bytes)
void BP_WaitForFlintlockEquip_C::FlintlockWielded()
{
    ExecuteUbergraph_BP_WaitForFlintlockEquip();
    return;
}

// Recovered Kismet: BP_WaitForFlintlockEquip_C::OnEnd (22 bytes)
void BP_WaitForFlintlockEquip_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForFlintlockEquip();
    return;
}

// Recovered Kismet: BP_WaitForFlintlockEquip_C::ExecuteUbergraph_BP_WaitForFlintlockEquip (1079 bytes)
void BP_WaitForFlintlockEquip_C::ExecuteUbergraph_BP_WaitForFlintlockEquip()
{
    if (!idx_229375) goto L_434;
    this->SignalComplete();
    this->GetVariables(idx_227630);
    idx_229369* idx_229374 = Cast<idx_229369*>(idx_227630);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_229374);
    if (!K2Node_DynamicCast_bSuccess) goto L_1EE;
    UBlueprintStepBase::GetParticipants(idx_228863);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess2) goto L_434;
    AController* idx_229301 = K2Node_DynamicCast_AsAthena_Player_Character->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229301);
L_1EE:
    UObject* CallFunc_Conv_InterfaceToObject_ReturnValue = UKismetSystemLibrary::Conv_InterfaceToObject(K2Node_CustomEvent_NewParam);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(CallFunc_Conv_InterfaceToObject_ReturnValue);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    auto idx_229375 = CallFunc_ClassIsChildOf_ReturnValue;
    UBlueprintStepBase::GetParticipants(idx_229252);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character2 = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character2);
    if (!K2Node_DynamicCast_bSuccess3) goto L_434;
    AController* idx_229302 = K2Node_DynamicCast_AsAthena_Player_Character2->GetController();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_229302);
L_434:
    return;
}
