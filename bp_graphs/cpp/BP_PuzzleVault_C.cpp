// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_PuzzleVault_C::PlayVisibilityTransition (1579 bytes)
void BP_PuzzleVault_C::PlayVisibilityTransition()
{
    if (!New) goto L_36B;
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    auto UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    int CallFunc_WwiseCreateDetachedEmitter_ReturnValue3 = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(CallFunc_WwiseCreateDetachedEmitter_Emitter3, pool_puzzle_vault, TableWaterPosition, UniqueObjectNameForCooking_WwiseEmitterCreationParams);
    auto UniqueObjectNameForCooking_WwiseEmitterCreationParams3 = UniqueObjectNameForCooking_WwiseEmitterCreationParams3;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams3 = UniqueObjectNameForCooking_WwiseEmitterCreationParams3;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams3 = UniqueObjectNameForCooking_WwiseEmitterCreationParams3;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams3 = UniqueObjectNameForCooking_WwiseEmitterCreationParams3;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams3 = UniqueObjectNameForCooking_WwiseEmitterCreationParams3;
    int CallFunc_WwiseCreateDetachedEmitter_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(CallFunc_WwiseCreateDetachedEmitter_Emitter2, pool_puzzle_vault_water_emitters, TableWaterPosition, UniqueObjectNameForCooking_WwiseEmitterCreationParams3);
    auto TableWaterLapEmitter = CallFunc_WwiseCreateDetachedEmitter_Emitter2;
L_36B:
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    int CallFunc_WwiseCreateDetachedEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(CallFunc_WwiseCreateDetachedEmitter_Emitter, pool_puzzle_vault, TableWaterPosition, UniqueObjectNameForCooking_WwiseEmitterCreationParams2);
    bool CallFunc_WwiseEmitterIsValid_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(TableWaterLapEmitter);
    if (!CallFunc_WwiseEmitterIsValid_ReturnValue) goto L_628;
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(TableWaterLapEmitter, Stop_sfx_cave_waterlap_map_table);
L_628:
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::GetObjectDisplayName (89 bytes)
void BP_PuzzleVault_C::GetObjectDisplayName()
{
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::UserConstructionScript (3 bytes)
void BP_PuzzleVault_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::ReceiveBeginPlay (22 bytes)
void BP_PuzzleVault_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_PuzzleVault();
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::ReceiveEndPlay (40 bytes)
void BP_PuzzleVault_C::ReceiveEndPlay()
{
    ExecuteUbergraph_BP_PuzzleVault();
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::TriggerRevealVFX (22 bytes)
void BP_PuzzleVault_C::TriggerRevealVFX()
{
    ExecuteUbergraph_BP_PuzzleVault();
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::SetTableMaterialInstance (40 bytes)
void BP_PuzzleVault_C::SetTableMaterialInstance()
{
    ExecuteUbergraph_BP_PuzzleVault();
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::SetVaultTableTextureVisibility (40 bytes)
void BP_PuzzleVault_C::SetVaultTableTextureVisibility()
{
    ExecuteUbergraph_BP_PuzzleVault();
    return;
}

// Recovered Kismet: BP_PuzzleVault_C::ExecuteUbergraph_BP_PuzzleVault (2415 bytes)
void BP_PuzzleVault_C::ExecuteUbergraph_BP_PuzzleVault()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(K2Node_CustomEvent_New_Material);
    auto CurrentDynamicMaterialInstance = CallFunc_CreateDynamicMaterialInstance_ReturnValue2;
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    K2Node_MakeStruct_LinearColor2 = K2Node_MakeStruct_LinearColor2;
    auto UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams = UniqueObjectNameForCooking_WwiseEmitterCreationParams;
    int CallFunc_WwiseCreateDetachedEmitter_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(CallFunc_WwiseCreateDetachedEmitter_Emitter, pool_puzzle_vault, TableWaterPosition, UniqueObjectNameForCooking_WwiseEmitterCreationParams);
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_312;
L_312:
    auto PendingTableVisibility = K2Node_CustomEvent_Visibility;
    if (!K2Node_CustomEvent_Visibility) goto L_369;
    PlayVisibilityTransition(true);
L_369:
    PlayVisibilityTransition(false);
    if (!PendingTableVisibility) goto L_3D4;
L_3D4:
    bool CallFunc_WwiseEmitterIsValid_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterIsValid(TableWaterLapEmitter);
    int CallFunc_WwiseEmitterPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterPostEvent(TableWaterLapEmitter, Stop_sfx_cave_waterlap_map_table);
    UMaterialInterface* CallFunc_GetMaterial_ReturnValue = puzzle_table_water->GetMaterial();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = puzzle_table_water->CreateDynamicMaterialInstance(CallFunc_GetMaterial_ReturnValue);
    CurrentDynamicMaterialInstance = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = puzzle_table_water->K2_GetComponentLocation();
    auto TableWaterPosition = CallFunc_K2_GetComponentLocation_ReturnValue;
    bool CallFunc_HasAuthority_ReturnValue2 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue2) goto L_591;
L_591:
    auto CallFunc_Spawn_ReturnValue = VfxFunctionLibrary->this->Spawn(K2Node_MakeStruct_VfxSpawner);
    bool CallFunc_HasAuthority_ReturnValue3 = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue3) goto L_6C2;
L_6C2:
    auto CallFunc_IsValid_ReturnValue = KismetSystemLibrary->this->IsValid(K2Node_CustomEvent_New_Material);
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    auto UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    UniqueObjectNameForCooking_WwiseEmitterCreationParams2 = UniqueObjectNameForCooking_WwiseEmitterCreationParams2;
    int CallFunc_WwiseCreateDetachedEmitter_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseCreateDetachedEmitter(CallFunc_WwiseCreateDetachedEmitter_Emitter2, pool_puzzle_vault, TableWaterPosition, UniqueObjectNameForCooking_WwiseEmitterCreationParams2);
    return;
}
