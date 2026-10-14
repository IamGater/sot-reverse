// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::GetLineIntersectionFromPlane (260 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::GetLineIntersectionFromPlane()
{
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = WaterMeshComponent->K2_GetComponentRotation();
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = WaterMeshComponent->K2_GetComponentLocation();
    auto CallFunc_GetUpVector_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
    auto CallFunc_LinePlaneIntersection_OriginNormal_ReturnValue = LineStart;
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::GetWaterLevel (30 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::GetWaterLevel()
{
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::GetDistanceFromPlane (259 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::GetDistanceFromPlane()
{
    FRotator CallFunc_K2_GetComponentRotation_ReturnValue = WaterMeshComponent->K2_GetComponentRotation();
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = WaterMeshComponent->K2_GetComponentLocation();
    auto CallFunc_GetUpVector_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
    auto CallFunc_Subtract_VectorVector_ReturnValue = Location;
    auto CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::UserConstructionScript (13 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::UserConstructionScript()
{
    this->UserConstructionScript();
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::AddWater (40 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::AddWater()
{
    ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater();
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::ReceiveBeginPlay (22 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater();
    return;
}

// Recovered Kismet: BP_MediumShip_StandardHull_InternalShipWater_C::ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater (554 bytes)
void BP_MediumShip_StandardHull_InternalShipWater_C::ExecuteUbergraph_BP_MediumShip_StandardHull_InternalShipWater()
{
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(MT_waterocclusion);
    this->ReceiveBeginPlay();
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_BA;
L_BA:
    auto CallFunc_GetTexture_ReturnValue = DynamicFlow->this->GetTexture();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue2 = KismetMaterialLibrary->this->CreateDynamicMaterialInstance(MT_waterocclusion);
    CallFunc_GetTexture_ReturnValue = DynamicFlow->this->GetTexture();
    this->RegisterComponents(Foaminess);
    AShipInternalWater::AddWaterAmount(K2Node_Event_Water_Amount);
    return;
}
