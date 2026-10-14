// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_CursedRogue_SetEnchantedCompassTargetToBriggsy_C::OnBegin (40 bytes)
void BP_CursedRogue_SetEnchantedCompassTargetToBriggsy_C::OnBegin()
{
    ExecuteUbergraph_BP_CursedRogue_SetEnchantedCompassTargetToBriggsy();
    return;
}

// Recovered Kismet: BP_CursedRogue_SetEnchantedCompassTargetToBriggsy_C::ExecuteUbergraph_BP_CursedRogue_SetEnchantedCompassTargetToBriggsy (198 bytes)
void BP_CursedRogue_SetEnchantedCompassTargetToBriggsy_C::ExecuteUbergraph_BP_CursedRogue_SetEnchantedCompassTargetToBriggsy()
{
    this->SignalComplete();
    this->GetVariables(CallFunc_GetVariables_OutStruct);
    UObject* CallFunc_Conv_AssetToObject_ReturnValue = UKismetSystemLibrary::Conv_AssetToObject(CallFunc_GetVariables_OutStruct);
    AActor* UniqueObjectNameForCooking_AsActor = Cast<AActor*>(CallFunc_Conv_AssetToObject_ReturnValue);
    bool UniqueObjectNameForCooking_bSuccess = static_cast<bool>(UniqueObjectNameForCooking_AsActor);
    UBlueprintStepBase::ChangeCompassTargetByActor(UniqueObjectNameForCooking_AsActor);
    return;
}
