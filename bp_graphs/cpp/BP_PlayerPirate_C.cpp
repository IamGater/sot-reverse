// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PlayerPirate_C::GetPxActorCapacityForPhysXAggregate (31 bytes)
void BP_PlayerPirate_C::GetPxActorCapacityForPhysXAggregate()
{
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::TattoGlowDynamicMaterials (930 bytes)
void BP_PlayerPirate_C::TattoGlowDynamicMaterials()
{
    int CallFunc_GetNumMaterials_ReturnValue = Mesh->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = Mesh->GetMaterial(Temp_int_Variable);
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_221;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
L_221:
    CallFunc_GetMaterial_ReturnValue = Mesh->GetMaterial(Temp_int_Variable);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::GetMouthPosition (105 bytes)
void BP_PlayerPirate_C::GetMouthPosition()
{
    auto CallFunc_GetSocketLocation_ReturnValue = Mesh->GetSocketLocation();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::Update Athena Character (3 bytes)
void BP_PlayerPirate_C::Update Athena Character()
{
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::CapstanRotationSpeed (40 bytes)
void BP_PlayerPirate_C::CapstanRotationSpeed()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::DockingInterface (40 bytes)
void BP_PlayerPirate_C::DockingInterface()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::CapstanForce (94 bytes)
void BP_PlayerPirate_C::CapstanForce()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::ReceiveBeginPlay (22 bytes)
void BP_PlayerPirate_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::TriggerTattooGlow (22 bytes)
void BP_PlayerPirate_C::TriggerTattooGlow()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::ScaleMesh (76 bytes)
void BP_PlayerPirate_C::ScaleMesh()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::SkipToNextMesh (22 bytes)
void BP_PlayerPirate_C::SkipToNextMesh()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::SetWieldedItemMesh (166 bytes)
void BP_PlayerPirate_C::SetWieldedItemMesh()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::IncreaseWieldedObjectScale (40 bytes)
void BP_PlayerPirate_C::IncreaseWieldedObjectScale()
{
    ExecuteUbergraph_BP_PlayerPirate();
    return;
}

// Recovered Kismet: BP_PlayerPirate_C::ExecuteUbergraph_BP_PlayerPirate (5958 bytes)
void BP_PlayerPirate_C::ExecuteUbergraph_BP_PlayerPirate()
{
    FString CallFunc_Conv_FloatToString_ReturnValue = UKismetStringLibrary::Conv_FloatToString(CallFunc_BreakVector_X);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_Conv_FloatToString_ReturnValue);
L_142:
    auto CallFunc_GetWieldedItem_ReturnValue2 = WieldedItemComponent->this->GetWieldedItem();
    auto K2Node_DynamicCast_AsStatic_Mesh_Wieldable_Item = CallFunc_GetWieldedItem_ReturnValue2;
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Wieldable_Item);
    if (!K2Node_DynamicCast_bSuccess2) goto L_39E;
    StaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component2 = Cast<StaticMeshComponent*>(K2Node_DynamicCast_AsStatic_Mesh_Wieldable_Item);
    bool K2Node_DynamicCast_bSuccess6 = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Component2);
    bool CallFunc_SetStaticMesh_ReturnValue2 = K2Node_DynamicCast_AsStatic_Mesh_Component2->SetStaticMesh(CurrentStaticMesh);
    if (!K2Node_CustomEvent_UseItemScale) goto L_297;
L_297:
    bool IsSkeletalMesh = false;
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    FString CallFunc_GetObjectName_ReturnValue2 = UKismetSystemLibrary::GetObjectName(CurrentStaticMesh);
    FString CallFunc_Concat_StrStr_ReturnValue3 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetObjectName_ReturnValue2);
L_39E:
    CallFunc_GetWieldedItem_ReturnValue2 = WieldedItemComponent->this->GetWieldedItem();
    auto K2Node_DynamicCast_AsWieldable_Item = CallFunc_GetWieldedItem_ReturnValue2;
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Item);
    SkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component2 = Cast<SkeletalMeshComponent*>(K2Node_DynamicCast_AsWieldable_Item);
    bool K2Node_DynamicCast_bSuccess8 = static_cast<bool>(K2Node_DynamicCast_AsSkeletal_Mesh_Component2);
    if (!K2Node_DynamicCast_bSuccess8) goto L_85C;
    if (!K2Node_CustomEvent_UseItemScale) goto L_4E9;
L_4E9:
    IsSkeletalMesh = true;
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    FString CallFunc_GetObjectName_ReturnValue = UKismetSystemLibrary::GetObjectName(CurrentSkeletalMesh);
    FString CallFunc_Concat_StrStr_ReturnValue2 = UKismetStringLibrary::Concat_StrStr(CallFunc_GetObjectName_ReturnValue);
    SkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component = Cast<SkeletalMeshComponent*>(K2Node_DynamicCast_AsWieldable_Item);
    bool K2Node_DynamicCast_bSuccess5 = static_cast<bool>(K2Node_DynamicCast_AsSkeletal_Mesh_Component);
    if (!K2Node_DynamicCast_bSuccess5) goto L_6BE;
    if (!K2Node_CustomEvent_UseItemScale) goto L_4E9;
L_6BE:
    PoseableMeshComponent* K2Node_DynamicCast_AsPoseable_Mesh_Component = Cast<PoseableMeshComponent*>(K2Node_DynamicCast_AsWieldable_Item);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsPoseable_Mesh_Component);
    if (!K2Node_CustomEvent_UseItemScale) goto L_4E9;
    StaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component = Cast<StaticMeshComponent*>(K2Node_DynamicCast_AsStatic_Mesh_Wieldable_Item);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsStatic_Mesh_Component);
    bool CallFunc_SetStaticMesh_ReturnValue = K2Node_DynamicCast_AsStatic_Mesh_Component->SetStaticMesh(CurrentStaticMesh);
    if (!K2Node_CustomEvent_UseItemScale) goto L_297;
L_85C:
    PoseableMeshComponent* K2Node_DynamicCast_AsPoseable_Mesh_Component2 = Cast<PoseableMeshComponent*>(K2Node_DynamicCast_AsWieldable_Item);
    bool K2Node_DynamicCast_bSuccess7 = static_cast<bool>(K2Node_DynamicCast_AsPoseable_Mesh_Component2);
    if (!K2Node_CustomEvent_UseItemScale) goto L_4E9;
L_9A1:
    bool CallFunc_IsLocallyControlled_ReturnValue2 = IsLocallyControlled();
    TScriptInterface<UWieldedItemInterface> UniqueObjectNameForCooking_AsWielded_Item_Interface = TScriptInterface<UWieldedItemInterface>(nullptr);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsWielded_Item_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_D16;
    auto CallFunc_GetWieldedItem_ReturnValue = UniqueObjectNameForCooking_AsWielded_Item_Interface->GetWieldedItem();
    auto Temp_interface_Variable = CallFunc_GetWieldedItem_ReturnValue;
    auto CallFunc_Add_VectorVector_ReturnValue = ItemScale;
    auto CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_BreakVector_Z2;
    auto CallFunc_Greater_FloatFloat_ReturnValue2 = CallFunc_BreakVector_Y2;
    auto CallFunc_Greater_FloatFloat_ReturnValue3 = CallFunc_BreakVector_X2;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue3;
    auto CallFunc_BooleanAND_ReturnValue2 = CallFunc_BooleanAND_ReturnValue;
    CallFunc_Add_VectorVector_ReturnValue = ItemScale;
    auto ItemScale = CallFunc_Add_VectorVector_ReturnValue;
    auto K2Node_DynamicCast_AsWieldable_Item2 = Temp_interface_Variable;
    bool K2Node_DynamicCast_bSuccess9 = static_cast<bool>(K2Node_DynamicCast_AsWieldable_Item2);
    ScaleMesh(ItemScale, K2Node_DynamicCast_AsWieldable_Item2, K2Node_DynamicCast_AsWieldable_Item2);
L_D16:
    TattoGlowDynamicMaterials(FirstPersonMesh);
    TattoGlowDynamicMaterials(Mesh);
    if (!IsSkeletalMesh) goto L_1186;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(SkeletalMeshArray);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_1128;
    int CallFunc_Array_Length_ReturnValue5 = UKismetArrayLibrary::Array_Length(SkeletalMeshArray);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_F6E;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_Array_Get_Item5;
    auto ItemSelectArray = Temp_int_Array_Index_Variable;
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue4;
L_F6E:
    auto CallFunc_Add_IntInt_ReturnValue = ItemSelectArray;
    ItemSelectArray = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue6 = UKismetArrayLibrary::Array_Length(SkeletalMeshArray);
    auto CallFunc_Subtract_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue6;
    auto CallFunc_Greater_IntInt_ReturnValue3 = ItemSelectArray;
    if (!CallFunc_Greater_IntInt_ReturnValue3) goto L_10D5;
    auto CurrentSkeletalMesh = CallFunc_Array_Get_Item2;
    SetWieldedItemMesh(CurrentStaticMesh, CurrentSkeletalMesh, false, StaticMeshArray, SkeletalMeshArray, ItemScale, false);
L_10D5:
    CurrentSkeletalMesh = CallFunc_Array_Get_Item3;
L_1128:
L_1186:
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(StaticMeshArray);
    auto CallFunc_Greater_IntInt_ReturnValue2 = CallFunc_Array_Length_ReturnValue2;
    if (!CallFunc_Greater_IntInt_ReturnValue2) goto L_1128;
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(StaticMeshArray);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_137F;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_EqualEqual_ObjectObject_ReturnValue2 = CallFunc_Array_Get_Item6;
    ItemSelectArray = Temp_int_Array_Index_Variable2;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue3;
L_137F:
    auto CallFunc_Add_IntInt_ReturnValue2 = ItemSelectArray;
    ItemSelectArray = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(StaticMeshArray);
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue3;
    auto CallFunc_Greater_IntInt_ReturnValue4 = ItemSelectArray;
    if (!CallFunc_Greater_IntInt_ReturnValue4) goto L_14AC;
    auto CurrentStaticMesh = CallFunc_Array_Get_Item;
L_14AC:
    CurrentStaticMesh = CallFunc_Array_Get_Item4;
    ItemScale = K2Node_CustomEvent_ItemScale;
    auto SkeletalMeshArray = K2Node_CustomEvent_SkeletalMeshArray;
    auto StaticMeshArray = K2Node_CustomEvent_StaticMeshArray;
    CurrentStaticMesh = K2Node_CustomEvent_StaticMesh;
    CurrentSkeletalMesh = K2Node_CustomEvent_SkeletalMesh;
    if (!K2Node_CustomEvent_WieldItem) goto L_142;
    TScriptInterface<UWieldedItemInterface> UniqueObjectNameForCooking_AsWielded_Item_Interface2 = TScriptInterface<UWieldedItemInterface>(nullptr);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsWielded_Item_Interface2);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_16AB;
    TScriptInterface<UWieldableInterface> CallFunc_WieldItem_Item_CastInput = TScriptInterface<UWieldableInterface>(K2Node_CustomEvent_Wieldable_Item_Ref);
    auto CallFunc_WieldItem_ReturnValue = UniqueObjectNameForCooking_AsWielded_Item_Interface2->WieldItem(CallFunc_WieldItem_Item_CastInput, false);
L_16AB:
    bool CallFunc_IsLocallyControlled_ReturnValue = IsLocallyControlled();
    if (!CallFunc_IsLocallyControlled_ReturnValue) goto L_9A1;
    CallFunc_IsLocallyControlled_ReturnValue2 = IsLocallyControlled();
    return;
}
