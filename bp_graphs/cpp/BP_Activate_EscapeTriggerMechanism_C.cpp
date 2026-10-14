// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Activate_EscapeTriggerMechanism_C::OnBeginCustom (376 bytes)
void BP_Activate_EscapeTriggerMechanism_C::OnBeginCustom()
{
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = Trigger->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_14D;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_165;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->ActivateTrigger();
    this->SignalComplete();
L_14D:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
L_165:
    CallFunc_ActivateTrigger_ReturnValue = false;
    return;
}
