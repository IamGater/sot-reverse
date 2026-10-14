// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285803 (419 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285803()
{
    auto CallFunc_GetItemInfo_ReturnValue = GetItemInfo();
    TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C> UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder = TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C>(CallFunc_GetItemInfo_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_168;
    CallFunc_GetItemInfo_ReturnValue = GetItemInfo();
    TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C> UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder2 = TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C>(CallFunc_GetItemInfo_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder2);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_184;
    auto CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GetCharge_CurrentCharge;
L_168:
L_184:
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285808 (3 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285808()
{
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285799 (1564 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285799()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllActorsOfClass_OutActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_1CA;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    AddTarget(CallFunc_Array_Get_Item, CallFunc_Array_Get_Item);
L_1CA:
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_52D;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    auto CurrentTarget = CallFunc_Array_Get_Item3;
    auto CurrentIntendedIndex = Temp_int_Array_Index_Variable2;
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = this->K2_GetActorLocation();
    float CallFunc_Distance_ReturnValue2 = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue2, CurrentTarget);
    auto CurrentTargetDistance = CallFunc_Distance_ReturnValue2;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = this->K2_GetActorLocation();
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CurrentIntendedIndex;
    auto CallFunc_Greater_IntInt_ReturnValue = CurrentIntendedIndex;
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_K2_GetActorLocation_ReturnValue, CallFunc_Array_Get_Item2);
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_5DD;
    auto CallFunc_Subtract_IntInt_ReturnValue = CurrentIntendedIndex;
    CurrentIntendedIndex = CallFunc_Subtract_IntInt_ReturnValue;
L_52D:
    auto Targets = SortedTargets;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_5DD:
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285782 (426 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285782()
{
    if (!IsLord) goto L_DD;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = TargetLocation->K2_GetActorLocation();
    auto K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(Targets, K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2);
L_DD:
    CallFunc_K2_GetActorLocation_ReturnValue = TargetLocation->K2_GetActorLocation();
    auto K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Targets, K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target);
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::UserConstructionScript (13 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveBeginPlay (22 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::OnUseStarted (40 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::OnUseStarted()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285812 (40 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285812()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveEndPlay (40 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285814 (22 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285814()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveTick (40 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::ReceiveTick()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285813 (22 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285813()
{
    ExecuteUbergraph_BP_Prototype_LanternOfSouls_ItemWieldable();
    return;
}

// Recovered Kismet: BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285798 (4938 bytes)
void BP_Prototype_LanternOfSouls_ItemWieldable_C::fn_idx_285798()
{
    auto CallFunc_GetItemInfo_ReturnValue = GetItemInfo();
    TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C> UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder = TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C>(CallFunc_GetItemInfo_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_A0;
L_A0:
    FindAndDistanceSortTargets();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_190;
L_190:
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto LastActivatedTime = CallFunc_GetGameTimeInSeconds_ReturnValue;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    auto K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target;
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Array_Index_Variable2;
    auto CallFunc_Add_IntInt_ReturnValue5 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue5;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    auto CallFunc_IsValid_ReturnValue3 = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item2);
    auto CallFunc_Not_PreBool_ReturnValue = CallFunc_IsValid_ReturnValue3;
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue2;
    auto CallFunc_Multiply_IntFloat_ReturnValue = Temp_int_Array_Index_Variable;
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    auto CallFunc_Multiply_IntFloat_ReturnValue2 = Temp_int_Array_Index_Variable;
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue2;
    float CallFunc_GetGameTimeInSeconds_ReturnValue3 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
    auto CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_Less_FloatFloat_ReturnValue2;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue2) goto L_B1C;
    UBaseWorldMarker* CallFunc_CreateWorldMarker_ReturnValue = UWorldMarkerBlueprintFunctionLibrary::CreateWorldMarker(CallFunc_Array_Get_Item2, CallFunc_Array_Get_Item2);
    auto K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target3;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Array_Index_Variable;
L_B1C:
    CallFunc_Multiply_IntFloat_ReturnValue2 = Temp_int_Array_Index_Variable;
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue2;
    CallFunc_GetGameTimeInSeconds_ReturnValue3 = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_GetGameTimeInSeconds_ReturnValue3;
    CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item2);
    auto K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2 = K2Node_MakeStruct_DS_Prototype_LanternOfSouls_Target2;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Array_Index_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Targets);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool CallFunc_HasAuthority_ReturnValue3 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue3) goto L_F5B;
L_F5B:
    auto CallFunc_GetItemInfo_ReturnValue2 = GetItemInfo();
    TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C> UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder2 = TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C>(CallFunc_GetItemInfo_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder2);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_11A0;
    CallFunc_GetItemInfo_ReturnValue2 = GetItemInfo();
    TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C> UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder3 = TScriptInterface<UBP_Prototype_LanternOfSouls_ChargeHolder_C>(CallFunc_GetItemInfo_ReturnValue2);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Prototype_Lantern_Of_Souls_Charge_Holder3);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_1184;
    FString CallFunc_BuildString_Float_ReturnValue = UKismetStringLibrary::BuildString_Float(CallFunc_GetMaxCharge_MaxCharge);
    FString CallFunc_BuildString_Float_ReturnValue2 = UKismetStringLibrary::BuildString_Float(CallFunc_GetCharge_CurrentCharge, CallFunc_BuildString_Float_ReturnValue);
L_1184:
L_11A0:
    bool HoldingUse = true;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, HoldToPulseTimeInSeconds, false);
    auto HoldingHandle = CallFunc_K2_SetTimerDelegate_ReturnValue;
    HoldingUse = false;
    IsCharged(CallFunc_IsCharged_Charged);
    if (!CallFunc_IsCharged_Charged) goto L_12BC;
    OnPulseActivated();
L_12BC:
    return;
}
