// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::AddRandomRippleGenerator (471 bytes)
void BP_WaterVolume_PirateHideOut_C::AddRandomRippleGenerator()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(RippleGenerators);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(RippleLocations, CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::CollectRippleGenerators (921 bytes)
void BP_WaterVolume_PirateHideOut_C::CollectRippleGenerators()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByTag_ReturnValue = AActor::GetComponentsByTag(SceneComponent, RippleGeneratorTag);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByTag_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByTag_ReturnValue = AActor::GetComponentsByTag(SceneComponent, RippleGeneratorTag);
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetComponentLocation();
    auto CallFunc_ConvertToWaterSpace_ReturnValue = FlatWaterPlane->this->ConvertToWaterSpace(CallFunc_K2_GetComponentLocation_ReturnValue);
    CallFunc_GetComponentsByTag_ReturnValue = AActor::GetComponentsByTag(SceneComponent, RippleGeneratorTag);
    FVector CallFunc_K2_GetComponentScale_ReturnValue = CallFunc_Array_Get_Item->K2_GetComponentScale();
    auto CallFunc_GetMaxElement_ReturnValue = CallFunc_K2_GetComponentScale_ReturnValue;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector2D_X;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(RippleGenerators, CallFunc_MakeVector_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::AddRipplesFromOverlappingActors (1216 bytes)
void BP_WaterVolume_PirateHideOut_C::AddRipplesFromOverlappingActors()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(OverlappingActors);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_GetVelocity_ReturnValue = CallFunc_Array_Get_Item->GetVelocity();
    auto CallFunc_VSize_ReturnValue = CallFunc_GetVelocity_ReturnValue;
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_VSize_ReturnValue;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = FlatWaterMesh->K2_GetComponentLocation();
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = FlatWaterMesh->K2_GetComponentRotation();
    auto CallFunc_GetUpVector_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
    FVector CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
    DistanceToPlane(CallFunc_K2_GetActorLocation_ReturnValue, CallFunc_K2_GetComponentLocation_ReturnValue, CallFunc_GetUpVector_ReturnValue, idx_227287);
    auto CallFunc_InRange_FloatFloat_ReturnValue = idx_227287;
    CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetActorLocation();
    auto CallFunc_ConvertToWaterSpace_ReturnValue = FlatWaterPlane->this->ConvertToWaterSpace(CallFunc_K2_GetActorLocation_ReturnValue);
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector2D_X;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(RippleLocations, CallFunc_MakeVector_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::AddRandomLocalRipple (843 bytes)
void BP_WaterVolume_PirateHideOut_C::AddRandomLocalRipple()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(RippleLocations);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_348;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(RippleLocations);
    auto CallFunc_Multiply_VectorFloat_ReturnValue = idx_227291;
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    auto CallFunc_MakeVector2D_ReturnValue = CallFunc_BreakVector_X;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto idx_227289 = CallFunc_BreakVector_X2;
    auto idx_227290 = CallFunc_MakeVector2D_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
    auto idx_227286 = idx_227289;
    auto CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue;
L_348:
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::DistanceToPlane (122 bytes)
void BP_WaterVolume_PirateHideOut_C::DistanceToPlane()
{
    auto CallFunc_Subtract_VectorVector_ReturnValue = Location;
    auto CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::UpdateWaterPlane (180 bytes)
void BP_WaterVolume_PirateHideOut_C::UpdateWaterPlane()
{
    auto idx_227288 = CurrentAmount;
    auto CurrentAmount = idx_227288;
    auto CallFunc_MakeVector_ReturnValue = CurrentAmount;
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::UserConstructionScript (3 bytes)
void BP_WaterVolume_PirateHideOut_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::ReceiveBeginPlay (22 bytes)
void BP_WaterVolume_PirateHideOut_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_WaterVolume_PirateHideOut();
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::ReceiveTick (40 bytes)
void BP_WaterVolume_PirateHideOut_C::ReceiveTick()
{
    ExecuteUbergraph_BP_WaterVolume_PirateHideOut();
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::ReceiveActorBeginOverlap (40 bytes)
void BP_WaterVolume_PirateHideOut_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_WaterVolume_PirateHideOut();
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::ReceiveActorEndOverlap (40 bytes)
void BP_WaterVolume_PirateHideOut_C::ReceiveActorEndOverlap()
{
    ExecuteUbergraph_BP_WaterVolume_PirateHideOut();
    return;
}

// Recovered Kismet: BP_WaterVolume_PirateHideOut_C::ExecuteUbergraph_BP_WaterVolume_PirateHideOut (415 bytes)
void BP_WaterVolume_PirateHideOut_C::ExecuteUbergraph_BP_WaterVolume_PirateHideOut()
{
    int CallFunc_Array_AddUnique_ReturnValue = UKismetArrayLibrary::Array_AddUnique(OverlappingActors, K2Node_Event_OtherActor2);
    bool CallFunc_Array_RemoveItem_ReturnValue = UKismetArrayLibrary::Array_RemoveItem(OverlappingActors, K2Node_Event_OtherActor);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_124;
L_124:
    auto CallFunc_GetTexture_ReturnValue = DynamicFlow->this->GetTexture();
    CollectRippleGenerators();
    return;
}
