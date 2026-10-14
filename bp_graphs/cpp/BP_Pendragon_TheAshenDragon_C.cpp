// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::GetGhostOwnerVisibility (22 bytes)
void BP_Pendragon_TheAshenDragon_C::GetGhostOwnerVisibility()
{
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::OnRep_IsPendragonVisible (50 bytes)
void BP_Pendragon_TheAshenDragon_C::OnRep_IsPendragonVisible()
{
    if (!IsPendragonVisible) goto L_21;
    PendragonAppear();
L_21:
    PendragonDisappear();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::GetNPCAnimInstance (378 bytes)
void BP_Pendragon_TheAshenDragon_C::GetNPCAnimInstance()
{
    TScriptInterface<UInterface_Animatable> UniqueObjectNameForCooking_AsInterface_Animatable = TScriptInterface<UInterface_Animatable>(Mesh);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsInterface_Animatable);
    if (!UniqueObjectNameForCooking_bSuccess) goto L_F8;
    auto CallFunc_GetAnimInstance_ReturnValue = UniqueObjectNameForCooking_AsInterface_Animatable->GetAnimInstance();
    auto Temp_object_Variable = CallFunc_GetAnimInstance_ReturnValue;
    NPCAnimInstance* K2Node_DynamicCast_AsNPCAnim_Instance = Cast<NPCAnimInstance*>(Temp_object_Variable);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsNPCAnim_Instance);
    if (!K2Node_DynamicCast_bSuccess) goto L_108;
L_F8:
L_108:
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::CollectMaterials (1713 bytes)
void BP_Pendragon_TheAshenDragon_C::CollectMaterials()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue2 = AActor::GetComponentsByClass(MeshComponent);
    auto MeshComponentArray = CallFunc_GetComponentsByClass_ReturnValue2;
    GetNPCAnimInstance(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(CallFunc_GetNPCAnimInstance_NPCAnimInstance);
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = CallFunc_GetNPCAnimInstance_NPCAnimInstance->GetComponentsByClass(MeshComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(MeshComponentArray);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(CallFunc_GetMaterials_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable2;
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    MaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic = Cast<MaterialInstanceDynamic*>(CallFunc_Array_Get_Item2);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    if (!K2Node_DynamicCast_bSuccess) goto L_518;
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, K2Node_DynamicCast_AsMaterial_Instance_Dynamic);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
L_518:
    CallFunc_GetMaterials_ReturnValue = CallFunc_Array_Get_Item->GetMaterials();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(CallFunc_Array_Get_Item2);
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::UserConstructionScript (13 bytes)
void BP_Pendragon_TheAshenDragon_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::Appear__FinishedFunc (22 bytes)
void BP_Pendragon_TheAshenDragon_C::Appear__FinishedFunc()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::Appear__UpdateFunc (22 bytes)
void BP_Pendragon_TheAshenDragon_C::Appear__UpdateFunc()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::Disappear__FinishedFunc (22 bytes)
void BP_Pendragon_TheAshenDragon_C::Disappear__FinishedFunc()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::Disappear__UpdateFunc (22 bytes)
void BP_Pendragon_TheAshenDragon_C::Disappear__UpdateFunc()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::ReceiveBeginPlay (22 bytes)
void BP_Pendragon_TheAshenDragon_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::TriggerAudioEvent (40 bytes)
void BP_Pendragon_TheAshenDragon_C::TriggerAudioEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::StopCurrentAudioEvent (22 bytes)
void BP_Pendragon_TheAshenDragon_C::StopCurrentAudioEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::Multicast_TriggerAudioEvent (40 bytes)
void BP_Pendragon_TheAshenDragon_C::Multicast_TriggerAudioEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonAppear (22 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonAppear()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonDisappear (22 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonDisappear()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonHidden (22 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonHidden()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonAppearEvent (40 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonAppearEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::ReceiveEndPlay (40 bytes)
void BP_Pendragon_TheAshenDragon_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonDisappearEvent (40 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonDisappearEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::PendragonHiddenEvent (40 bytes)
void BP_Pendragon_TheAshenDragon_C::PendragonHiddenEvent()
{
    ExecuteUbergraph_BP_Pendragon_TheAshenDragon();
    return;
}

// Recovered Kismet: BP_Pendragon_TheAshenDragon_C::ExecuteUbergraph_BP_Pendragon_TheAshenDragon (3561 bytes)
void BP_Pendragon_TheAshenDragon_C::ExecuteUbergraph_BP_Pendragon_TheAshenDragon()
{
    OnRep_IsPendragonVisible();
    auto CallFunc_FlushNetDormancy_ReturnValue = this->FlushNetDormancy();
    bool IsPendragonVisible = true;
    OnRep_IsPendragonVisible();
    auto CallFunc_FlushNetDormancy_ReturnValue2 = this->FlushNetDormancy();
    IsPendragonVisible = false;
    OnRep_IsPendragonVisible();
    auto CallFunc_FlushNetDormancy_ReturnValue3 = this->FlushNetDormancy();
    IsPendragonVisible = false;
    int CallFunc_Array_Length_ReturnValue2 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable2 = Temp_int_Loop_Counter_Variable;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable3;
    auto CallFunc_Add_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable3;
    auto Temp_int_Loop_Counter_Variable3 = CallFunc_Add_IntInt_ReturnValue3;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Loop_Counter_Variable2 = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue3 = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue3 = Temp_int_Loop_Counter_Variable2;
    auto Temp_int_Array_Index_Variable3 = Temp_int_Loop_Counter_Variable2;
    this->ReceiveBeginPlay();
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    if (!IsPendragonVisible) goto L_96D;
    PendragonAppear();
L_96D:
    PendragonHidden();
    int CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(AudioEvents, K2Node_Event_AudioEvent);
    auto CallFunc_Greater_IntInt_ReturnValue = CallFunc_Array_Find_ReturnValue;
    if (!CallFunc_Greater_IntInt_ReturnValue) goto L_A50;
    CallFunc_Array_Find_ReturnValue = UKismetArrayLibrary::Array_Find(AudioEvents, K2Node_Event_AudioEvent);
    Multicast_TriggerAudioEvent(CallFunc_Array_Find_ReturnValue);
L_A50:
    FString CallFunc_GetObjectName_ReturnValue = UKismetSystemLibrary::GetObjectName(K2Node_Event_AudioEvent);
    FString CallFunc_Concat_StrStr_ReturnValue = UKismetStringLibrary::Concat_StrStr(CallFunc_GetObjectName_ReturnValue);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(AnimNotifyWwiseEmitter, CallFunc_Array_Get_Item);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(AnimNotifyWwiseEmitter, Play_sfx_anim_pendragon_appears);
    CollectMaterials();
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(AnimNotifyWwiseEmitter, Play_sfx_anim_pendragon_disappears);
    CollectMaterials();
    CollectMaterials();
    this->ReceiveEndPlay(K2Node_Event_EndPlayReason);
    FObjectMessagingDispatcherHandle CallFunc_GetObjectMessagingDispatcherFromActor_ReturnValue2 = UObjectMessagingFunctions::GetObjectMessagingDispatcherFromActor();
    return;
}
