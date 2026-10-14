// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MaidenVoyage_Automation_ActivateTalkToPirateLordTrigger_C::OnBegin (40 bytes)
void BP_MaidenVoyage_Automation_ActivateTalkToPirateLordTrigger_C::OnBegin()
{
    idx:286051();
    return;
}

// Recovered Kismet: BP_MaidenVoyage_Automation_ActivateTalkToPirateLordTrigger_C::fn_idx_286051 (419 bytes)
void BP_MaidenVoyage_Automation_ActivateTalkToPirateLordTrigger_C::fn_idx_286051()
{
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = CallFunc_GetVariables_OutStruct->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_173;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_18B;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->ActivateTrigger();
    this->SignalComplete();
L_173:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
L_18B:
    CallFunc_ActivateTrigger_ReturnValue = false;
    return;
}
