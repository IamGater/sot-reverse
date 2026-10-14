// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_WaterVolume_Optimized_C::CollectRippleGenerators (921 bytes)
void BP_WaterVolume_Optimized_C::CollectRippleGenerators()
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

// Recovered Kismet: BP_WaterVolume_Optimized_C::UserConstructionScript (3 bytes)
void BP_WaterVolume_Optimized_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_WaterVolume_Optimized_C::ReceiveBeginPlay (22 bytes)
void BP_WaterVolume_Optimized_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_WaterVolume_Optimized();
    return;
}

// Recovered Kismet: BP_WaterVolume_Optimized_C::ReceiveActorBeginOverlap (40 bytes)
void BP_WaterVolume_Optimized_C::ReceiveActorBeginOverlap()
{
    ExecuteUbergraph_BP_WaterVolume_Optimized();
    return;
}

// Recovered Kismet: BP_WaterVolume_Optimized_C::ReceiveActorEndOverlap (40 bytes)
void BP_WaterVolume_Optimized_C::ReceiveActorEndOverlap()
{
    ExecuteUbergraph_BP_WaterVolume_Optimized();
    return;
}

// Recovered Kismet: BP_WaterVolume_Optimized_C::ExecuteUbergraph_BP_WaterVolume_Optimized (275 bytes)
void BP_WaterVolume_Optimized_C::ExecuteUbergraph_BP_WaterVolume_Optimized()
{
    int CallFunc_Array_AddUnique_ReturnValue = UKismetArrayLibrary::Array_AddUnique(OverlappingActors, K2Node_Event_OtherActor2);
    bool CallFunc_Array_RemoveItem_ReturnValue = UKismetArrayLibrary::Array_RemoveItem(OverlappingActors, K2Node_Event_OtherActor);
    this->RegisterComponents(FlatWaterMesh, FlatWaterPlane);
    CollectRippleGenerators();
    return;
}
