// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DialogueAudioTarget_C::UserConstructionScript (3 bytes)
void BP_DialogueAudioTarget_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DialogueAudioTarget_C::TriggerAudioEvent (40 bytes)
void BP_DialogueAudioTarget_C::TriggerAudioEvent()
{
    ExecuteUbergraph_BP_DialogueAudioTarget();
    return;
}

// Recovered Kismet: BP_DialogueAudioTarget_C::Multicast_TriggerAudioEvent (40 bytes)
void BP_DialogueAudioTarget_C::Multicast_TriggerAudioEvent()
{
    ExecuteUbergraph_BP_DialogueAudioTarget();
    return;
}

// Recovered Kismet: BP_DialogueAudioTarget_C::StopCurrentAudioEvent (22 bytes)
void BP_DialogueAudioTarget_C::StopCurrentAudioEvent()
{
    ExecuteUbergraph_BP_DialogueAudioTarget();
    return;
}

// Recovered Kismet: BP_DialogueAudioTarget_C::ExecuteUbergraph_BP_DialogueAudioTarget (631 bytes)
void BP_DialogueAudioTarget_C::ExecuteUbergraph_BP_DialogueAudioTarget()
{
    int CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(AudioEvents, K2Node_Event_AudioEvent);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Find_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_E3;
    CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(AudioEvents, K2Node_Event_AudioEvent);
    Multicast_TriggerAudioEvent(CallFunc_Array_Find_ReturnValue);
L_E3:
    FString CallFunc_GetObjectName_ReturnValue = UKismetSystemLibrary::GetObjectName(K2Node_Event_AudioEvent);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetObjectName_ReturnValue);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(WwiseEmitter, CallFunc_Array_Get_Item);
    return;
}
