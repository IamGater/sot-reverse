// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnBegin (40 bytes)
void BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnBegin()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnParticipantBeginOverlap (40 bytes)
void BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::OnParticipantBeginOverlap()
{
    ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy();
    return;
}

// Recovered Kismet: BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy (1027 bytes)
void BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy_C::ExecuteUbergraph_BP_RevengeOfTheMorningStar_WaitForGraymarrowProxy()
{
    this->SignalComplete();
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentsByClass(SphereComponent);
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants2);
    bool CallFunc_Array_Contains_ReturnValue2 = UKismetArrayLibrary::Array_Contains(CallFunc_GetParticipants_Participants2, CallFunc_Array_Get_Item2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetVariables_OutStruct->GetComponentsByClass(SphereComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetOverlappingActors_OverlappingActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_2F7;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_2F7:
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    this->SignalComplete();
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_GetParticipants_Participants, K2Node_CustomEvent_OtherActor);
    return;
}
