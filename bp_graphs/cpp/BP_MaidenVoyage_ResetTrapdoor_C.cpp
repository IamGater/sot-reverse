// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_ResetTrapdoor_C::OnBeginCustom (887 bytes)
void BP_MaidenVoyage_ResetTrapdoor_C::OnBeginCustom()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(Trigger);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = UniqueObjectNameForCooking_AsActor->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming2 = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming2);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_31B;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue2 = UniqueObjectNameForCooking_AsLevel_Streaming2->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue2;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess5 = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2);
    if (!UniqueObjectNameForCooking_bSuccess5) goto L_333;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2->GetTriggerState();
    auto Temp_byte_Variable = CallFunc_GetTriggerState_ReturnValue;
    auto CallFunc_NotEqual_ByteByte_ReturnValue = Temp_byte_Variable;
    if (!CallFunc_NotEqual_ByteByte_ReturnValue) goto L_30C;
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_34C;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_364;
    bool CallFunc_DeactivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->DeactivateTrigger();
L_30C:
    this->SignalComplete();
L_31B:
    Temp_object_Variable2 = CallFunc_GetInterfaceImplementer_ReturnValue;
L_333:
L_34C:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
L_364:
    CallFunc_DeactivateTrigger_ReturnValue = false;
    return;
}
