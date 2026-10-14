// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ActivateMechanismTrigger_C::OnBeginCustom (492 bytes)
void BP_ActivateMechanismTrigger_C::OnBeginCustom()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(Trigger);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = UniqueObjectNameForCooking_AsActor->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_1C1;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_1D9;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->ActivateTrigger();
    this->SignalComplete();
L_1C1:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
L_1D9:
    CallFunc_ActivateTrigger_ReturnValue = false;
    return;
}
