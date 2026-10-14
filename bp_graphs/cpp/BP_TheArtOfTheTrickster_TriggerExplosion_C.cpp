// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheArtOfTheTrickster_TriggerExplosion_C::OnBegin (40 bytes)
void BP_TheArtOfTheTrickster_TriggerExplosion_C::OnBegin()
{
    ExecuteUbergraph_BP_TheArtOfTheTrickster_TriggerExplosion();
    return;
}

// Recovered Kismet: BP_TheArtOfTheTrickster_TriggerExplosion_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_TriggerExplosion (824 bytes)
void BP_TheArtOfTheTrickster_TriggerExplosion_C::ExecuteUbergraph_BP_TheArtOfTheTrickster_TriggerExplosion()
{
    this->SignalComplete();
L_19:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = Temp_byte_Variable;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_5F;
L_5F:
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_16F;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_187;
    bool CallFunc_ActivateTrigger_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface2->ActivateTrigger();
L_16F:
    Temp_object_Variable2 = CallFunc_GetInterfaceImplementer_ReturnValue;
L_187:
    CallFunc_ActivateTrigger_ReturnValue = false;
    TScriptInterface<UMechanismTriggerInterface> UniqueObjectNameForCooking_AsMechanism_Trigger_Interface = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsMechanism_Trigger_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_19;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = UniqueObjectNameForCooking_AsMechanism_Trigger_Interface->GetTriggerState();
    auto Temp_byte_Variable = CallFunc_GetTriggerState_ReturnValue;
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_GetInterfaceImplementer_ReturnValue = CallFunc_GetVariables_OutStruct->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming2 = Cast<ULevelStreaming*>(CallFunc_GetInterfaceImplementer_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming2);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_31D;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue2 = UniqueObjectNameForCooking_AsLevel_Streaming2->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue2;
L_31D:
    Temp_object_Variable = CallFunc_GetInterfaceImplementer_ReturnValue;
    return;
}
