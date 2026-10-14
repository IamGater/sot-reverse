// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_TheAshenDragon_CaptainFlameheartVO_C::UserConstructionScript (3 bytes)
void BP_TheAshenDragon_CaptainFlameheartVO_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CaptainFlameheartVO_C::ReceiveBeginPlay (22 bytes)
void BP_TheAshenDragon_CaptainFlameheartVO_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_TheAshenDragon_CaptainFlameheartVO();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CaptainFlameheartVO_C::UpdateParametersEventHandler (76 bytes)
void BP_TheAshenDragon_CaptainFlameheartVO_C::UpdateParametersEventHandler()
{
    ExecuteUbergraph_BP_TheAshenDragon_CaptainFlameheartVO();
    return;
}

// Recovered Kismet: BP_TheAshenDragon_CaptainFlameheartVO_C::ExecuteUbergraph_BP_TheAshenDragon_CaptainFlameheartVO (2794 bytes)
void BP_TheAshenDragon_CaptainFlameheartVO_C::ExecuteUbergraph_BP_TheAshenDragon_CaptainFlameheartVO()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable3;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item2->GetMaterials();
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue3) goto L_4E5;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item2->GetMaterials();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item3);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess2) goto L_6BC;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    auto CurrentDynamicMaterial = K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(MaterialInstance, CurrentDynamicMaterial);
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
L_4E5:
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(CallFunc_Array_Get_Item2);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_662;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    BP_Anim_TheAshenDragon_Flameheart_Skull_C* K2Node_DynamicCast_AsBP_Anim_the_Ashen_Dragon_Flameheart_Skull = Cast<BP_Anim_TheAshenDragon_Flameheart_Skull_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Anim_the_Ashen_Dragon_Flameheart_Skull);
L_662:
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_6BC:
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item2->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_Array_Get_Item3);
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    CurrentDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(MaterialInstance);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable;
    return;
}
