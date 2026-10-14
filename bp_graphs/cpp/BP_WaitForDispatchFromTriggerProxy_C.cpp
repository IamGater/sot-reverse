// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::PrintCastFailure (762 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::PrintCastFailure()
{
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(Actor);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    auto UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::OnBeginCustom (937 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::OnBeginCustom()
{
    BP_TriggerProxyBase_C* idx_282691 = Cast<BP_TriggerProxyBase_C*>(idx_282698);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282691);
    if (!K2Node_DynamicCast_bSuccess) goto L_7D;
    WaitForBroadcast(idx_282691, idx_282697, idx_282699);
L_7D:
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(idx_282698);
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass();
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_GetDisplayName_ReturnValue);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    UniqueObjectNameForCooking_FormatTextArgument = UniqueObjectNameForCooking_FormatTextArgument;
    FText CallFunc_Conv_StringToText_ReturnValue2 = UKismetTextLibrary::Conv_StringToText(CallFunc_GetClassDisplayName_ReturnValue);
    auto UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    UniqueObjectNameForCooking_FormatTextArgument2 = UniqueObjectNameForCooking_FormatTextArgument2;
    auto UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    UniqueObjectNameForCooking_FormatTextArgument3 = UniqueObjectNameForCooking_FormatTextArgument3;
    FText CallFunc_Format_ReturnValue = UKismetTextLibrary::Format(UniqueObjectNameForCooking_Array);
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::WaitForBroadcast (76 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::WaitForBroadcast()
{
    ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy();
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::OnAllParticipantsCrossedTrigger (22 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::OnAllParticipantsCrossedTrigger()
{
    ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy();
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::OnActorEntered (40 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::OnActorEntered()
{
    ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy();
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::OnTriggerActivated (40 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::OnTriggerActivated()
{
    ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy();
    return;
}

// Recovered Kismet: BP_WaitForDispatchFromTriggerProxy_C::ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy (853 bytes)
void BP_WaitForDispatchFromTriggerProxy_C::ExecuteUbergraph_BP_WaitForDispatchFromTriggerProxy()
{
    this->SignalComplete();
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetParticipants_Participants, idx_282685);
    if (!CallFunc_Array_Contains_ReturnValue) goto L_352;
    this->SignalComplete();
    if (!idx_282688) goto L_196;
    BP_TrackActorTriggerProxyBase_C* idx_282690 = Cast<BP_TrackActorTriggerProxyBase_C*>(idx_282687);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_282690);
    if (!K2Node_DynamicCast_bSuccess2) goto L_27D;
    UBlueprintStepBase::GetParticipants(idx_282682);
L_196:
    if (!idx_282686) goto L_238;
    BP_TrackActorTriggerProxyBase_C* idx_282689 = Cast<BP_TrackActorTriggerProxyBase_C*>(idx_282687);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_282689);
    if (!K2Node_DynamicCast_bSuccess) goto L_2E5;
L_238:
L_27D:
    PrintCastFailure(idx_282687, true);
L_2E5:
    PrintCastFailure(idx_282687, true);
L_352:
    return;
}
