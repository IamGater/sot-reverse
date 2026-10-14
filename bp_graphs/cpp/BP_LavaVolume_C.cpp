// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_LavaVolume_C::CollectEmitters (867 bytes)
void BP_LavaVolume_C::CollectEmitters()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_Array_Get_Item->K2_GetComponentLocation();
    auto idx_226468 = FlatWaterPlane->this->ConvertToWaterSpace(CallFunc_K2_GetComponentLocation_ReturnValue);
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    auto CallFunc_MakeVector_ReturnValue = CallFunc_BreakVector2D_X;
    auto idx_226479 = idx_226479;
    idx_226479 = idx_226479;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_226480, idx_226479);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_LavaVolume_C::UserConstructionScript (3 bytes)
void BP_LavaVolume_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_LavaVolume_C::ReceiveBeginPlay (22 bytes)
void BP_LavaVolume_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_LavaVolume();
    return;
}

// Recovered Kismet: BP_LavaVolume_C::FireRandomLavaBurst (22 bytes)
void BP_LavaVolume_C::FireRandomLavaBurst()
{
    ExecuteUbergraph_BP_LavaVolume();
    return;
}

// Recovered Kismet: BP_LavaVolume_C::ExecuteUbergraph_BP_LavaVolume (1348 bytes)
void BP_LavaVolume_C::ExecuteUbergraph_BP_LavaVolume()
{
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, false);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_226480);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_541;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_115;
L_115:
    this->RegisterComponents(FlatWaterMesh, FlatWaterPlane);
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = FlatWaterMesh->GetMaterials();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_541;
    auto CallFunc_GetTexture_ReturnValue = DynamicFlow->this->GetTexture();
    CollectEmitters();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_226480);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    auto CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(idx_226480);
    CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue2;
    CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
    auto idx_226470 = CallFunc_BreakVector_X;
    FTimerHandle idx_226469 = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, CallFunc_RandomFloatInRange_ReturnValue, false);
L_541:
    return;
}
