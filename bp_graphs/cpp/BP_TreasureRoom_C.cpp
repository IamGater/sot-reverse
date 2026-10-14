// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TreasureRoom_C::SetLightingState (1413 bytes)
void BP_TreasureRoom_C::SetLightingState()
{
    UObject* CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(idx_281329);
    idx_281017* idx_281378 = Cast<idx_281017*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281378);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(idx_281378);
    CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(idx_281329);
    idx_281378 = Cast<idx_281017*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281378);
    auto CallFunc_FlushNetDormancy_ReturnValue = idx_281378->this->FlushNetDormancy();
    auto CallFunc_SelectFloat_ReturnValue2 = idx_281374;
    CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(idx_281329);
    idx_281378 = Cast<idx_281017*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281378);
    idx_281378 = idx_281378;
    CallFunc_Conv_AssetToObject_ReturnValue2 = UKismetSystemLibrary::Conv_AssetToObject(idx_281329);
    idx_281378 = Cast<idx_281017*>(CallFunc_Conv_AssetToObject_ReturnValue2);
    UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281378);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281377);
    idx_281290* idx_281379 = Cast<idx_281290*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281379);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(idx_281379);
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281377);
    idx_281379 = Cast<idx_281290*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281379);
    auto CallFunc_FlushNetDormancy_ReturnValue2 = idx_281379->this->FlushNetDormancy();
    auto CallFunc_SelectFloat_ReturnValue = idx_281374;
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281377);
    idx_281379 = Cast<idx_281290*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281379);
    idx_281379 = idx_281379;
    CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(idx_281377);
    idx_281379 = Cast<idx_281290*>(CallFunc_Conv_AssetToObject_ReturnValue);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281379);
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::PanicTeleportParticipants (788 bytes)
void BP_TreasureRoom_C::PanicTeleportParticipants()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_281337);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_2C2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    AthenaPlayerCharacter* K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
    if (!K2Node_DynamicCast_bSuccess) goto L_2C2;
    K2Node_DynamicCast_AsAthena_Player_Character = Cast<AthenaPlayerCharacter*>(CallFunc_Array_Get_Item);
    K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsAthena_Player_Character);
L_2C2:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::DetermineGoldHoarderMaxHealth (206 bytes)
void BP_TreasureRoom_C::DetermineGoldHoarderMaxHealth()
{
    int idx_281336 = ATreasureRoom::GetNumPlayersWithCrewMembersInRoom();
    auto CallFunc_Clamp_ReturnValue = idx_281336;
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Clamp_ReturnValue;
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::SetGoldHoarderMaxHealth (113 bytes)
void BP_TreasureRoom_C::SetGoldHoarderMaxHealth()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(GoldHoarder);
    if (!CallFunc_IsValid_ReturnValue) goto L_6E;
L_6E:
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::SetMechanismsState (1437 bytes)
void BP_TreasureRoom_C::SetMechanismsState()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_3C6;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UObject* idx_281334 = CallFunc_Array_Get_Item->GetInterfaceImplementer(MechanismTriggerInterface);
    ULevelStreaming* idx_281380 = Cast<ULevelStreaming*>(idx_281334);
    bool idx_281385 = static_cast<bool>(idx_281380);
    if (!idx_281385) goto L_415;
    ALevelScriptActor* idx_281335 = idx_281380->GetLevelScriptActor();
    auto Temp_object_Variable3 = idx_281335;
    TScriptInterface<UMechanismTriggerInterface> idx_281383 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable3);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(idx_281383);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_42D;
    TEnumAsByte<EMechanismTriggerState> CallFunc_GetTriggerState_ReturnValue = idx_281383->GetTriggerState();
    auto Temp_byte_Variable = CallFunc_GetTriggerState_ReturnValue;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = Temp_byte_Variable;
    auto CallFunc_NotEqual_BoolBool_ReturnValue = Condition;
    if (!Condition) goto L_446;
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming2 = Cast<ULevelStreaming*>(idx_281334);
    bool idx_281384 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming2);
    if (!idx_281384) goto L_576;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue2 = UniqueObjectNameForCooking_AsLevel_Streaming2->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue2;
    TScriptInterface<UMechanismTriggerInterface> idx_281381 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(idx_281381);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_58E;
    bool CallFunc_ActivateTrigger_ReturnValue = idx_281381->ActivateTrigger();
L_3C6:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_415:
    Temp_object_Variable3 = idx_281334;
L_42D:
L_446:
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(idx_281334);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_55E;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UMechanismTriggerInterface> idx_281382 = TScriptInterface<UMechanismTriggerInterface>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_281382);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_552;
    bool CallFunc_DeactivateTrigger_ReturnValue = idx_281382->DeactivateTrigger();
L_552:
    CallFunc_DeactivateTrigger_ReturnValue = false;
L_55E:
    Temp_object_Variable2 = idx_281334;
L_576:
    Temp_object_Variable = idx_281334;
L_58E:
    CallFunc_ActivateTrigger_ReturnValue = false;
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::SetDoorState (67 bytes)
void BP_TreasureRoom_C::SetDoorState()
{
    SetMechanismsState(idx_281342, idx_281362);
    SetMechanismsState(Exit, idx_281363);
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::UserConstructionScript (3 bytes)
void BP_TreasureRoom_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::ReceiveBeginPlay (22 bytes)
void BP_TreasureRoom_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::OnSpawn (40 bytes)
void BP_TreasureRoom_C::OnSpawn()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::OnDespawn (58 bytes)
void BP_TreasureRoom_C::OnDespawn()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::OnSetState (58 bytes)
void BP_TreasureRoom_C::OnSetState()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::SpawnAftermathSkeletons (22 bytes)
void BP_TreasureRoom_C::SpawnAftermathSkeletons()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::PanicTeleportRemianingPlayers (22 bytes)
void BP_TreasureRoom_C::PanicTeleportRemianingPlayers()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::FailTreasureRoom (22 bytes)
void BP_TreasureRoom_C::FailTreasureRoom()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::AddNameplate (22 bytes)
void BP_TreasureRoom_C::AddNameplate()
{
    ExecuteUbergraph_BP_TreasureRoom();
    return;
}

// Recovered Kismet: BP_TreasureRoom_C::ExecuteUbergraph_BP_TreasureRoom (2090 bytes)
void BP_TreasureRoom_C::ExecuteUbergraph_BP_TreasureRoom()
{
    SetLightingState(false);
    SetGoldHoarderMaxHealth(idx_281352);
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue3 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate3, idx_281346, false);
    auto idx_281345 = CallFunc_K2_SetTimerDelegate_ReturnValue3;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue4 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate2, idx_281351, false);
    bool CallFunc_IsServer_ReturnValue = UKismetSystemLibrary::IsServer();
    if (!CallFunc_IsServer_ReturnValue) goto L_827;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue2 = idx_281357;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue2) goto L_238;
    SetDoorState(false, false);
    DetermineGoldHoarderMaxHealth(idx_281331);
    auto idx_281352 = idx_281331;
L_238:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue3 = idx_281357;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue3) goto L_368;
    SetDoorState(false, true);
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, idx_281347, false);
    auto idx_281327 = CallFunc_K2_SetTimerDelegate_ReturnValue;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue2 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate4, idx_281367, false);
    auto idx_281326 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
L_368:
    auto CallFunc_EqualEqual_ByteByte_ReturnValue4 = idx_281357;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue4) goto L_827;
    SetDoorState(true, false);
    SetLightingState(true);
    auto idx_281361 = idx_281361;
    idx_281361 = idx_281361;
    idx_281361 = idx_281361;
    idx_281361 = idx_281361;
    auto idx_281364 = idx_281361;
    AthenaAICharacter* idx_281355 = Cast<AthenaAICharacter*>(idx_281360);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(idx_281355);
    if (!K2Node_DynamicCast_bSuccess3) goto L_827;
    idx_281355 = Cast<AthenaAICharacter*>(idx_281360);
    K2Node_DynamicCast_bSuccess3 = static_cast<bool>(idx_281355);
    FAIEncounterSpecification idx_281333 = idx_281355->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue2 = idx_281333;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue2) goto L_827;
    AthenaAICharacter* idx_281353 = Cast<AthenaAICharacter*>(idx_281360);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_281353);
    if (!K2Node_DynamicCast_bSuccess) goto L_827;
    auto GoldHoarder = idx_281353;
    SetGoldHoarderMaxHealth(idx_281352);
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = idx_281356;
    if (!CallFunc_EqualEqual_ByteByte_ReturnValue) goto L_827;
    AthenaAICharacter* idx_281354 = Cast<AthenaAICharacter*>(idx_281359);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_281354);
    if (!K2Node_DynamicCast_bSuccess2) goto L_827;
    idx_281354 = Cast<AthenaAICharacter*>(idx_281359);
    K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_281354);
    FAIEncounterSpecification idx_281332 = idx_281354->GetAIEncounterSpec();
    auto CallFunc_EqualEqual_ClassClass_ReturnValue = idx_281332;
    if (!CallFunc_EqualEqual_ClassClass_ReturnValue) goto L_827;
    auto idx_281338 = this->SpawnDroppedItem(idx_281359, BP_GoldHoarderSkull_Desc_C);
    this->SignalComplete();
    ATreasureRoom::PushAISpawner(idx_281328);
    PanicTeleportParticipants();
    PanicTeleportParticipants();
    this->SignalFail();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(GoldHoarder);
    if (!CallFunc_IsValid_ReturnValue) goto L_827;
L_827:
    return;
}
