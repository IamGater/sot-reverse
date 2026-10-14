// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::IsItemAnInstrument (312 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::IsItemAnInstrument()
{
    UClass* CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(Instrument);
    FString CallFunc_GetClassDisplayName_ReturnValue = UKismetSystemLibrary::GetClassDisplayName(CallFunc_GetObjectClass_ReturnValue);
    CallFunc_GetObjectClass_ReturnValue = UGameplayStatics::GetObjectClass(Instrument);
    auto CallFunc_ClassIsChildOf_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::IsInstrumentInsideRadius (484 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::IsInstrumentInsideRadius()
{
    FVector CallFunc_K2_GetActorLocation_ReturnValue = Instrument->K2_GetActorLocation();
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue, idx_282333);
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    FString idx_282319 = UKismetStringLibrary::Conv_BoolToString(CallFunc_LessEqual_FloatFloat_ReturnValue);
    CallFunc_K2_GetActorLocation_ReturnValue = Instrument->K2_GetActorLocation();
    CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue, idx_282333);
    CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::OnBeginCustom (639 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::OnBeginCustom()
{
    auto idx_282335 = idx_282335;
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_282334);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = UniqueObjectNameForCooking_AsActor->K2_GetActorLocation();
    auto idx_282333 = CallFunc_K2_GetActorLocation_ReturnValue;
    UBlueprintStepBase::GetParticipants(idx_281947);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_281947);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_22D;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UBlueprintStepBase::GetParticipants(idx_281947);
    RegisterInstrumentEvents(CallFunc_Array_Get_Item);
L_22D:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::RegisterInstrumentEvents (40 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::RegisterInstrumentEvents()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::StartedUsing (40 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::StartedUsing()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::OnParticipantJoin (40 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::OnParticipantJoin()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::OnParticipantLeave (40 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::OnParticipantLeave()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::UnregisterInstrumentEvents (40 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::UnregisterInstrumentEvents()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::OnEnd (22 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::OnEnd()
{
    ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument();
    return;
}

// Recovered Kismet: BP_CT_Riddle_WaitToUseInstrument_C::ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument (1962 bytes)
void BP_CT_Riddle_WaitToUseInstrument_C::ExecuteUbergraph_BP_CT_Riddle_WaitToUseInstrument()
{
    UBlueprintStepBase::GetParticipants(idx_281947);
    UnregisterInstrumentEvents(CallFunc_Array_Get_Item2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    UBlueprintStepBase::GetParticipants(idx_281947);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_281947);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Participants, Temp_object_Variable);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_282330);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_282325);
    FString idx_282320 = UKismetStringLibrary::Conv_IntToString(CallFunc_Array_Length_ReturnValue);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(idx_282320);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue);
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Participants);
    FString idx_282321 = UKismetStringLibrary::Conv_IntToString(CallFunc_Array_Length_ReturnValue3);
    FString CallFunc_Concat_StrStr_ReturnValue3 = UKismetStringLibrary::Concat_StrStr(CallFunc_Concat_StrStr_ReturnValue2, idx_282321);
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = K2Node_CustomEvent_NewParam;
    auto idx_282323 = IsItemAnInstrument(K2Node_CustomEvent_NewParam);
    auto idx_282322 = IsInstrumentInsideRadius(K2Node_CustomEvent_NewParam);
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    this->SignalComplete();
    RegisterInstrumentEvents(idx_282332);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(idx_282329);
    int CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(Participants, idx_282329);
    CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(Participants, idx_282329);
    CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(Participants, idx_282329);
    return;
}
