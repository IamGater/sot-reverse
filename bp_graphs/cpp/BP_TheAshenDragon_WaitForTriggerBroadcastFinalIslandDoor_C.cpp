// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::OnBegin (40 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::OnBegin()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::PlayerEnteredTrigger (40 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::PlayerEnteredTrigger()
{
    ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor (1310 bytes)
void BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor_C::ExecuteUbergraph_BP_TheAshenDragon_WaitForTriggerBroadcastFinalIslandDoor()
{
    TScriptInterface<UMechanismTriggerInterface> idx_281999 = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess5 = static_cast<bool>(idx_281999);
    if (!UniqueObjectNameForCooking_bSuccess5) goto L_159;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue2 = idx_281999->GetTriggerState();
    auto Temp_byte_Variable = CallFunc_GetTriggerState_ReturnValue2;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue2 = Temp_byte_Variable;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface3 = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface3);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_172;
    bool CallFunc_DeactivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface3->DeactivateTrigger();
L_159:
L_172:
    CallFunc_DeactivateTrigger_ReturnValue = false;
L_17E:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = Temp_byte_Variable2;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2 = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_270;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2->ActivateTrigger();
    this->Delay();
L_270:
    CallFunc_ActivateTrigger_ReturnValue = false;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->GetVariables(CallFunc_GetVariables_OutStruct2);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct2);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UActorComponent* CallFunc_GetComponentInterfaceByClass_ReturnValue = UniqueObjectNameForCooking_AsActor->GetComponentInterfaceByClass(MechanismTriggerInterface);
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(CallFunc_GetComponentInterfaceByClass_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_17E;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->GetTriggerState();
    auto Temp_byte_Variable2 = CallFunc_GetTriggerState_ReturnValue;
    UBlueprintStepBase::GetParticipants(idx_281947);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(idx_281947, idx_281950);
    return;
}
