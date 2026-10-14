// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::UserConstructionScript (3 bytes)
void BP_AggressiveGhostShip_Portal_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::ReceiveBeginPlay (22 bytes)
void BP_AggressiveGhostShip_Portal_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_AggressiveGhostShip_Portal();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::StartOpening (22 bytes)
void BP_AggressiveGhostShip_Portal_C::StartOpening()
{
    ExecuteUbergraph_BP_AggressiveGhostShip_Portal();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::StartClosing (22 bytes)
void BP_AggressiveGhostShip_Portal_C::StartClosing()
{
    ExecuteUbergraph_BP_AggressiveGhostShip_Portal();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::End (22 bytes)
void BP_AggressiveGhostShip_Portal_C::End()
{
    ExecuteUbergraph_BP_AggressiveGhostShip_Portal();
    return;
}

// Recovered Kismet: BP_AggressiveGhostShip_Portal_C::ExecuteUbergraph_BP_AggressiveGhostShip_Portal (2205 bytes)
void BP_AggressiveGhostShip_Portal_C::ExecuteUbergraph_BP_AggressiveGhostShip_Portal()
{
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(DynamicMaterials);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_502;
L_502:
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = shroud->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue3 = Portal->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue3 = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue3);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = Portal->CreateDynamicMaterialInstance();
    int CallFunc_Array_Add_ReturnValue2 = UKismetArrayLibrary::Array_Add(DynamicMaterials, CallFunc_CreateDynamicMaterialInstance_ReturnValue2);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, idx_276867);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue4 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, idx_276942);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue2 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, idx_276866);
    int CallFunc_WwiseEmitterComponentPostEvent_ReturnValue3 = UWwiseEmitterBlueprintLibrary::WwiseEmitterComponentPostEvent(WwiseEmitter, idx_276949);
    return;
}
