// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AggressiveGhostShip_C::EnablePortalClipPlane (952 bytes)
void BP_AggressiveGhostShip_C::EnablePortalClipPlane()
{
    Show All Meshes();
    auto CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_BreakTransform_Location;
    auto CallFunc_Conv_VectorToLinearColor_ReturnValue2 = CallFunc_Multiply_VectorVector_ReturnValue;
    auto ClipPlanePos = CallFunc_Conv_VectorToLinearColor_ReturnValue2;
    auto CallFunc_GetForwardVector_ReturnValue = CallFunc_BreakTransform_Rotation;
    auto CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
    auto ClipPlaneNor = CallFunc_Conv_VectorToLinearColor_ReturnValue;
    TArray<UMaterialInstanceDynamic*> CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::DisablePortalClipPlane (405 bytes)
void BP_AggressiveGhostShip_C::DisablePortalClipPlane()
{
    TArray<UMaterialInstanceDynamic*> CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ApplyPersistentDamage (941 bytes)
void BP_AggressiveGhostShip_C::ApplyPersistentDamage()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(PersistentDamageLocations);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_MakeVector_ReturnValue = CallFunc_Array_Get_Item;
    float CallFunc_Distance_ReturnValue = UVectorMaths::Distance(CallFunc_MakeVector_ReturnValue, Location);
    auto CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Distance_ReturnValue;
    auto CallFunc_FClamp_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_FClamp_ReturnValue;
    auto CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
    auto CallFunc_Subtract_FloatFloat_ReturnValue2 = CallFunc_Array_Get_Item;
    auto CallFunc_FMax_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue2;
    auto K2Node_MakeStruct_BPStruct_GhostPersistentDamage = K2Node_MakeStruct_BPStruct_GhostPersistentDamage;
    K2Node_MakeStruct_BPStruct_GhostPersistentDamage = K2Node_MakeStruct_BPStruct_GhostPersistentDamage;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ApplyPersistentDamageDataToMaterials (809 bytes)
void BP_AggressiveGhostShip_C::ApplyPersistentDamageDataToMaterials()
{
    TArray<UMaterialInstanceDynamic*> CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ApplyImpactDataToMaterials (990 bytes)
void BP_AggressiveGhostShip_C::ApplyImpactDataToMaterials()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(Impacts);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    TArray<UMaterialInstanceDynamic*> CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::AddImpact (651 bytes)
void BP_AggressiveGhostShip_C::AddImpact()
{
    bool Temp_bool_True_if_break_was_hit_Variable = false;
    auto CallFunc_Not_PreBool_ReturnValue = Temp_bool_True_if_break_was_hit_Variable;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Impacts);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Array_Get_Item;
    auto CallFunc_Add_FloatFloat_ReturnValue = ImpactTime;
    auto K2Node_MakeStruct_BPStruct_GhostImpact = K2Node_MakeStruct_BPStruct_GhostImpact;
    K2Node_MakeStruct_BPStruct_GhostImpact = K2Node_MakeStruct_BPStruct_GhostImpact;
    Temp_bool_True_if_break_was_hit_Variable = true;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    TArray<UMaterialInstanceDynamic*> CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    TArray<UMeshComponent*> CallFunc_GetAllMeshesBP_ReturnValue = AAggressiveGhostShip::GetAllMeshesBP();
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMeshesBP_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_140;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_140:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    CallFunc_GetAllMeshesBP_ReturnValue = AAggressiveGhostShip::GetAllMeshesBP();
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMeshesBP_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_140;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_140:
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    Render Meshes();
    CallFunc_GetAllMaterialsBP_ReturnValue = AAggressiveGhostShip::GetAllMaterialsBP();
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetAllMaterialsBP_ReturnValue);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::UserConstructionScript (3 bytes)
void BP_AggressiveGhostShip_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ReceiveBeginPlay (22 bytes)
void BP_AggressiveGhostShip_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::SetShipDeadBP (22 bytes)
void BP_AggressiveGhostShip_C::SetShipDeadBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::OnImpactBP (58 bytes)
void BP_AggressiveGhostShip_C::OnImpactBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ResetVisualEffects (22 bytes)
void BP_AggressiveGhostShip_C::ResetVisualEffects()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::SetShipHiddenBP (40 bytes)
void BP_AggressiveGhostShip_C::SetShipHiddenBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::IsDamagingOverlappingShipBP (40 bytes)
void BP_AggressiveGhostShip_C::IsDamagingOverlappingShipBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::HideAllMeshesBP (22 bytes)
void BP_AggressiveGhostShip_C::HideAllMeshesBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::SetPersistentDamageScaleBP (40 bytes)
void BP_AggressiveGhostShip_C::SetPersistentDamageScaleBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::EnablePortalClipPlaneBP (40 bytes)
void BP_AggressiveGhostShip_C::EnablePortalClipPlaneBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::DisablePortalClipPlaneBP (22 bytes)
void BP_AggressiveGhostShip_C::DisablePortalClipPlaneBP()
{
    ExecuteUbergraph_BP_AggressiveGhostShip();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_C::ExecuteUbergraph_BP_AggressiveGhostShip (1636 bytes)
void BP_AggressiveGhostShip_C::ExecuteUbergraph_BP_AggressiveGhostShip()
{
    DisablePortalClipPlane();
    auto K2Node_MakeStruct_BPStruct_GhostImpact = K2Node_MakeStruct_BPStruct_GhostImpact;
    K2Node_MakeStruct_BPStruct_GhostImpact = K2Node_MakeStruct_BPStruct_GhostImpact;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Impacts);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_17C;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
L_17C:
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(PersistentDamageLocations);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue2) goto L_2FE;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    auto K2Node_MakeStruct_BPStruct_GhostPersistentDamage = K2Node_MakeStruct_BPStruct_GhostPersistentDamage;
    K2Node_MakeStruct_BPStruct_GhostPersistentDamage = K2Node_MakeStruct_BPStruct_GhostPersistentDamage;
L_2FE:
    ApplyImpactDataToMaterials();
    ApplyPersistentDamageDataToMaterials();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = IntersectionEffectMesh->CreateDynamicMaterialInstance();
    auto IntersectionDynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    Set Ship Dead();
    ApplyImpactDataToMaterials();
    ApplyPersistentDamageDataToMaterials();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_GetTransform_ReturnValue = this->GetTransform();
    auto CallFunc_InverseTransformLocation_ReturnValue = CallFunc_GetTransform_ReturnValue;
    AddImpact(CallFunc_InverseTransformLocation_ReturnValue, CallFunc_GetGameTimeInSeconds_ReturnValue);
    CallFunc_GetTransform_ReturnValue = this->GetTransform();
    CallFunc_InverseTransformLocation_ReturnValue = CallFunc_GetTransform_ReturnValue;
    ApplyPersistentDamage(CallFunc_InverseTransformLocation_ReturnValue);
    Set Ship Hidden();
    if (!K2Node_Event_IsHidden) goto L_568;
L_568:
    Set Ship Visible();
    Hide All Meshes();
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto PersistentDamageScale = K2Node_Event_PersistentDamageScale;
    EnablePortalClipPlane(K2Node_Event_PortalTransform);
    return;
}
