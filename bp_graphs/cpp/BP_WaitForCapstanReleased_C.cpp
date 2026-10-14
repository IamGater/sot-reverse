// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaitForCapstanReleased_C::GetCapstanFromShip (789 bytes)
void BP_WaitForCapstanReleased_C::GetCapstanFromShip()
{
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(Ship);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_272;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UDamageablePartsInterface> idx_282678 = TScriptInterface<UDamageablePartsInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_282678);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_28A;
    TArray<AActor*> CallFunc_GetDamageableParts_ReturnValue = idx_282678->GetDamageableParts();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetDamageableParts_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_2B8;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    Capstan* K2Node_DynamicCast_AsCapstan = Cast<Capstan*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsCapstan);
L_272:
    Temp_object_Variable = Ship;
L_28A:
L_2B8:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::GetFirstParticipant (574 bytes)
void BP_WaitForCapstanReleased_C::GetFirstParticipant()
{
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetParticipants_Participants);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_145;
    UBlueprintStepBase::GetParticipants(CallFunc_GetParticipants_Participants);
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_1B8;
L_145:
L_1B8:
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::GetShipFromPlayer (627 bytes)
void BP_WaitForCapstanReleased_C::GetShipFromPlayer()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    TScriptInterface<UGameServiceProviderInterface> UniqueObjectNameForCooking_AsGame_Service_Provider_Interface = TScriptInterface<UGameServiceProviderInterface>(CallFunc_GetGameState_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsGame_Service_Provider_Interface);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_238;
    auto CallFunc_GetService_ReturnValue = UniqueObjectNameForCooking_AsGame_Service_Provider_Interface->GetService(ShipServiceInterface);
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(CallFunc_GetService_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_248;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UShipServiceInterface> idx_282679 = TScriptInterface<UShipServiceInterface>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_282679);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_260;
    TScriptInterface<UCrewMembershipInterface> CallFunc_GetCrewId_CrewMember_CastInput = TScriptInterface<UCrewMembershipInterface>(Player);
    auto CallFunc_GetCrewId_ReturnValue = CrewMembershipFunctions->this->GetCrewId(CallFunc_GetCrewId_CrewMember_CastInput);
    AShip* idx_282665 = idx_282679->GetShipForCrew(CallFunc_GetCrewId_ReturnValue);
    auto Temp_object_Variable = idx_282665;
L_238:
L_248:
    Temp_object_Variable2 = CallFunc_GetService_ReturnValue;
L_260:
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::OnBeginCustom (44 bytes)
void BP_WaitForCapstanReleased_C::OnBeginCustom()
{
    auto IslandName = IslandName;
    Listen for Capstan Dropped();
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::Listen for Capstan Dropped (22 bytes)
void BP_WaitForCapstanReleased_C::Listen for Capstan Dropped()
{
    ExecuteUbergraph_BP_WaitForCapstanReleased();
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::OnEnd (22 bytes)
void BP_WaitForCapstanReleased_C::OnEnd()
{
    ExecuteUbergraph_BP_WaitForCapstanReleased();
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::UnregisterEvent (22 bytes)
void BP_WaitForCapstanReleased_C::UnregisterEvent()
{
    ExecuteUbergraph_BP_WaitForCapstanReleased();
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::Capstan Released (40 bytes)
void BP_WaitForCapstanReleased_C::Capstan Released()
{
    ExecuteUbergraph_BP_WaitForCapstanReleased();
    return;
}

// Recovered Kismet: BP_WaitForCapstanReleased_C::ExecuteUbergraph_BP_WaitForCapstanReleased (1085 bytes)
void BP_WaitForCapstanReleased_C::ExecuteUbergraph_BP_WaitForCapstanReleased()
{
    auto CallFunc_GetGameState_ReturnValue = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue);
    auto CallFunc_GetGameState_ReturnValue2 = this->GetGameState();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor(CallFunc_GetGameState_ReturnValue2);
    UnregisterEvent();
    bool CallFunc_IsHandleRegistered_ReturnValue = UObjectMessagingFunctions::IsHandleRegistered(idx_282670);
    if (!CallFunc_IsHandleRegistered_ReturnValue) goto L_43A;
L_18B:
    this->SignalComplete();
    GetFirstParticipant(idx_282664);
    TScriptInterface<UCrewMembershipInterface> CallFunc_GetCrewId_CrewMember_CastInput = TScriptInterface<UCrewMembershipInterface>(idx_282664);
    auto CallFunc_GetCrewId_ReturnValue = CrewMembershipFunctions->this->GetCrewId(CallFunc_GetCrewId_CrewMember_CastInput);
    bool CallFunc_EqualEqual_GuidGuid_ReturnValue = UKismetGuidLibrary::EqualEqual_GuidGuid(K2Node_CustomEvent_Event, CallFunc_GetCrewId_ReturnValue);
    if (!CallFunc_EqualEqual_GuidGuid_ReturnValue) goto L_43A;
    auto CallFunc_GetGameState_ReturnValue3 = this->GetGameState();
    if (!CallFunc_GetIslandTriggerCircle_OutHasFoundIsland) goto L_18B;
    GetFirstParticipant(idx_282663);
    GetShipFromPlayer(idx_282663, idx_282666);
    GetCapstanFromShip(idx_282666, idx_282662);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = idx_282662->K2_GetActorLocation();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetIslandTriggerCircle_OutCircleRadius;
    auto idx_282667 = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_GetIslandTriggerCircle_OutCircleCentre;
    auto idx_282668 = CallFunc_Subtract_VectorVector_ReturnValue;
    auto CallFunc_LessEqual_FloatFloat_ReturnValue = idx_282668;
    if (!CallFunc_LessEqual_FloatFloat_ReturnValue) goto L_43A;
L_43A:
    return;
}
