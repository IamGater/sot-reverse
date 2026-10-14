// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::UserConstructionScript (3 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::ReceiveBeginPlay (22 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide();
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStarted (22 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStarted()
{
    ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide();
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStopped (22 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::Blueprint_OnStopped()
{
    ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide();
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::shp_int_map_pillar_02_a6 (112 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::shp_int_map_pillar_02_a6()
{
    ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide();
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::shp_int_map_pillar_02_a7 (112 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::shp_int_map_pillar_02_a7()
{
    ExecuteUbergraph_BP_ProtoDoorMechanism_GalleonSide();
    return;
}

// Recovered Kismet: BP_ProtoDoorMechanism_GalleonSide_C::K2Node_ComponentBoundEvent_OtherActor (4537 bytes)
void BP_ProtoDoorMechanism_GalleonSide_C::K2Node_ComponentBoundEvent_OtherActor()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    bool CallFunc_IsAnimating_ReturnValue = IsAnimating();
    TEnumAsByte<EMechanismActionState> CallFunc_GetActionState_ReturnValue = MechanismActionComponent->GetActionState();
    auto K2Node_SwitchEnum_CmpSuccess = CallFunc_GetActionState_ReturnValue;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_DD;
    K2Node_SwitchEnum_CmpSuccess = CallFunc_GetActionState_ReturnValue;
L_DD:
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = K2Node_ComponentBoundEvent_OtherActor2->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    if (!EnableJumpToLocation) goto L_54F;
    auto K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = K2Node_ComponentBoundEvent_OtherActor2->K2_GetActorLocation();
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_ComponentBoundEvent_OtherActor2->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    FVector CallFunc_K2_GetComponentLocation_ReturnValue2 = ClosedJumpToLocation->K2_GetComponentLocation();
    auto CallFunc_GetDirectionVector_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_54F:
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    CallFunc_GetComponentsByClass_ReturnValue = K2Node_ComponentBoundEvent_OtherActor2->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    auto CallFunc_GetForwardVector_ReturnValue = ClosedKnockbackDirection->this->GetForwardVector();
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = K2Node_ComponentBoundEvent_OtherActor->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    if (!EnableJumpToLocation) goto L_C54;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = OpenJumpToLocation->K2_GetComponentLocation();
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    FVector CallFunc_K2_GetActorLocation_ReturnValue2 = K2Node_ComponentBoundEvent_OtherActor->K2_GetActorLocation();
    CallFunc_GetComponentsByClass_ReturnValue2 = K2Node_ComponentBoundEvent_OtherActor->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    auto CallFunc_GetDirectionVector_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue2;
L_C54:
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    K2Node_MakeStruct_KnockBackInfo = K2Node_MakeStruct_KnockBackInfo;
    CallFunc_GetComponentsByClass_ReturnValue2 = K2Node_ComponentBoundEvent_OtherActor->GetComponentsByClass(AthenaCharacterKnockbackComponent);
    auto CallFunc_GetForwardVector_ReturnValue2 = OpenKnockbackDirection->this->GetForwardVector();
L_F1A:
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    bool CallFunc_IsAnimating_ReturnValue2 = IsAnimating();
    TEnumAsByte<EMechanismActionState> CallFunc_GetActionState_ReturnValue2 = MechanismActionComponent->GetActionState();
    auto K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetActionState_ReturnValue2;
    K2Node_SwitchEnum2_CmpSuccess = CallFunc_GetActionState_ReturnValue2;
    if (!K2Node_SwitchEnum2_CmpSuccess) goto L_F1A;
    bool CallFunc_HasAuthority_ReturnValue3 = AActor::HasAuthority();
    return;
}
