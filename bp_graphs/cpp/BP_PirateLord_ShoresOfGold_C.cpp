// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PirateLord_ShoresOfGold_C::UserConstructionScript (3 bytes)
void BP_PirateLord_ShoresOfGold_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PirateLord_ShoresOfGold_C::ReceiveBeginPlay (22 bytes)
void BP_PirateLord_ShoresOfGold_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PirateLord_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_PirateLord_ShoresOfGold_C::GhostCutsceneEventHandler (58 bytes)
void BP_PirateLord_ShoresOfGold_C::GhostCutsceneEventHandler()
{
    ExecuteUbergraph_BP_PirateLord_ShoresOfGold();
    return;
}

// Recovered Kismet: BP_PirateLord_ShoresOfGold_C::ExecuteUbergraph_BP_PirateLord_ShoresOfGold (2234 bytes)
void BP_PirateLord_ShoresOfGold_C::ExecuteUbergraph_BP_PirateLord_ShoresOfGold()
{
L_F:
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = Mesh->GetMaterial(Temp_int_Variable);
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(MaterialInstance, K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_GetNumMaterials_ReturnValue = Mesh->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_24B;
L_24B:
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_380;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    BP_Anim_PirateLord_standing_TallTales_C* idx_275131 = Cast<BP_Anim_PirateLord_standing_TallTales_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(idx_275131);
    GhostCutsceneEventHandler();
L_380:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(MaterialInstance);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    UMaterialInterface* idx_275071 = SkeletalMesh->GetMaterial();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = SkeletalMesh->CreateDynamicMaterialInstance(idx_275071);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(MaterialInstance, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = shroud->CreateDynamicMaterialInstance();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    TScriptInterface<UInterface_Animatable> idx_275104 = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(idx_275104);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_8A2;
    auto CallFunc_GetAnimInstance_ReturnValue2 = idx_275104->GetAnimInstance();
    auto Temp_object_Variable2 = CallFunc_GetAnimInstance_ReturnValue2;
    BP_Anim_PirateLord_standing_TallTales_C* idx_275132 = Cast<BP_Anim_PirateLord_standing_TallTales_C*>(Temp_object_Variable2);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(idx_275132);
    if (!K2Node_DynamicCast_bSuccess3) goto L_F;
    idx_275132 = idx_275132;
L_8A2:
    return;
}
