// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_DamageZone_C::GetNumExternalHits (128 bytes)
void BP_DamageZone_C::GetNumExternalHits()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    auto CallFunc_SelectInt_ReturnValue = Rep_ServerUpdateEventCount;
    return;
}

// Recovered Kismet: BP_DamageZone_C::OnRep_Rep_ExternalHitList (17 bytes)
void BP_DamageZone_C::OnRep_Rep_ExternalHitList()
{
    Update External Hits();
    return;
}

// Recovered Kismet: BP_DamageZone_C::GetOrCreateDecalMID (294 bytes)
void BP_DamageZone_C::GetOrCreateDecalMID()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(HoleDecalComponent);
    if (!CallFunc_IsValid_ReturnValue) goto L_D2;
    auto CallFunc_GetDecalMaterial_ReturnValue = HoleDecalComponent->this->GetDecalMaterial();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetDecalMaterial_ReturnValue);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_E2;
L_D2:
L_E2:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = HoleDecalComponent->CreateDynamicMaterialInstance();
    return;
}

// Recovered Kismet: BP_DamageZone_C::Update External Hits (264 bytes)
void BP_DamageZone_C::Update External Hits()
{
    CollectTaggedComponents();
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_57;
    bool HasBeenInitialized = true;
L_57:
    TEnumAsByte<ERepairableState> CallFunc_GetRepairableState_ReturnValue = GetRepairableState();
    auto CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_GetRepairableState_ReturnValue;
    auto CallFunc_EqualEqual_ByteByte_ReturnValue2 = CallFunc_GetRepairableState_ReturnValue;
    auto CallFunc_BooleanOR_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue2;
    Set Repair Visibility(CallFunc_BooleanOR_ReturnValue);
    Update External Hits();
    return;
    auto CallFunc_GetOwner_ReturnValue2 = this->GetOwner();
    bool CallFunc_DoesImplementInterface_ReturnValue = UKismetSystemLibrary::DoesImplementInterface(CallFunc_GetOwner_ReturnValue2, BP_HullInterface_C);
    auto CallFunc_Less_IntInt_ReturnValue = L_BufferCount;
    auto CallFunc_Less_IntInt_ReturnValue2 = ClientUpdateEventCount;
    auto CallFunc_BooleanAND_ReturnValue = CallFunc_Less_IntInt_ReturnValue2;
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    TScriptInterface<UBP_HullInterface_C> UniqueObjectNameForCooking_AsBP_Hull_Interface = TScriptInterface<UBP_HullInterface_C>(CallFunc_GetOwner_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsBP_Hull_Interface);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_2DB;
    auto CallFunc_Percent_IntInt_ReturnValue = ClientUpdateEventCount;
    Add Deferred Decal(CallFunc_Apply_Hit_Decal);
    auto CallFunc_Add_IntInt_ReturnValue2 = ClientUpdateEventCount;
    auto ClientUpdateEventCount = CallFunc_Add_IntInt_ReturnValue2;
    auto CallFunc_Add_IntInt_ReturnValue = L_BufferCount;
    auto L_BufferCount = CallFunc_Add_IntInt_ReturnValue;
L_2DB:
    return;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Rep_ExternalHitList);
L_57:
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    auto K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    K2Node_MakeStruct_HullDamageHit = K2Node_MakeStruct_HullDamageHit;
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(Decal);
    if (!CallFunc_IsValid_ReturnValue) goto L_1FA;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Deferred);
    CallFunc_Less_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_F9;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Deferred, Decal);
L_F9:
    KillDeferredDecal(CallFunc_Array_Get_Item);
    CallFunc_Add_IntInt_ReturnValue = ExternalDecalBufferIndex;
    CallFunc_Percent_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
    auto ExternalDecalBufferIndex = CallFunc_Percent_IntInt_ReturnValue;
L_1FA:
    return;
}

// Recovered Kismet: BP_DamageZone_C::KillDeferredDecal (378 bytes)
void BP_DamageZone_C::KillDeferredDecal()
{
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid();
    if (!CallFunc_IsValid_ReturnValue) goto L_177;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    UMaterialInstanceDynamic* CallFunc_GetDecalDynamicMaterialInstance_ReturnValue = this->GetDecalDynamicMaterialInstance();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto CallFunc_Add_FloatFloat_ReturnValue2 = CallFunc_Add_FloatFloat_ReturnValue;
L_177:
    return;
}

// Recovered Kismet: BP_DamageZone_C::Add External Hit (350 bytes)
void BP_DamageZone_C::Add External Hit()
{
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Deferred);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    KillDeferredDecal(CallFunc_Array_Get_Item);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(RepairGroup);
    CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    SceneComponent* K2Node_DynamicCast_AsScene_Component = Cast<SceneComponent*>(CallFunc_Array_Get_Item);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsScene_Component);
    CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
    auto NewHIt = HitData;
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    CallFunc_Add_IntInt_ReturnValue = Rep_ServerUpdateEventCount;
    auto Rep_ServerUpdateEventCount = CallFunc_Add_IntInt_ReturnValue;
    CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(Rep_ExternalHitList);
    CallFunc_Less_IntInt_ReturnValue = CallFunc_Array_Length_ReturnValue;
    if (!CallFunc_Less_IntInt_ReturnValue) goto L_165;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(Rep_ExternalHitList, NewHIt);
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_219;
L_165:
    auto CallFunc_Add_IntInt_ReturnValue2 = ExternalHitBufferIndex;
    auto CallFunc_Percent_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue2;
    auto ExternalHitBufferIndex = CallFunc_Percent_IntInt_ReturnValue;
L_219:
    Update External Hits();
    return;
}

// Recovered Kismet: BP_DamageZone_C::CollectTaggedComponents (112 bytes)
void BP_DamageZone_C::CollectTaggedComponents()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByTag_ReturnValue = AActor::GetComponentsByTag(SceneComponent, Repair);
    auto K2Node_MakeStruct_BP_InternalDamageGroup = K2Node_MakeStruct_BP_InternalDamageGroup;
    auto RepairGroup = K2Node_MakeStruct_BP_InternalDamageGroup;
    return;
}

// Recovered Kismet: BP_DamageZone_C::UserConstructionScript (3 bytes)
void BP_DamageZone_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_DamageZone_C::AddExternalHit (40 bytes)
void BP_DamageZone_C::AddExternalHit()
{
    ExecuteUbergraph_BP_DamageZone();
    return;
}

// Recovered Kismet: BP_DamageZone_C::ClearDecalFlags (22 bytes)
void BP_DamageZone_C::ClearDecalFlags()
{
    ExecuteUbergraph_BP_DamageZone();
    return;
}

// Recovered Kismet: BP_DamageZone_C::OnRepairableStateUpdate (40 bytes)
void BP_DamageZone_C::OnRepairableStateUpdate()
{
    ExecuteUbergraph_BP_DamageZone();
    return;
}

// Recovered Kismet: BP_DamageZone_C::OnInitialise (22 bytes)
void BP_DamageZone_C::OnInitialise()
{
    ExecuteUbergraph_BP_DamageZone();
    return;
}

// Recovered Kismet: BP_DamageZone_C::OnDecalMaterialUpdatedToRepaired (22 bytes)
void BP_DamageZone_C::OnDecalMaterialUpdatedToRepaired()
{
    ExecuteUbergraph_BP_DamageZone();
    return;
}

// Recovered Kismet: BP_DamageZone_C::ExecuteUbergraph_BP_DamageZone (738 bytes)
void BP_DamageZone_C::ExecuteUbergraph_BP_DamageZone()
{
    GetOrCreateDecalMID(CallFunc_GetOrCreateDecalMID_DecalMID);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetOrCreateDecalMID_DecalMID);
    if (!CallFunc_IsValid_ReturnValue2) goto L_2DF;
    Clear Decal Flags();
    Add External Hit(K2Node_Event_Hit_Data);
    auto K2Node_SwitchEnum_CmpSuccess = K2Node_Event_InRepairableState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_181;
    K2Node_SwitchEnum_CmpSuccess = K2Node_Event_InRepairableState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1A3;
    K2Node_SwitchEnum_CmpSuccess = K2Node_Event_InRepairableState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1B7;
    K2Node_SwitchEnum_CmpSuccess = K2Node_Event_InRepairableState;
    if (!K2Node_SwitchEnum_CmpSuccess) goto L_1CB;
L_181:
    Set Repair Visibility(false);
    RemoveDeferredDecals();
L_1A3:
    Set Repair Visibility(false);
L_1B7:
    Set Repair Visibility(false);
L_1CB:
    Set Repair Visibility(true);
    RemoveDeferredDecals();
    Initialise();
L_200:
    auto CallFunc_GetOwner_ReturnValue = this->GetOwner();
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetOwner_ReturnValue);
    if (!CallFunc_IsValid_ReturnValue) goto L_200;
L_2DF:
    return;
}
