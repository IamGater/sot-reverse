// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SmallMapTable_C::UpdateBlurEffect (305 bytes)
void BP_SmallMapTable_C::UpdateBlurEffect()
{
    bool CallFunc_HasAuthority_ReturnValue = AActor::HasAuthority();
    if (!CallFunc_HasAuthority_ReturnValue) goto L_27;
L_27:
    auto CallFunc_GetPlayerController_ReturnValue = GameplayStatics->this->GetPlayerController();
    APawn* CallFunc_GetPlayerPawn_ReturnValue = UGameplayStatics::GetPlayerPawn(CallFunc_GetPlayerController_ReturnValue);
    float CallFunc_GetDistanceTo_ReturnValue = AActor::GetDistanceTo(CallFunc_GetPlayerPawn_ReturnValue);
    auto CallFunc_Less_FloatFloat_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
    auto CallFunc_BooleanAND_ReturnValue = IsActive;
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::GetClosestInteractionPoint (128 bytes)
void BP_SmallMapTable_C::GetClosestInteractionPoint()
{
    auto CallFunc_GetSocketLocation_ReturnValue = TableMeshComponent->GetSocketLocation();
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::UserConstructionScript (377 bytes)
void BP_SmallMapTable_C::UserConstructionScript()
{
    MapTableControlPoint* K2Node_DynamicCast_AsMap_Table_Control_Point2 = Cast<MapTableControlPoint*>(ControlPoint);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsMap_Table_Control_Point2);
    if (!K2Node_DynamicCast_bSuccess2) goto L_176;
    K2Node_DynamicCast_AsMap_Table_Control_Point2 = K2Node_DynamicCast_AsMap_Table_Control_Point2;
    K2Node_DynamicCast_AsMap_Table_Control_Point2 = K2Node_DynamicCast_AsMap_Table_Control_Point2;
    MapTableControlPoint* K2Node_DynamicCast_AsMap_Table_Control_Point = Cast<MapTableControlPoint*>(ControlPoint);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsMap_Table_Control_Point);
    if (!K2Node_DynamicCast_bSuccess) goto L_176;
    K2Node_DynamicCast_AsMap_Table_Control_Point = K2Node_DynamicCast_AsMap_Table_Control_Point;
    K2Node_DynamicCast_AsMap_Table_Control_Point = K2Node_DynamicCast_AsMap_Table_Control_Point;
L_176:
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::ReceiveBeginPlay (22 bytes)
void BP_SmallMapTable_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_SmallMapTable();
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::SetEffectActiveWhenClose (22 bytes)
void BP_SmallMapTable_C::SetEffectActiveWhenClose()
{
    ExecuteUbergraph_BP_SmallMapTable();
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::OnMapActivate (58 bytes)
void BP_SmallMapTable_C::OnMapActivate()
{
    ExecuteUbergraph_BP_SmallMapTable();
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::OnMapMove (58 bytes)
void BP_SmallMapTable_C::OnMapMove()
{
    ExecuteUbergraph_BP_SmallMapTable();
    return;
}

// Recovered Kismet: BP_SmallMapTable_C::ExecuteUbergraph_BP_SmallMapTable (815 bytes)
void BP_SmallMapTable_C::ExecuteUbergraph_BP_SmallMapTable()
{
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, true);
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = Map->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    auto CallFunc_GetTexture_ReturnValue = TextureFeedback->this->GetTexture();
    UpdateBlurEffect();
    auto IsActive = K2Node_Event_IsMapActive;
    UpdateBlurEffect();
    if (!IsActive) goto L_32C;
    auto K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
    K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
L_32C:
    return;
}
