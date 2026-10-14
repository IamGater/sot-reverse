// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_OpenStatueMouth_C::OnBegin (40 bytes)
void BP_OpenStatueMouth_C::OnBegin()
{
    ExecuteUbergraph_BP_OpenStatueMouth();
    return;
}

// Recovered Kismet: BP_OpenStatueMouth_C::ExecuteUbergraph_BP_OpenStatueMouth (424 bytes)
void BP_OpenStatueMouth_C::ExecuteUbergraph_BP_OpenStatueMouth()
{
    this->SignalComplete();
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_9D;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->ActivateTrigger();
L_9D:
    CallFunc_ActivateTrigger_ReturnValue = false;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = CallFunc_GetVariables_OutStruct->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_18D;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
L_18D:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
    return;
}
