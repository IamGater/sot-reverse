// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CliffGenerator_C::Draw_Debug_Numbers (1110 bytes)
void BP_CliffGenerator_C::Draw_Debug_Numbers()
{
    if (!idx_228454) goto L_453;
    auto idx_228491 = StartTangent;
    auto CallFunc_Add_VectorVector_ReturnValue = StartLocation;
    auto idx_228472 = CallFunc_Add_VectorVector_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Array_Get_Item2;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue2 = idx_228472;
    auto CallFunc_SelectRotator_ReturnValue = idx_228453;
    auto CallFunc_ComposeRotators_ReturnValue = idx_228491;
    auto CallFunc_MakeTransform_ReturnValue = CallFunc_Add_VectorVector_ReturnValue2;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, CallFunc_MakeTransform_ReturnValue);
    auto CallFunc_BooleanAND_ReturnValue = idx_228581;
    auto CallFunc_BooleanAND_ReturnValue2 = idx_228582;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanAND_ReturnValue2;
    auto Temp_bool_Variable = CallFunc_BooleanOR_ReturnValue;
    FString idx_228470 = UKismetStringLibrary::BuildString_Int(idx_228504);
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(idx_228470);
L_453:
    return;
}

// Recovered Kismet: BP_CliffGenerator_C::Deform_Terrain (5780 bytes)
void BP_CliffGenerator_C::Deform_Terrain()
{
    if (!idx_228451) goto L_C15;
    auto idx_228540 = ActorsToIgnore;
    if (!idx_228518) goto L_122;
L_122:
    int idx_228482 = idx_228515->GetNumberOfSplinePoints();
    auto CallFunc_Subtract_IntInt_ReturnValue = idx_228482;
    auto CallFunc_SelectInt_ReturnValue = idx_228559;
    auto idx_228544 = CallFunc_SelectInt_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable2;
    auto idx_228545 = Temp_int_Variable2;
    auto CallFunc_Conv_IntToFloat_ReturnValue = idx_228559;
    float idx_228485 = idx_228460->GetSplineLength();
    auto CallFunc_Divide_FloatFloat_ReturnValue = idx_228485;
    auto CallFunc_Multiply_IntFloat_ReturnValue = idx_228545;
    FVector idx_228478 = idx_228460->GetLocationAtDistanceAlongSpline(CallFunc_Multiply_IntFloat_ReturnValue);
    FVector idx_228481 = idx_228460->GetLocationAtSplinePoint(idx_228545);
    auto idx_228501 = idx_228478;
    auto idx_228554 = idx_228501;
    CallFunc_Conv_IntToFloat_ReturnValue = idx_228559;
    idx_228485 = idx_228460->GetSplineLength();
    CallFunc_Divide_FloatFloat_ReturnValue = idx_228485;
    CallFunc_Multiply_IntFloat_ReturnValue = idx_228545;
    auto CallFunc_MakeVector_ReturnValue3 = idx_228556;
    float idx_228477 = idx_228460->GetDistanceAlongSplineAtSplinePoint(idx_228545);
    auto CallFunc_SelectFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
    FVector idx_228486 = idx_228460->GetTangentAtDistanceAlongSpline(CallFunc_SelectFloat_ReturnValue);
    auto idx_228496 = CallFunc_MakeVector_ReturnValue3;
    auto CallFunc_Add_VectorVector_ReturnValue2 = idx_228496;
    auto idx_228525 = CallFunc_Add_VectorVector_ReturnValue2;
    CallFunc_Conv_IntToFloat_ReturnValue = idx_228559;
    idx_228485 = idx_228460->GetSplineLength();
    CallFunc_Divide_FloatFloat_ReturnValue = idx_228485;
    CallFunc_Multiply_IntFloat_ReturnValue = idx_228545;
    auto CallFunc_MakeVector_ReturnValue2 = idx_228557;
    idx_228477 = idx_228460->GetDistanceAlongSplineAtSplinePoint(idx_228545);
    CallFunc_SelectFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
    idx_228486 = idx_228460->GetTangentAtDistanceAlongSpline(CallFunc_SelectFloat_ReturnValue);
    auto CallFunc_RotateAngleAxis_ReturnValue = CallFunc_MakeVector_ReturnValue2;
    auto CallFunc_Add_VectorVector_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
    auto idx_228526 = CallFunc_Add_VectorVector_ReturnValue;
    bool CallFunc_LineTraceMultiForObjects_ReturnValue = UKismetSystemLibrary::LineTraceMultiForObjects(idx_228525, idx_228526, K2Node_MakeArray_Array, true, idx_228540, idx_228512, CallFunc_LineTraceMultiForObjects_OutHits, false);
    if (!CallFunc_LineTraceMultiForObjects_ReturnValue) goto L_11A6;
    bool Temp_bool_True_if_break_was_hit_Variable = false;
    auto CallFunc_Not_PreBool_ReturnValue2 = Temp_bool_True_if_break_was_hit_Variable;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_LineTraceMultiForObjects_OutHits);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue2;
    if (!CallFunc_BooleanAND_ReturnValue) goto L_157C;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto idx_228527 = CallFunc_Array_Get_Item;
    FName CallFunc_Conv_StringToName_ReturnValue = UKismetStringLibrary::Conv_StringToName(idx_228571);
    bool idx_228466 = CallFunc_BreakHitResult_HitActor->ActorHasTag(CallFunc_Conv_StringToName_ReturnValue);
    if (!idx_228466) goto L_1685;
    bool idx_228450 = false;
L_C15:
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(false, Temp_struct_Variable);
    auto idx_228515 = CallFunc_AddComponent_ReturnValue;
    int idx_228483 = idx_228460->GetNumberOfSplinePoints();
    auto CallFunc_Subtract_IntInt_ReturnValue2 = idx_228483;
    auto idx_228498 = idx_228559;
    auto idx_228489 = Temp_int_Variable;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = idx_228515->K2_GetComponentLocation();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable2;
    auto Temp_int_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_GetSocketLocation_ReturnValue = DefaultSceneRoot->GetSocketLocation();
    auto CallFunc_Subtract_VectorVector_ReturnValue = idx_228530;
    auto idx_227659 = CallFunc_Subtract_VectorVector_ReturnValue;
    UActorComponent* idx_228467 = AActor::AddComponent(false, idx_227659);
    auto idx_228497 = idx_228539;
    auto idx_228471 = idx_228497;
    auto CallFunc_Not_PreBool_ReturnValue = idx_228584;
    bool CallFunc_NotEqual_StrStr_ReturnValue = UKismetStringLibrary::NotEqual_StrStr(idx_228529, idx_228541);
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_NotEqual_StrStr_ReturnValue;
    auto idx_228499 = idx_228529;
    auto idx_228500 = idx_228499;
    FText CallFunc_Conv_StringToText_ReturnValue = UKismetTextLibrary::Conv_StringToText(idx_228500);
    auto idx_228541 = idx_228529;
L_11A6:
    bool idx_228539 = false;
    auto CallFunc_MakeVector_ReturnValue = idx_228520;
    auto CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_BreakHitResult_ImpactPoint;
    auto idx_228502 = CallFunc_Subtract_VectorVector_ReturnValue2;
    auto idx_228530 = idx_228502;
    CallFunc_MakeVector_ReturnValue = idx_228520;
    CallFunc_Subtract_VectorVector_ReturnValue2 = CallFunc_BreakHitResult_ImpactPoint;
    idx_228502 = CallFunc_Subtract_VectorVector_ReturnValue2;
    FString CallFunc_GetDisplayName_ReturnValue = UKismetSystemLibrary::GetDisplayName(CallFunc_BreakHitResult_HitActor);
    auto idx_228529 = CallFunc_GetDisplayName_ReturnValue;
L_157C:
    idx_228539 = CallFunc_BreakHitResult_bBlockingHit;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue3;
L_1685:
    Temp_bool_True_if_break_was_hit_Variable = true;
    return;
}

// Recovered Kismet: BP_CliffGenerator_C::Build_Element (4048 bytes)
void BP_CliffGenerator_C::Build_Element()
{
    auto idx_228531 = Index;
    auto CallFunc_Add_IntInt_ReturnValue = Index;
    auto CallFunc_Percent_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
    auto idx_228543 = CallFunc_Percent_IntInt_ReturnValue;
    auto idx_228534 = idx_228513;
    FTransform CallFunc_K2_GetComponentToWorld_ReturnValue = DefaultSceneRoot->K2_GetComponentToWorld();
    auto idx_228461 = CallFunc_BreakTransform_Location;
    CallFunc_K2_GetComponentToWorld_ReturnValue = DefaultSceneRoot->K2_GetComponentToWorld();
    auto idx_228495 = CallFunc_BreakTransform_Rotation;
    auto idx_228521 = idx_228495;
    auto idx_228549 = CallFunc_Array_Get_Item2;
    auto idx_227289 = CallFunc_Array_Get_Item2;
    auto idx_228550 = idx_227289;
    auto idx_228536 = CallFunc_Array_Get_Item;
    auto CallFunc_MakeVector2D_ReturnValue = CallFunc_Array_Get_Item;
    auto idx_228537 = CallFunc_MakeVector2D_ReturnValue;
    auto idx_228542 = idx_228548;
    auto idx_228548 = idx_228535;
    auto idx_228535 = idx_228542;
    auto idx_228488 = idx_228551;
    auto idx_228553 = idx_228488;
    auto idx_228487 = idx_228538;
    auto idx_228551 = idx_228487;
    auto idx_228538 = idx_228553;
    auto idx_228546 = idx_228549;
    idx_228549 = idx_228536;
    idx_228536 = idx_228546;
    auto idx_228547 = idx_228550;
    idx_228550 = idx_228537;
    idx_228537 = idx_228547;
    if (!idx_228583) goto L_8F0;
    UActorComponent* idx_228468 = AActor::AddComponent(false, Temp_struct_Variable);
    auto idx_228532 = idx_228468;
    bool CallFunc_SetStaticMesh_ReturnValue3 = idx_228532->SetStaticMesh(idx_228534);
    idx_228532 = idx_228532;
    auto Temp_bool_Variable = idx_228503;
    idx_228532 = idx_228532;
L_8F0:
    auto CallFunc_Divide_FloatFloat_ReturnValue = idx_228562;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector2D_X;
    auto idx_228492 = idx_228531;
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    FRotator idx_228484 = idx_228460->GetRotationAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue);
    FVector idx_228478 = idx_228460->GetLocationAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue);
    auto CallFunc_MakeTransform_ReturnValue = idx_228478;
    auto idx_228552 = CallFunc_MakeTransform_ReturnValue;
    if (!idx_228519) goto L_B47;
    UActorComponent* CallFunc_AddComponent_ReturnValue = AActor::AddComponent(true, idx_228552);
    bool CallFunc_SetStaticMesh_ReturnValue2 = CallFunc_AddComponent_ReturnValue->SetStaticMesh(idx_228534);
    int CallFunc_AddInstanceWorldSpace_ReturnValue = CallFunc_AddComponent_ReturnValue->AddInstanceWorldSpace(idx_228552);
L_B47:
    UActorComponent* idx_228467 = AActor::AddComponent(true, idx_228552);
    bool CallFunc_SetStaticMesh_ReturnValue = idx_228467->SetStaticMesh(idx_228534);
    Draw_Debug_Numbers(idx_228531, idx_228543, idx_228548, idx_228535, idx_228551);
    auto CallFunc_Multiply_IntFloat_ReturnValue2 = idx_228531;
    auto idx_228494 = idx_228531;
    auto CallFunc_Add_FloatFloat_ReturnValue3 = idx_228494;
    FVector idx_228480 = idx_228460->GetLocationAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue3);
    idx_228548 = idx_228480;
    CallFunc_Multiply_IntFloat_ReturnValue2 = idx_228531;
    idx_228494 = idx_228531;
    CallFunc_Add_FloatFloat_ReturnValue3 = idx_228494;
    FVector idx_228476 = idx_228460->GetDirectionAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue3);
    auto CallFunc_Multiply_VectorFloat_ReturnValue2 = idx_228476;
    idx_228551 = CallFunc_Multiply_VectorFloat_ReturnValue2;
    auto CallFunc_Multiply_IntFloat_ReturnValue = idx_228543;
    auto idx_228493 = idx_228543;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Multiply_IntFloat_ReturnValue;
    FVector idx_228479 = idx_228460->GetLocationAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue2);
    idx_228535 = idx_228479;
    CallFunc_Multiply_IntFloat_ReturnValue = idx_228543;
    idx_228493 = idx_228543;
    CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Multiply_IntFloat_ReturnValue;
    FVector idx_228475 = idx_228460->GetDirectionAtDistanceAlongSpline(CallFunc_Add_FloatFloat_ReturnValue2);
    auto CallFunc_Multiply_VectorFloat_ReturnValue = idx_228475;
    idx_228538 = CallFunc_Multiply_VectorFloat_ReturnValue;
    return;
}

// Recovered Kismet: BP_CliffGenerator_C::UserConstructionScript (2901 bytes)
void BP_CliffGenerator_C::UserConstructionScript()
{
    auto idx_228490 = idx_228563;
    auto idx_228458 = idx_228490;
    if (!idx_228568) goto L_85F;
    auto CallFunc_Conv_IntToFloat_ReturnValue = idx_228560;
    float idx_228485 = idx_228460->GetSplineLength();
    auto CallFunc_Divide_FloatFloat_ReturnValue = idx_228485;
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto idx_228562 = CallFunc_Add_FloatFloat_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = idx_228560;
    auto idx_228561 = CallFunc_Add_IntInt_ReturnValue;
    if (!idx_228555) goto L_239;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_228505);
    auto CallFunc_Less_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_A69;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_228505, idx_228507);
L_239:
    bool idx_228555 = true;
    auto CallFunc_Subtract_IntInt_ReturnValue = idx_228561;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    auto CallFunc_EqualEqual_IntInt_ReturnValue2 = Temp_int_Variable;
    auto idx_228524 = CallFunc_EqualEqual_IntInt_ReturnValue2;
    CallFunc_Subtract_IntInt_ReturnValue = idx_228561;
    auto CallFunc_EqualEqual_IntInt_ReturnValue = Temp_int_Variable;
    auto idx_228523 = CallFunc_EqualEqual_IntInt_ReturnValue;
    auto CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_Array_Get_Item;
    auto idx_228585 = CallFunc_NotEqual_IntInt_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = idx_228581;
    auto CallFunc_BooleanAND_ReturnValue2 = idx_228582;
    auto Temp_bool_Variable = CallFunc_BooleanAND_ReturnValue2;
    auto Temp_bool_Variable2 = CallFunc_BooleanAND_ReturnValue;
    int idx_228469 = UKismetArrayLibrary::Array_LastIndex(idx_228564);
    auto CallFunc_RandomIntegerFromStream_ReturnValue = idx_228469;
    auto CallFunc_SelectInt_ReturnValue = CallFunc_Array_Get_Item;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid();
    CallFunc_BooleanAND_ReturnValue = idx_228581;
    CallFunc_BooleanAND_ReturnValue2 = idx_228582;
    Temp_bool_Variable = CallFunc_BooleanAND_ReturnValue2;
    Temp_bool_Variable2 = CallFunc_BooleanAND_ReturnValue;
    idx_228469 = UKismetArrayLibrary::Array_LastIndex(idx_228564);
    CallFunc_RandomIntegerFromStream_ReturnValue = idx_228469;
    CallFunc_SelectInt_ReturnValue = CallFunc_Array_Get_Item;
    Build_Element(Temp_int_Variable);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue2;
    Deform_Terrain();
L_85F:
    idx_228485 = idx_228460->GetSplineLength();
    auto idx_228474 = idx_228485;
    auto CallFunc_Add_IntInt_ReturnValue3 = idx_228474;
    idx_228561 = CallFunc_Add_IntInt_ReturnValue3;
    idx_228485 = idx_228460->GetSplineLength();
    idx_228474 = idx_228485;
    auto idx_228560 = idx_228474;
    auto CallFunc_Conv_IntToFloat_ReturnValue2 = idx_228561;
    idx_228485 = idx_228460->GetSplineLength();
    idx_228474 = idx_228485;
    auto CallFunc_Divide_FloatFloat_ReturnValue2 = idx_228473;
    auto idx_228570 = CallFunc_Divide_FloatFloat_ReturnValue2;
L_A69:
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_228505);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_B46;
    int CallFunc_Array_LastIndex_ReturnValue = UKismetArrayLibrary::Array_LastIndex(idx_228505);
L_B46:
    idx_228555 = false;
    return;
}
