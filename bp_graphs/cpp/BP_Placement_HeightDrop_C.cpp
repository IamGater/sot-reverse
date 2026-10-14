// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Placement_HeightDrop_C::CreateComponentList (1120 bytes)
void BP_Placement_HeightDrop_C::CreateComponentList()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_18C;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(idx_227681, CallFunc_Array_Get_Item2);
L_18C:
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(WwiseEmitterComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(WwiseEmitterComponent);
    USceneComponent* idx_227666 = CallFunc_Array_Get_Item->GetAttachParent();
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = DefaultSceneRoot;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(WwiseEmitterComponent);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_227681, CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Placement_HeightDrop_C::CreateParentBounds (3784 bytes)
void BP_Placement_HeightDrop_C::CreateParentBounds()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_Array_Get_Item);
    auto CallFunc_Add_VectorVector_ReturnValue = idx_227669;
    auto idx_227698 = CallFunc_BreakVector_Z2;
    auto CallFunc_Subtract_VectorVector_ReturnValue = idx_227669;
    auto idx_227700 = CallFunc_BreakVector_Z;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_227681);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_449;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_Add_VectorVector_ReturnValue2 = idx_227670;
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_BreakVector_Z4;
    if (!CallFunc_Less_FloatFloat_ReturnValue) goto L_CC3;
L_449:
    auto CallFunc_Add_FloatFloat_ReturnValue = idx_227698;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    auto idx_227703 = CallFunc_Divide_FloatFloat_ReturnValue;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, Temp_struct_Variable);
    auto idx_227701 = CallFunc_AddComponent_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = idx_227698;
    auto CallFunc_Abs_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = idx_227652;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue2 = idx_227653;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_MakeVector_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_227681);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Array_Get_Item3 = CallFunc_Array_Get_Item3;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Subtract_VectorVector_ReturnValue2 = idx_227670;
    auto CallFunc_Less_FloatFloat_ReturnValue2 = CallFunc_BreakVector_Z3;
    if (!CallFunc_Less_FloatFloat_ReturnValue2) goto L_BB7;
    CallFunc_Subtract_VectorVector_ReturnValue2 = idx_227670;
    idx_227700 = CallFunc_BreakVector_Z3;
L_BB7:
    CallFunc_Subtract_VectorVector_ReturnValue2 = idx_227670;
    auto CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_BreakVector_Z3;
L_CC3:
    CallFunc_Add_VectorVector_ReturnValue2 = idx_227670;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_BreakVector_Z4;
    CallFunc_Add_VectorVector_ReturnValue2 = idx_227670;
    idx_227698 = CallFunc_BreakVector_Z4;
    return;
}

// Recovered Kismet: BP_Placement_HeightDrop_C::CheckMobilityState (2938 bytes)
void BP_Placement_HeightDrop_C::CheckMobilityState()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue2);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable3;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_196;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(StaticMeshComponent);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(idx_227699, CallFunc_Array_Get_Item3);
L_196:
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(InstancedStaticMeshComponent);
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_31D;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(InstancedStaticMeshComponent);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_227699, CallFunc_Array_Get_Item2);
L_31D:
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_227699);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    FString idx_227673 = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(EComponentMobility, CallFunc_Array_Get_Item);
    bool CallFunc_EqualEqual_StrStr_ReturnValue = UKismetStringLibrary::EqualEqual_StrStr(idx_227673);
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName();
    idx_227673 = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(EComponentMobility, CallFunc_Array_Get_Item);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(idx_227673);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetDisplayName_ReturnValue, CallFunc_Concat_StrStr_ReturnValue);
    FVector CallFunc_K2_GetActorLocation_ReturnValue = AActor::K2_GetActorLocation();
    auto CallFunc_MakeVector_ReturnValue = idx_227671;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetComponentLocation();
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
    auto idx_227659 = CallFunc_Subtract_VectorVector_ReturnValue;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, idx_227659);
    CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName();
    idx_227673 = UKismetNodeHelperLibrary::GetEnumeratorUserFriendlyName(EComponentMobility, CallFunc_Array_Get_Item);
    CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(idx_227673);
    CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetDisplayName_ReturnValue, CallFunc_Concat_StrStr_ReturnValue);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(CallFunc_Concat_StrStr_ReturnValue2);
    auto idx_227696 = idx_227696;
    idx_227696 = idx_227696;
    idx_227696 = idx_227696;
    idx_227696 = idx_227696;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Placement_HeightDrop_C::Get Valid Collision (2560 bytes)
void BP_Placement_HeightDrop_C::Get Valid Collision()
{
    bool idx_227712 = false;
    if (!idx_227692) goto L_965;
    bool Temp_bool_True_if_break_was_hit_Variable = false;
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_965;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto Pos = CallFunc_BreakHitResult_ImpactPoint;
    auto idx_227706 = CallFunc_BreakHitResult_ImpactNormal;
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_BreakHitResult_HitComponent;
    auto CallFunc_Not_PreBool_ReturnValue3 = CallFunc_BreakHitResult_HitActor;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue3;
    auto CallFunc_BooleanAND_ReturnValue3 = CallFunc_BooleanAND_ReturnValue2;
    auto CallFunc_BooleanAND_ReturnValue4 = CallFunc_BooleanAND_ReturnValue3;
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(CallFunc_BreakHitResult_HitComponent, idx_227713);
    auto CallFunc_Not_PreBool_ReturnValue4 = CallFunc_Array_Contains_ReturnValue;
    bool CallFunc_Array_Contains_ReturnValue2 = UKismetArrayLibrary::Array_Contains(idx_227710, CallFunc_BreakHitResult_PhysMat);
    auto CallFunc_Not_PreBool_ReturnValue5 = CallFunc_Array_Contains_ReturnValue2;
    auto CallFunc_BooleanAND_ReturnValue5 = CallFunc_Not_PreBool_ReturnValue5;
    auto CallFunc_BooleanAND_ReturnValue6 = CallFunc_BooleanAND_ReturnValue5;
    idx_227712 = CallFunc_BooleanAND_ReturnValue6;
    if (!idx_227712) goto L_94F;
    MergedCollisionComponent* idx_227695 = Cast<MergedCollisionComponent*>(CallFunc_BreakHitResult_HitComponent);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(idx_227695);
    if (!K2Node_DynamicCast_bSuccess) goto L_94F;
    auto CallFunc_GetOwner_ReturnValue = idx_227685->this->GetOwner();
    int idx_227674 = UKismetSystemLibrary::GetObjectNameAsCrc32(CallFunc_GetOwner_ReturnValue);
    int idx_227675 = idx_227695->GetOwningActorCrc32ByInstanceBodyIndex(CallFunc_BreakHitResult_HitItem);
    auto CallFunc_EqualEqual_IntInt_ReturnValue = idx_227675;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_94F;
    idx_227712 = false;
L_94F:
    Temp_bool_True_if_break_was_hit_Variable = true;
L_965:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Placement_HeightDrop_C::Drop Components (1791 bytes)
void BP_Placement_HeightDrop_C::Drop Components()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_227681);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    SceneComponent* K2Node_DynamicCast_AsScene_Component = Cast<SceneComponent*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsScene_Component);
    auto idx_227686 = K2Node_DynamicCast_AsScene_Component;
    FVector idx_227312 = AActor::GetActorScale3D();
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_BreakVector_Z2;
    auto idx_227707 = CallFunc_Multiply_FloatFloat_ReturnValue;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = K2Node_DynamicCast_AsScene_Component->K2_GetComponentLocation();
    auto CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
    bool CallFunc_LineTraceMultiForObjects_ReturnValue = UKismetSystemLibrary::LineTraceMultiForObjects(CallFunc_K2_GetComponentLocation_ReturnValue, CallFunc_Subtract_VectorVector_ReturnValue, K2Node_MakeArray_Array, true, Temp_object_Variable, CallFunc_LineTraceMultiForObjects_OutHits, true);
    Get Valid Collision(CallFunc_LineTraceMultiForObjects_OutHits, CallFunc_LineTraceMultiForObjects_ReturnValue, idx_227686, idx_227665, idx_227664, idx_227663);
    auto CallFunc_Add_FloatFloat_ReturnValue = idx_227707;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = idx_227663;
    auto CallFunc_Add_VectorVector_ReturnValue = idx_227664;
    bool idx_227658 = idx_227686->ComponentHasTag();
    auto CallFunc_Not_PreBool_ReturnValue = idx_227658;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = idx_227705;
    auto idx_227697 = CallFunc_BreakVector_Y3;
    auto idx_227660 = CallFunc_BreakVector_X3;
    auto idx_227679 = idx_227660;
    auto idx_227661 = CallFunc_BreakVector_Y3;
    auto CallFunc_FClamp_ReturnValue = idx_227679;
    auto idx_227662 = idx_227661;
    auto CallFunc_MakeRotator_ReturnValue = idx_227662;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_Placement_HeightDrop_C::UserConstructionScript (83 bytes)
void BP_Placement_HeightDrop_C::UserConstructionScript()
{
    CreateComponentList();
    Drop Components();
    CreateParentBounds();
    CheckMobilityState();
    return;
}
