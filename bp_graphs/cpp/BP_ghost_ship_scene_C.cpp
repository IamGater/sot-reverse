// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_ghost_ship_scene_C::CollectParticleEmitters (667 bytes)
void BP_ghost_ship_scene_C::CollectParticleEmitters()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_189;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    bool CallFunc_ComponentHasTag_ReturnValue = CallFunc_Array_Get_Item->ComponentHasTag(IgnoreForFadingTag);
    if (!CallFunc_ComponentHasTag_ReturnValue) goto L_1F3;
L_189:
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_1F3:
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(ParticleSystemComponent);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(ParticleEmitters, CallFunc_Array_Get_Item);
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::RenderMeshes (404 bytes)
void BP_ghost_ship_scene_C::RenderMeshes()
{
    if (!IsForceHidden) goto L_132;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(FadeMeshes);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_137;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_132:
L_137:
    bool IsForceHidden = false;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::SetShipHidden (1115 bytes)
void BP_ghost_ship_scene_C::SetShipHidden()
{
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ParticleEmitters);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::SetShipVisible (1226 bytes)
void BP_ghost_ship_scene_C::SetShipVisible()
{
    RenderMeshes();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(ParticleEmitters);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::CollectMaterials (1998 bytes)
void BP_ghost_ship_scene_C::CollectMaterials()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    bool CallFunc_ComponentHasTag_ReturnValue = CallFunc_Array_Get_Item->ComponentHasTag(IgnoreForFadingTag);
    if (!CallFunc_ComponentHasTag_ReturnValue) goto L_1CF;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
L_1CF:
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(FadeMeshes, CallFunc_Array_Get_Item);
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_564;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(DynamicMaterials, K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
L_564:
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_Array_Get_Item2);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::UserConstructionScript (3 bytes)
void BP_ghost_ship_scene_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::ReceiveBeginPlay (22 bytes)
void BP_ghost_ship_scene_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_ghost_ship_scene();
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::SetGhostShipVisibility (40 bytes)
void BP_ghost_ship_scene_C::SetGhostShipVisibility()
{
    ExecuteUbergraph_BP_ghost_ship_scene();
    return;
}

// Recovered Kismet: BP_ghost_ship_scene_C::ExecuteUbergraph_BP_ghost_ship_scene (741 bytes)
void BP_ghost_ship_scene_C::ExecuteUbergraph_BP_ghost_ship_scene()
{
    CollectParticleEmitters(CallFunc_CollectParticleEmitters_Gathered_Emitters);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(FadeMeshes);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool IsForceHidden = true;
    SetShipVisible();
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_1DE;
L_1DE:
    CollectMaterials();
    if (!K2Node_CustomEvent_Visible) goto L_273;
    SetShipVisible();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(sfx_anim_ghostship_appears, Play_sfx_anim_ship_appears);
L_273:
    SetShipHidden();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(sfx_anim_ghostship_appears, Play_sfx_anim_ship_disappears);
    return;
}
