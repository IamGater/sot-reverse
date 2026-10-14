// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::OnRep_IsPirateLordVisible (64 bytes)
void BP_PirateLord_MaidenVoyage_C::OnRep_IsPirateLordVisible()
{
    if (!DisableOpacity) goto L_3D;
    if (!IsPirateLordVisible) goto L_2F;
    PirateLordAppear();
L_2F:
    PirateLordDisappear();
L_3D:
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::GetNPCAnimInstance (267 bytes)
void BP_PirateLord_MaidenVoyage_C::GetNPCAnimInstance()
{
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_F8;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    NPCAnimInstance* K2Node_DynamicCast_AsNPCAnim_Instance = Cast<NPCAnimInstance*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsNPCAnim_Instance);
    if (!K2Node_DynamicCast_bSuccess) goto L_E0;
L_E0:
L_F8:
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::CollectMaterials (1927 bytes)
void BP_PirateLord_MaidenVoyage_C::CollectMaterials()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue3 = AActor::GetComponentsByClass(MeshComponent);
    auto MeshComponentArray = CallFunc_GetComponentsByClass_ReturnValue3;
    GetNPCAnimInstance(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetNPCAnimInstance_NPCAnimInstance->GetComponentsByClass(MeshComponent);
    auto CallFunc_IsValid_ReturnValue2 = KismetSystemLibrary->this->IsValid(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = CallFunc_GetNPCAnimInstance_NPCAnimInstance->GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(MeshComponentArray);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_5EE;
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(DynamicMaterials, K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_5EE:
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_Array_Get_Item2);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::UserConstructionScript (3 bytes)
void BP_PirateLord_MaidenVoyage_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::Appear__FinishedFunc (22 bytes)
void BP_PirateLord_MaidenVoyage_C::Appear__FinishedFunc()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::Appear__UpdateFunc (22 bytes)
void BP_PirateLord_MaidenVoyage_C::Appear__UpdateFunc()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::Disappear__FinishedFunc (22 bytes)
void BP_PirateLord_MaidenVoyage_C::Disappear__FinishedFunc()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::Disappear__UpdateFunc (22 bytes)
void BP_PirateLord_MaidenVoyage_C::Disappear__UpdateFunc()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::ReceiveBeginPlay (22 bytes)
void BP_PirateLord_MaidenVoyage_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::GhostCutsceneEventHandler (58 bytes)
void BP_PirateLord_MaidenVoyage_C::GhostCutsceneEventHandler()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::DebugAnim (22 bytes)
void BP_PirateLord_MaidenVoyage_C::DebugAnim()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::PirateLordAppear (22 bytes)
void BP_PirateLord_MaidenVoyage_C::PirateLordAppear()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::PirateLordDisappear (22 bytes)
void BP_PirateLord_MaidenVoyage_C::PirateLordDisappear()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::ReceiveEndPlay (40 bytes)
void BP_PirateLord_MaidenVoyage_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::PirateLordHidden (22 bytes)
void BP_PirateLord_MaidenVoyage_C::PirateLordHidden()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::PirateLordAppearEvent (40 bytes)
void BP_PirateLord_MaidenVoyage_C::PirateLordAppearEvent()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::PirateLordDisappearEvent (40 bytes)
void BP_PirateLord_MaidenVoyage_C::PirateLordDisappearEvent()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::AnimNotify_StartPirateLordCutsceneAnim (22 bytes)
void BP_PirateLord_MaidenVoyage_C::AnimNotify_StartPirateLordCutsceneAnim()
{
    ExecuteUbergraph_BP_PirateLord_MaidenVoyage();
    return;
}

// Recovered Kismet: BP_PirateLord_MaidenVoyage_C::ExecuteUbergraph_BP_PirateLord_MaidenVoyage (6164 bytes)
void BP_PirateLord_MaidenVoyage_C::ExecuteUbergraph_BP_PirateLord_MaidenVoyage()
{
    OnRep_IsPirateLordVisible();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool IsPirateLordVisible = true;
    OnRep_IsPirateLordVisible();
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    IsPirateLordVisible = false;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
L_347:
    BP_Anim_PirateLord_MaidenVoyage_C* K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage = Cast<BP_Anim_PirateLord_MaidenVoyage_C*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage);
    K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage = K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(MaterialInstance);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable4;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable4;
    auto CallFunc_Add_IntInt_ReturnValue4 = Temp_int_Loop_Counter_Variable4;
    auto Temp_int_Loop_Counter_Variable4 = CallFunc_Add_IntInt_ReturnValue4;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable2;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    int CallFunc_Array_Length_ReturnValue4 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue4 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable4 = Temp_int_Loop_Counter_Variable3;
    if (!Temp_bool_IsClosed_Variable) goto L_A49;
L_A49:
    bool Temp_bool_IsClosed_Variable = true;
    auto CallFunc_GetTransform_ReturnValue = this->GetTransform();
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(CutSceneActor, CallFunc_GetTransform_ReturnValue);
    CallFunc_GetTransform_ReturnValue = this->GetTransform();
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_GetTransform_ReturnValue);
    auto PirateLordFirstCutscene = CallFunc_FinishSpawningActor_ReturnValue;
    GetNPCAnimInstance(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    float CallFunc_GetPlayLength_ReturnValue = CallFunc_GetNPCAnimInstance_NPCAnimInstance->GetPlayLength();
    Temp_bool_IsClosed_Variable = true;
L_C83:
    BP_Anim_PirateLord_MaidenVoyage_C* K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage2 = Cast<BP_Anim_PirateLord_MaidenVoyage_C*>(Temp_object_Variable2);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsBP_Anim_Pirate_Lord_Maiden_Voyage2);
    GhostCutsceneEventHandler(Ghost);
L_D36:
    bool Temp_bool_Has_Been_Initd_Variable = true;
    if (!Temp_bool_Has_Been_Initd_Variable) goto L_D36;
    this->ReceiveBeginPlay();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    if (!DisableOpacity) goto L_E8A;
    if (!IsPirateLordVisible) goto L_12D5;
L_E8A:
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = SkeletalMesh->GetMaterial();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = SkeletalMesh->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(MaterialInstance, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    int CallFunc_GetNumMaterials_ReturnValue = Mesh->GetNumMaterials();
    auto CallFunc_Subtract_IntInt_ReturnValue = CallFunc_GetNumMaterials_ReturnValue;
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    if (!CallFunc_LessEqual_IntInt_ReturnValue) goto L_13ED;
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue2 = Mesh->GetMaterial(Temp_int_Variable);
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue2);
    bool K2Node_DynamicCast_bSuccess5 = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(MaterialInstance, K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    CallFunc_GetMaterial_ReturnValue2 = Mesh->GetMaterial(Temp_int_Variable);
    K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_GetMaterial_ReturnValue2);
    K2Node_DynamicCast_bSuccess5 = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = Shroud->CreateDynamicMaterialInstance();
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
L_12D5:
    PirateLordHidden();
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable2 = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess2 = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable2);
    if (!UniqueObjectNameForCooking_bSuccess2) goto L_347;
    auto CallFunc_GetAnimInstance_ReturnValue3 = UniqueObjectNameForCooking_AsInterface_Animatable2->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue3;
L_13ED:
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_C83;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable2 = CallFunc_GetAnimInstance_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue5 = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue5;
    SkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component = Cast<SkeletalMeshComponent*>(Mesh);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsSkeletal_Mesh_Component);
    auto CallFunc_GetAnimInstance_ReturnValue2 = K2Node_DynamicCast_AsSkeletal_Mesh_Component->GetAnimInstance();
    NPCAnimInstance* K2Node_DynamicCast_AsNPCAnim_Instance = Cast<NPCAnimInstance*>(CallFunc_GetAnimInstance_ReturnValue2);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsNPCAnim_Instance);
    bool CallFunc_TriggerNPCCustomAnimationSequence_ReturnValue = K2Node_DynamicCast_AsNPCAnim_Instance->TriggerNPCCustomAnimationSequence();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(AnimNotifyWwiseEmitter, Play_sfx_anim_pendragon_appears);
    CollectMaterials();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(AnimNotifyWwiseEmitter, Play_sfx_anim_pendragon_disappears);
    CollectMaterials();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    CollectMaterials();
    return;
}
