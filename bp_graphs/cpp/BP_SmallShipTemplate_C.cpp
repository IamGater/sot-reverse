// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_SmallShipTemplate_C::GetPxActorCapacityForPhysXAggregate (31 bytes)
void BP_SmallShipTemplate_C::GetPxActorCapacityForPhysXAggregate()
{
    return;
}

// Recovered Kismet: BP_SmallShipTemplate_C::UserConstructionScript (1224 bytes)
void BP_SmallShipTemplate_C::UserConstructionScript()
{
    TArray<UActorComponent*> CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(RiggingSystemComponent);
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(CallFunc_GetComponentsByClass_ReturnValue);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    CallFunc_GetComponentsByClass_ReturnValue = AActor::GetComponentsByClass(RiggingSystemComponent);
    SailHoist* K2Node_DynamicCast_AsSail_Hoist2 = Cast<SailHoist*>(MastMainSailHoistLeft);
    bool K2Node_DynamicCast_bSuccess4 = static_cast<bool>(K2Node_DynamicCast_AsSail_Hoist2);
    SailHoist* K2Node_DynamicCast_AsSail_Hoist = Cast<SailHoist*>(MastMainSailHoistRight);
    bool K2Node_DynamicCast_bSuccess3 = static_cast<bool>(K2Node_DynamicCast_AsSail_Hoist);
    SailAngle* K2Node_DynamicCast_AsSail_Angle = Cast<SailAngle*>(MastMainSailAngleLeft);
    bool K2Node_DynamicCast_bSuccess = static_cast<bool>(K2Node_DynamicCast_AsSail_Angle);
    SailAngle* K2Node_DynamicCast_AsSail_Angle2 = Cast<SailAngle*>(MastMainSailAngleRight);
    bool K2Node_DynamicCast_bSuccess2 = static_cast<bool>(K2Node_DynamicCast_AsSail_Angle2);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue;
    return;
}
