// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Placement_Functions_C::Set Mesh (594 bytes)
void BP_Placement_Functions_C::Set Mesh()
{
    auto CallFunc_MakeVector_ReturnValue = Radius;
    auto RotationVector = CallFunc_MakeVector_ReturnValue;
    auto CallFunc_Conv_IntToFloat_ReturnValue = Segments;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
    auto AngleStep = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_1E5;
    auto CallFunc_Multiply_IntFloat_ReturnValue = Temp_int_Variable;
    auto CallFunc_RotateAngleAxis_ReturnValue = RotationVector;
    auto CallFunc_Add_VectorVector_ReturnValue = Centre;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(RadialPositions, CallFunc_Add_VectorVector_ReturnValue);
L_1E5:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    bool Temp_bool_True_if_break_was_hit_Variable = false;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_2AC;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_14B:
    auto CallFunc_Not_PreBool_ReturnValue2 = CallFunc_BreakHitResult_HitComponent;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_BreakHitResult_HitActor;
    auto CallFunc_BooleanOR_ReturnValue2 = CallFunc_BooleanOR_ReturnValue;
    if (!CallFunc_BooleanOR_ReturnValue2) goto L_329;
L_2AC:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_329:
    auto OutputHit = CallFunc_Array_Get_Item;
    bool Valid = true;
    Temp_bool_True_if_break_was_hit_Variable = true;
    return;
    auto CallFunc_Multiply_VectorFloat_ReturnValue = Extent;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_BreakVector_Y;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_RandomFloatFromStream_ReturnValue2;
    auto CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue2;
    auto CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue3;
    auto CallFunc_MakeVector_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue4;
    auto CallFunc_Add_VectorVector_ReturnValue2 = Centre;
    auto Centre = CallFunc_Add_VectorVector_ReturnValue2;
    auto CallFunc_MakeTransform_ReturnValue = Centre;
    CallFunc_Multiply_VectorFloat_ReturnValue = Extent;
    auto CallFunc_Multiply_VectorFloat_ReturnValue2 = Centre;
    auto CallFunc_MakeTransform_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue2;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_BreakVector_Z;
    auto CallFunc_ComposeTransforms_ReturnValue = CallFunc_MakeTransform_ReturnValue2;
    CallFunc_MakeVector_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_Subtract_VectorVector_ReturnValue = Centre;
    auto CallFunc_TransformLocation_ReturnValue = CallFunc_ComposeTransforms_ReturnValue;
    CallFunc_Add_VectorVector_ReturnValue = Centre;
    auto CallFunc_TransformLocation_ReturnValue2 = CallFunc_ComposeTransforms_ReturnValue;
    return;
    auto Spawn = Spawn;
    auto Position = Position;
    auto Radius = Radius;
    Radius = Radius;
    auto Seed = Seed;
    Set Spawn Properties(Spawn, Seed, Radius, __WorldContext, CallFunc_Set_Spawn_Properties_Cast_Success);
    if (!CallFunc_Set_Spawn_Properties_Cast_Success) goto L_2F1;
    CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Blast, K2Node_MakeStruct_LinearColor);
    bool CallFunc_DoesImplementInterface_ReturnValue = UKismetSystemLibrary::DoesImplementInterface(Spawn, Interface_Bomb_C);
    if (!CallFunc_DoesImplementInterface_ReturnValue) goto L_31A;
    TScriptInterface<UInterface_Bomb_C> UniqueObjectNameForCooking_AsInterface_Bomb = TScriptInterface<UInterface_Bomb_C>(Spawn);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Bomb);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_2D1;
L_2AC:
L_2D1:
L_2F1:
L_31A:
L_332:
    Spawn = Spawn;
    return;
L_36A:
    auto idx_6459 = A;
    auto idx_6460 = B;
    bool CallFunc_NotEqual_StrStr_ReturnValue = UKismetStringLibrary::NotEqual_StrStr(idx_6460);
    bool CallFunc_EqualEqual_StriStri_ReturnValue = UKismetStringLibrary::EqualEqual_StriStri(idx_6460);
    bool CallFunc_EqualEqual_StriStri_ReturnValue2 = UKismetStringLibrary::EqualEqual_StriStri(idx_6459);
    CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
    CallFunc_BooleanAND_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue2;
    bool CallFunc_EqualEqual_StriStri_ReturnValue3 = UKismetStringLibrary::EqualEqual_StriStri(idx_6460);
    bool CallFunc_EqualEqual_StriStri_ReturnValue4 = UKismetStringLibrary::EqualEqual_StriStri(idx_6460);
    bool CallFunc_EqualEqual_StriStri_ReturnValue5 = UKismetStringLibrary::EqualEqual_StriStri(idx_6460);
    CallFunc_BooleanOR_ReturnValue2 = CallFunc_EqualEqual_StriStri_ReturnValue5;
    bool CallFunc_EqualEqual_StriStri_ReturnValue6 = UKismetStringLibrary::EqualEqual_StriStri(idx_6459);
    auto CallFunc_BooleanOR_ReturnValue3 = CallFunc_BooleanOR_ReturnValue2;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_EqualEqual_StriStri_ReturnValue6;
    bool CallFunc_EqualEqual_StriStri_ReturnValue7 = UKismetStringLibrary::EqualEqual_StriStri(idx_6459);
    auto CallFunc_BooleanAND_ReturnValue3 = CallFunc_EqualEqual_StriStri_ReturnValue7;
L_2F1:
    auto CallFunc_BooleanOR_ReturnValue4 = CallFunc_BooleanAND_ReturnValue3;
    auto CallFunc_BooleanOR_ReturnValue5 = CallFunc_BooleanOR_ReturnValue4;
    return;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Input);
    bool Found = false;
    Temp_bool_True_if_break_was_hit_Variable = false;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Input);
    CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_33F;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    FString CallFunc_Conv_NameToString_ReturnValue = UKismetStringLibrary::Conv_NameToString(CallFunc_Array_Get_Item);
    bool CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(K2Node_MakeArray_Array, CallFunc_Conv_NameToString_ReturnValue);
    Found = true;
    CallFunc_Conv_NameToString_ReturnValue = UKismetStringLibrary::Conv_NameToString(CallFunc_Array_Get_Item);
    auto Placement = CallFunc_Conv_NameToString_ReturnValue;
    Temp_bool_True_if_break_was_hit_Variable = true;
L_33F:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto In = Input;
    bool Out = false;
    Get Actor Placement Asset Type(In, __WorldContext, CallFunc_Get_Actor_Placement_Asset_Type_Returning_Tag, CallFunc_Get_Actor_Placement_Asset_Type_Asset_Tag);
    auto Actor = CallFunc_Get_Actor_Placement_Asset_Type_Asset_Tag;
    Temp_bool_True_if_break_was_hit_Variable = false;
    CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = In->GetComponentsByClass(StaticMeshComponent);
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_1DA;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    if (!Out) goto L_257;
    Temp_bool_True_if_break_was_hit_Variable = true;
L_1DA:
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_257:
    CallFunc_GetComponentsByClass_ReturnValue = In->GetComponentsByClass(StaticMeshComponent);
L_2CD:
    StaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component = Cast<StaticMeshComponent*>(CallFunc_Array_Get_Item);
L_2F1:
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Component);
    auto CallFunc_GetTransform_ReturnValue = In->this->GetTransform();
    bool CallFunc_ComponentOverlapActors_NEW_ReturnValue = UKismetSystemLibrary::ComponentOverlapActors_NEW(K2Node_DynamicCast_AsStatic_Mesh_Component, CallFunc_GetTransform_ReturnValue, K2Node_MakeArray_Array2, Actor, K2Node_MakeArray_Array, CallFunc_ComponentOverlapActors_NEW_OutActors);
    bool Temp_bool_True_if_break_was_hit_Variable2 = false;
    CallFunc_Not_PreBool_ReturnValue2 = Temp_bool_True_if_break_was_hit_Variable2;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_ComponentOverlapActors_NEW_OutActors);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    CallFunc_BooleanAND_ReturnValue2 = CallFunc_Not_PreBool_ReturnValue2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    Get Actor Placement Asset Type(CallFunc_Array_Get_Item2, __WorldContext, CallFunc_Get_Actor_Placement_Asset_Type_Returning_Tag2, CallFunc_Get_Actor_Placement_Asset_Type_Asset_Tag2);
    auto Overlap = CallFunc_Get_Actor_Placement_Asset_Type_Asset_Tag2;
    Does A Delete B(Overlap, Actor, __WorldContext, CallFunc_Does_A_Delete_B_Return2);
    if (!CallFunc_Does_A_Delete_B_Return2) goto L_5C8;
    Out = true;
    Temp_bool_True_if_break_was_hit_Variable2 = true;
L_5C8:
    Does A Delete B(Actor, Overlap, __WorldContext, CallFunc_Does_A_Delete_B_Return);
    CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Delete, CallFunc_Array_Get_Item2);
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto Location = Location;
    auto Normal = Normal;
    auto CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
    auto Scale = CallFunc_MapRangeUnclamped_ReturnValue;
    auto CallFunc_MakeRotFromZ_ReturnValue = Normal;
    CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue2;
    auto CallFunc_SelectRotator_ReturnValue = CallFunc_MakeRotFromZ_ReturnValue;
    auto CallFunc_MakeRotator_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_ComposeRotators_ReturnValue = CallFunc_MakeRotator_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue2 = Selected;
    CallFunc_MakeVector_ReturnValue = Scale;
    CallFunc_Multiply_VectorFloat_ReturnValue = Normal;
    CallFunc_Subtract_VectorVector_ReturnValue = Location;
    CallFunc_MakeTransform_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_14B;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Local, CallFunc_Array_Get_Item);
L_14B:
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Local);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_2A4;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_FloatFloat_ReturnValue = Probability;
    auto Probability = CallFunc_Add_FloatFloat_ReturnValue;
L_2A4:
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Local);
    CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Array_Get_Item2;
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(CallFunc_Divide_FloatFloat_ReturnValue);
    CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto Generator = Generator;
    Spawn = Spawn;
    Spawn = Spawn;
    Actor = Actor;
    bool Permission = false;
    Calculate Index from Probabilities(CallFunc_RandomFloatFromStream_ReturnValue2, Mesh, __WorldContext, CallFunc_Calculate_Index_from_Probabilities_Index);
    auto Mesh = CallFunc_Calculate_Index_from_Probabilities_Index;
    auto Selected = CallFunc_Array_Get_Item;
    CallFunc_GetTransform_ReturnValue = Actor->this->GetTransform();
    FVector CallFunc_K2_GetActorLocation_ReturnValue = Actor->K2_GetActorLocation();
    Generate Random Radial Raycast(Generator, CallFunc_K2_GetActorLocation_ReturnValue, Spawn, Spawn, CallFunc_GetTransform_ReturnValue, __WorldContext, CallFunc_Generate_Random_Radial_Raycast_Raycast_Start, CallFunc_Generate_Random_Radial_Raycast_Raycast_End);
    auto Raycast = CallFunc_Generate_Random_Radial_Raycast_Raycast_Start;
    Raycast = CallFunc_Generate_Random_Radial_Raycast_Raycast_End;
    bool CallFunc_LineTraceMultiForObjects_ReturnValue = UKismetSystemLibrary::LineTraceMultiForObjects(__WorldContext, Raycast, Raycast, K2Node_MakeArray_Array2, false, K2Node_MakeArray_Array, CallFunc_LineTraceMultiForObjects_OutHits, true);
L_342:
    if (!CallFunc_LineTraceMultiForObjects_ReturnValue) goto L_8C4;
    Get First Valid Hit(CallFunc_LineTraceMultiForObjects_OutHits, __WorldContext, CallFunc_Get_First_Valid_Hit_Is_Valid_Hit, CallFunc_Get_First_Valid_Hit_Hit);
    if (!CallFunc_Get_First_Valid_Hit_Is_Valid_Hit) goto L_8C4;
    Position = CallFunc_BreakHitResult_ImpactPoint;
    Normal = CallFunc_BreakHitResult_ImpactNormal;
    Get Mesh Instance Transform(Selected, Position, Normal, __WorldContext, CallFunc_Get_Mesh_Instance_Transform_Transform);
    auto Transform = CallFunc_Get_Mesh_Instance_Transform_Transform;
    CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_BreakVector_X;
    Radius = CallFunc_Multiply_FloatFloat_ReturnValue;
    Check Surface Materials(Physical, CallFunc_BreakHitResult_PhysMat, __WorldContext, CallFunc_Check_Surface_Materials_Placement_Permission);
    if (!CallFunc_Check_Surface_Materials_Placement_Permission) goto L_8C4;
    Check Height(Position, Selected, __WorldContext, CallFunc_Check_Height_Placement_Permission);
    if (!CallFunc_Check_Height_Placement_Permission) goto L_8C4;
    Check Slope(Normal, Selected, __WorldContext, CallFunc_Check_Slope_Placement_Permission);
    if (!CallFunc_Check_Slope_Placement_Permission) goto L_8C4;
    auto CallFunc_Greater_FloatFloat_ReturnValue = Selected;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_8B9;
    Check Radius Overlap(Position, Radius, Selected, Mesh, __WorldContext, CallFunc_Check_Radius_Overlap_Placement_Permission);
    if (!CallFunc_Check_Radius_Overlap_Placement_Permission) goto L_8C4;
L_8B9:
    Permission = true;
L_8C4:
    return;
    Generator = Generator;
    Spawn = Spawn;
    auto Box = Box;
    Actor = Actor;
    Permission = false;
    Calculate Index from Probabilities(CallFunc_RandomFloatFromStream_ReturnValue2, Charge, __WorldContext, CallFunc_Calculate_Index_from_Probabilities_Index);
    Selected = CallFunc_Array_Get_Item;
    if (!Box) goto L_7FD;
    Generate Random Box Raycast(CallFunc_GetActorBounds_Origin, CallFunc_GetActorBounds_BoxExtent, __WorldContext, CallFunc_Generate_Random_Box_Raycast_Raycast_Start, CallFunc_Generate_Random_Box_Raycast_Raycast_End);
    Raycast = CallFunc_Generate_Random_Box_Raycast_Raycast_Start;
    Raycast = CallFunc_Generate_Random_Box_Raycast_Raycast_End;
    bool CallFunc_LineTraceSingleForObjects_ReturnValue = UKismetSystemLibrary::LineTraceSingleForObjects(__WorldContext, Raycast, Raycast, K2Node_MakeArray_Array2, false, K2Node_MakeArray_Array, CallFunc_LineTraceSingleForObjects_OutHit, true);
    if (!CallFunc_LineTraceSingleForObjects_ReturnValue) goto L_794;
    Normal = CallFunc_BreakHitResult_ImpactNormal;
    CallFunc_Multiply_VectorFloat_ReturnValue = Normal;
    CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_BreakHitResult_ImpactPoint;
    Position = CallFunc_Subtract_VectorVector_ReturnValue;
    CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
    Radius = CallFunc_MapRangeUnclamped_ReturnValue;
    Check Surface Materials(Physical, CallFunc_BreakHitResult_PhysMat, __WorldContext, CallFunc_Check_Surface_Materials_Placement_Permission);
    if (!CallFunc_Check_Surface_Materials_Placement_Permission) goto L_794;
    Check Height(Position, Selected, __WorldContext, CallFunc_Check_Height_Placement_Permission);
    if (!CallFunc_Check_Height_Placement_Permission) goto L_794;
    Check Slope(Normal, Selected, __WorldContext, CallFunc_Check_Slope_Placement_Permission);
    if (!CallFunc_Check_Slope_Placement_Permission) goto L_794;
    CallFunc_Greater_FloatFloat_ReturnValue = Selected;
    if (!CallFunc_Greater_FloatFloat_ReturnValue) goto L_789;
    Check Radius Overlap(Position, Radius, Selected, Blast, __WorldContext, CallFunc_Check_Radius_Overlap_Placement_Permission);
    if (!CallFunc_Check_Radius_Overlap_Placement_Permission) goto L_794;
L_789:
    Permission = true;
L_794:
L_7FD:
    Generate Random Radial Raycast(Generator, CallFunc_GetActorBounds_Origin, Spawn, __WorldContext, CallFunc_Generate_Random_Radial_Raycast_Raycast_Start, CallFunc_Generate_Random_Radial_Raycast_Raycast_End);
    Raycast = CallFunc_Generate_Random_Radial_Raycast_Raycast_Start;
    Raycast = CallFunc_Generate_Random_Radial_Raycast_Raycast_End;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    auto CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_EqualEqual_IntInt_ReturnValue) goto L_154;
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(Placement);
    FString CallFunc_GetSubstring_ReturnValue = UKismetStringLibrary::GetSubstring(CallFunc_GetDisplayName_ReturnValue);
    bool CallFunc_EqualEqual_StrStr_ReturnValue = UKismetStringLibrary::EqualEqual_StrStr(CallFunc_GetSubstring_ReturnValue);
    auto Output = CallFunc_EqualEqual_StrStr_ReturnValue;
L_154:
    CallFunc_Array_Contains_ReturnValue = UKismetArrayLibrary::Array_Contains(Placement);
    Output = CallFunc_Array_Contains_ReturnValue;
    return;
    auto CallFunc_Dot_VectorVector_ReturnValue = Normal;
    auto CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
    return;
    CallFunc_InRange_FloatFloat_ReturnValue = CallFunc_BreakVector_Z;
    return;
    bool Permit = true;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_260;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    CallFunc_MakeVector_ReturnValue = CallFunc_BreakColor_R;
    CallFunc_Subtract_VectorVector_ReturnValue = Position;
    auto CallFunc_VSize_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    Permit = false;
L_260:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    Radius = Radius;
    Seed = Seed;
    bool Success = true;
    CallFunc_DoesImplementInterface_ReturnValue = UKismetSystemLibrary::DoesImplementInterface(Object, Interface_Garden_C);
    if (!CallFunc_DoesImplementInterface_ReturnValue) goto L_1D1;
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming = Cast<ULevelStreaming*>(Object);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_342;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue = UniqueObjectNameForCooking_AsLevel_Streaming->GetLevelScriptActor();
    auto Temp_object_Variable2 = CallFunc_GetLevelScriptActor_ReturnValue;
    TScriptInterface<UInterface_Garden_C> UniqueObjectNameForCooking_AsInterface_Garden = TScriptInterface<UInterface_Garden_C>(Temp_object_Variable2);
    bool UniqueObjectNameForCooking_bSuccess4 = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Garden);
    if (!UniqueObjectNameForCooking_bSuccess4) goto L_35A;
    Success = CallFunc_Set_Garden_Parameters_Instances_Created;
L_1B9:
L_1D1:
    bool CallFunc_DoesImplementInterface_ReturnValue2 = UKismetSystemLibrary::DoesImplementInterface(Object, Interface_Bomb_C);
    if (!CallFunc_DoesImplementInterface_ReturnValue2) goto L_332;
    ULevelStreaming* UniqueObjectNameForCooking_AsLevel_Streaming2 = Cast<ULevelStreaming*>(Object);
    bool UniqueObjectNameForCooking_bSuccess3 = static_cast<bool>(UniqueObjectNameForCooking_AsLevel_Streaming2);
    if (!UniqueObjectNameForCooking_bSuccess3) goto L_36A;
    ALevelScriptActor* CallFunc_GetLevelScriptActor_ReturnValue2 = UniqueObjectNameForCooking_AsLevel_Streaming2->GetLevelScriptActor();
    auto Temp_object_Variable = CallFunc_GetLevelScriptActor_ReturnValue2;
    UniqueObjectNameForCooking_AsInterface_Bomb = TScriptInterface<UInterface_Bomb_C>(Temp_object_Variable);
    UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Bomb);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_1B9;
L_332:
    Success = false;
L_342:
    Temp_object_Variable2 = Object;
L_35A:
    bool CallFunc_Set_Garden_Parameters_Instances_Created = false;
L_36A:
    Temp_object_Variable = Object;
    return;
    CallFunc_Multiply_VectorFloat_ReturnValue = Extent;
    CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_BreakVector_Y;
    CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_RandomFloatFromStream_ReturnValue2;
    CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Subtract_FloatFloat_ReturnValue2;
    CallFunc_Multiply_FloatFloat_ReturnValue4 = CallFunc_Multiply_FloatFloat_ReturnValue3;
    CallFunc_MakeVector_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue4;
    CallFunc_Add_VectorVector_ReturnValue2 = Centre;
    Centre = CallFunc_Add_VectorVector_ReturnValue2;
    CallFunc_Multiply_VectorFloat_ReturnValue = Extent;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_BreakVector_Z;
L_2A4:
    CallFunc_MakeVector_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    CallFunc_Subtract_VectorVector_ReturnValue = Centre;
    CallFunc_Add_VectorVector_ReturnValue = Centre;
    return;
    CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_BreakVector_X;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_FFloor_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue2;
    return;
    CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_RandomFloatFromStream_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
    CallFunc_MakeRotator_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue2;
    auto CallFunc_GetForwardVector_ReturnValue = CallFunc_MakeRotator_ReturnValue;
    auto CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_RandomFloatFromStream_ReturnValue2;
    CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Multiply_FloatFloat_ReturnValue;
    CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
    CallFunc_Add_VectorVector_ReturnValue2 = CallFunc_Multiply_VectorFloat_ReturnValue;
    auto Random = CallFunc_Add_VectorVector_ReturnValue2;
    CallFunc_Add_FloatFloat_ReturnValue = Radius;
    CallFunc_MakeVector_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
L_2AC:
    CallFunc_Subtract_VectorVector_ReturnValue = Random;
    CallFunc_Add_VectorVector_ReturnValue = Random;
    return;
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    Output = CallFunc_Subtract_IntInt_ReturnValue;
    Temp_bool_True_if_break_was_hit_Variable = false;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_26B;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Array_Get_Item;
    auto CallFunc_Less_FloatFloat_ReturnValue = Random;
    if (!CallFunc_Less_FloatFloat_ReturnValue) goto L_2D5;
    Output = Temp_int_Array_Index_Variable;
    Temp_bool_True_if_break_was_hit_Variable = true;
L_26B:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_2D5:
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Array_Get_Item;
    Probability = CallFunc_Add_FloatFloat_ReturnValue;
L_35A:
    return;
    CallFunc_Multiply_FloatFloat_ReturnValue = Radius;
    CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_MultiplyByPi_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue2;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_MultiplyByPi_ReturnValue;
    CallFunc_Multiply_FloatFloat_ReturnValue3 = CallFunc_Divide_FloatFloat_ReturnValue;
    CallFunc_FFloor_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue3;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length();
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_14B;
    Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable3;
    CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Local, CallFunc_Array_Get_Item);
L_14B:
L_1B9:
    CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(Local);
    CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_2CD;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_Add_FloatFloat_ReturnValue = Probability;
    Probability = CallFunc_Add_FloatFloat_ReturnValue;
L_2CD:
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Local);
    CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Array_Get_Item2;
    CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(CallFunc_Divide_FloatFloat_ReturnValue);
    CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}
